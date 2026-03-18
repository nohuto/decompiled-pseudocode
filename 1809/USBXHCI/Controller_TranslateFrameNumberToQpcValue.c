/*
 * XREFs of Controller_TranslateFrameNumberToQpcValue @ 0x1C000EAB8
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C000ED90 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C000C31C (Controller_GetFrameNumber.c)
 *     Controller_GetQpcValueForFrameMicroFrameBoundary @ 0x1C000C464 (Controller_GetQpcValueForFrameMicroFrameBoundary.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall Controller_TranslateFrameNumberToQpcValue(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v3; // rbx
  KIRQL v5; // si
  int FrameNumber; // eax
  int HighPart; // r8d
  int v8; // r9d
  int v9; // r11d
  __int64 QpcValueForFrameMicroFrameBoundary; // rax
  int v11; // edx
  union _LARGE_INTEGER v12; // rcx
  unsigned int v13; // ebx
  int LowPart; // r11d
  int v15; // r14d
  int v16; // r8d
  unsigned int v17; // r9d
  int v18; // r9d
  char v20; // [rsp+38h] [rbp-51h]
  char v21; // [rsp+40h] [rbp-49h]
  union _LARGE_INTEGER v22; // [rsp+60h] [rbp-29h] BYREF
  __int64 v23; // [rsp+68h] [rbp-21h] BYREF
  __int64 v24; // [rsp+70h] [rbp-19h] BYREF
  __int64 v25; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v26; // [rsp+80h] [rbp-9h]
  union _LARGE_INTEGER *v27; // [rsp+88h] [rbp-1h]
  int *v28; // [rsp+90h] [rbp+7h]
  char *v29; // [rsp+98h] [rbp+Fh]
  int *v30; // [rsp+A0h] [rbp+17h]
  char v31; // [rsp+F0h] [rbp+67h] BYREF
  int v32; // [rsp+F8h] [rbp+6Fh] BYREF
  int v33; // [rsp+100h] [rbp+77h] BYREF
  char v34; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a1 + 584;
  v25 = a1 + 584;
  v26 = (__int64 *)&v31;
  v27 = (union _LARGE_INTEGER *)&v24;
  v28 = &v33;
  v29 = &v34;
  v30 = &v32;
  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), __int64 *))(WdfFunctions_01023 + 1144))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
    &v25);
  v26 = &v23;
  v25 = v3;
  v27 = &v22;
  (*(void (__fastcall **)(unsigned __int64, _QWORD, char (__fastcall *)(__int64, _QWORD **), __int64 *))(WdfFunctions_01023 + 1144))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_ReadAccumulatedQpcAndFrameDataForTimeSync,
    &v25);
  v5 = KfRaiseIrql(2u);
  FrameNumber = Controller_GetFrameNumber(a1, 0, (unsigned int *)&a2[6], &a2[6].HighPart);
  HighPart = a2[6].HighPart;
  v8 = v32;
  v9 = v33;
  a2[7].LowPart = FrameNumber;
  if ( HighPart + 8 * FrameNumber < (unsigned int)(v8 + 8 * v9) )
  {
    a2[5] = KeQueryPerformanceCounter(0LL);
    goto LABEL_11;
  }
  QpcValueForFrameMicroFrameBoundary = Controller_GetQpcValueForFrameMicroFrameBoundary(
                                         v22,
                                         FrameNumber,
                                         HighPart,
                                         FrameNumber,
                                         HighPart,
                                         v31,
                                         v24,
                                         v9,
                                         v8,
                                         v23,
                                         v22.QuadPart,
                                         &a2[4]);
  v12.QuadPart = a2[1].LowPart;
  v13 = 0;
  a2[5].QuadPart = QpcValueForFrameMicroFrameBoundary;
  if ( __PAIR64__(a2[1].HighPart, v12.LowPart) )
  {
    LowPart = a2[7].LowPart;
    v15 = a2[6].HighPart;
    v16 = a2[1].HighPart;
    v17 = v16 + 8 * v12.LowPart;
    if ( v15 + 8 * LowPart >= v17 )
    {
      v11 = v32;
      if ( v17 >= v32 + 8 * v33 )
      {
        a2[2].QuadPart = Controller_GetQpcValueForFrameMicroFrameBoundary(
                           v12,
                           LowPart,
                           v15,
                           v12.LowPart,
                           v16,
                           v31,
                           v24,
                           v33,
                           v32,
                           v23,
                           v22.QuadPart,
                           &a2[4]);
        goto LABEL_12;
      }
      v21 = v32;
      v18 = 290;
      v20 = v33;
    }
    else
    {
      v21 = a2[6].HighPart;
      v18 = 289;
      v20 = a2[7].LowPart;
    }
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_dddd(*(_QWORD *)(a1 + 72), v11, 4, v18, (__int64)&Context.Logger + 4, v12.QuadPart, v16, v20, v21);
LABEL_11:
    v13 = -1073741811;
    goto LABEL_12;
  }
  a2[2].QuadPart = 0LL;
LABEL_12:
  KeLowerIrql(v5);
  return v13;
}
