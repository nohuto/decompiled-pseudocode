/*
 * XREFs of Controller_TranslateFrameNumberToQpcValue @ 0x1C00112D8
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C00115D0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C000E6C0 (Controller_GetFrameNumber.c)
 *     Controller_GetQpcValueForFrameMicroFrameBoundary @ 0x1C000E818 (Controller_GetQpcValueForFrameMicroFrameBoundary.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall Controller_TranslateFrameNumberToQpcValue(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  KIRQL v6; // bl
  int FrameNumber; // eax
  int HighPart; // r8d
  int v9; // r9d
  int v10; // r10d
  __int64 v11; // rcx
  __int64 QpcValueForFrameMicroFrameBoundary; // rax
  int v13; // edx
  __int64 LowPart; // rcx
  int v15; // r11d
  int v16; // r14d
  int v17; // r8d
  unsigned int v18; // r9d
  int v19; // r9d
  char v21; // [rsp+38h] [rbp-51h]
  char v22; // [rsp+40h] [rbp-49h]
  __int64 v23; // [rsp+60h] [rbp-29h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h] BYREF
  __int64 v25; // [rsp+70h] [rbp-19h] BYREF
  __int64 v26; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v27; // [rsp+80h] [rbp-9h]
  __int64 *v28; // [rsp+88h] [rbp-1h]
  int *v29; // [rsp+90h] [rbp+7h]
  char *v30; // [rsp+98h] [rbp+Fh]
  int *v31; // [rsp+A0h] [rbp+17h]
  char v32; // [rsp+F0h] [rbp+67h] BYREF
  int v33; // [rsp+F8h] [rbp+6Fh] BYREF
  int v34; // [rsp+100h] [rbp+77h] BYREF
  char v35; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a1 + 648;
  v26 = a1 + 648;
  v27 = (__int64 *)&v32;
  v4 = 0;
  v28 = &v24;
  v24 = 0LL;
  v29 = &v34;
  v23 = 0LL;
  v30 = &v35;
  v31 = &v33;
  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), __int64 *))(WdfFunctions_01023 + 1144))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
    &v26);
  v27 = &v23;
  v26 = v3;
  v28 = &v25;
  (*(void (__fastcall **)(unsigned __int64, _QWORD, char (__fastcall *)(__int64, _QWORD **), __int64 *))(WdfFunctions_01023 + 1144))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_ReadAccumulatedQpcAndFrameDataForTimeSync,
    &v26);
  v6 = KfRaiseIrql(2u);
  FrameNumber = Controller_GetFrameNumber(a1, 0, (unsigned int *)&a2[6], &a2[6].HighPart);
  HighPart = a2[6].HighPart;
  v9 = v33;
  v10 = v34;
  a2[7].LowPart = FrameNumber;
  v11 = (unsigned int)(HighPart + 8 * FrameNumber);
  if ( (unsigned int)v11 < v9 + 8 * v10 )
  {
    a2[5] = KeQueryPerformanceCounter(0LL);
    goto LABEL_13;
  }
  QpcValueForFrameMicroFrameBoundary = Controller_GetQpcValueForFrameMicroFrameBoundary(
                                         v11,
                                         FrameNumber,
                                         HighPart,
                                         FrameNumber,
                                         HighPart,
                                         v32,
                                         v24,
                                         v10,
                                         v9,
                                         v23,
                                         v25,
                                         &a2[4]);
  LowPart = a2[1].LowPart;
  a2[5].QuadPart = QpcValueForFrameMicroFrameBoundary;
  if ( __PAIR64__(a2[1].HighPart, LowPart) )
  {
    v15 = a2[7].LowPart;
    v16 = a2[6].HighPart;
    v17 = a2[1].HighPart;
    v18 = v17 + 8 * LowPart;
    if ( v16 + 8 * v15 >= v18 )
    {
      v13 = v33;
      if ( v18 >= v33 + 8 * v34 )
      {
        a2[2].QuadPart = Controller_GetQpcValueForFrameMicroFrameBoundary(
                           LowPart,
                           v15,
                           v16,
                           LowPart,
                           v17,
                           v32,
                           v24,
                           v34,
                           v33,
                           v23,
                           v25,
                           &a2[4]);
        goto LABEL_14;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = v33;
        v19 = 293;
        v21 = v34;
        goto LABEL_7;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = a2[6].HighPart;
      v19 = 292;
      v21 = a2[7].LowPart;
LABEL_7:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_dddd(*(_QWORD *)(a1 + 72), v13, 4, v19, (__int64)&Context.Logger + 4, LowPart, v17, v21, v22);
    }
LABEL_13:
    v4 = -1073741811;
    goto LABEL_14;
  }
  a2[2].QuadPart = 0LL;
LABEL_14:
  KeLowerIrql(v6);
  return v4;
}
