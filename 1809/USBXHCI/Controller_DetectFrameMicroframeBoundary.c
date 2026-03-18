/*
 * XREFs of Controller_DetectFrameMicroframeBoundary @ 0x1C000BC40
 * Callers:
 *     Controller_Start @ 0x1C000DCE8 (Controller_Start.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C000E930 (Controller_TimeSyncStartTrackingWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C000C31C (Controller_GetFrameNumber.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_DetectFrameMicroframeBoundary(__int64 a1)
{
  unsigned int v1; // r15d
  unsigned int v3; // r14d
  bool v4; // zf
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  LARGE_INTEGER v8; // rbx
  int FrameNumber; // eax
  int v10; // r12d
  LARGE_INTEGER v11; // rdi
  __int64 v12; // rbx
  char v13; // cl
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  int Ulong; // eax
  __int64 v19; // rcx
  int v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+34h] [rbp-44h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-38h]
  _QWORD v25[2]; // [rsp+48h] [rbp-30h] BYREF
  int v26; // [rsp+58h] [rbp-20h]
  int v27; // [rsp+5Ch] [rbp-1Ch]
  int v28; // [rsp+60h] [rbp-18h]
  int v29; // [rsp+C8h] [rbp+50h] BYREF
  int v30; // [rsp+D0h] [rbp+58h] BYREF
  int v31; // [rsp+D8h] [rbp+60h] BYREF

  v1 = 0;
  v29 = 0;
  v30 = 0;
  *(_QWORD *)NewIrql = KeGetCurrentIrql();
  KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = 1;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 )
      NewIrql[0] = KfRaiseIrql(2u);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v3 == 1 )
      v6 = 100 * PerformanceFrequency.QuadPart;
    else
      v6 = 10 * PerformanceFrequency.QuadPart;
    v7 = v6 / 1000;
    Controller_GetFrameNumber(a1, 0LL, &v31, &v21);
    do
    {
      v8 = KeQueryPerformanceCounter(0LL);
      FrameNumber = Controller_GetFrameNumber(a1, 0LL, &v29, &v30);
      v10 = v30;
      v22 = FrameNumber;
    }
    while ( v8.QuadPart - PerformanceCounter.QuadPart <= v7 && v31 == v29 && v21 == v30 );
    v11 = KeQueryPerformanceCounter(0LL);
    v12 = 1000000 * (v11.QuadPart - v8.QuadPart) / PerformanceFrequency.QuadPart;
    if ( v3 == 2 )
      KeLowerIrql(NewIrql[0]);
    if ( (v31 != v29 || v21 != v10) && v12 <= 10 )
      break;
    v4 = ++v3 == 2;
    if ( v3 > 2 )
    {
      v13 = 0;
      goto LABEL_19;
    }
  }
  v13 = 1;
LABEL_19:
  if ( v13 )
  {
    v27 = v29;
    v14 = *(_QWORD *)(a1 + 128);
    v25[0] = a1 + 584;
    v26 = v22;
    v15 = *(_QWORD **)(v14 + 40);
    v25[1] = v11.QuadPart;
    v28 = v10;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, char (__fastcall *)(__int64, __int64 *), _QWORD *))(WdfFunctions_01023 + 1144))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *v15,
      Interrupter_SetBusEdgeInformationRoutineWithIsrSync,
      v25);
  }
  else
  {
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      a1 + 584);
    DynamicLock_Acquire(*(_QWORD *)(a1 + 592));
    v16 = *(_QWORD *)(a1 + 88);
    v17 = *(_QWORD *)(v16 + 32);
    Ulong = XilRegister_ReadUlong(v16, v17);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v17, Ulong & 0xFFFFFBFF);
    v19 = *(_QWORD *)(a1 + 592);
    *(_BYTE *)(a1 + 584) = 0;
    DynamicLock_Release(v19);
    return (unsigned int)-1073741823;
  }
  return v1;
}
