/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C014F320
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C013B7D4 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C013EDA0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C014194C (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0155C04 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0155DF4 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01562B0 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C008B464 (WPP_RECORDER_SF_ddd.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C014E614 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C014FC14 (rimCountContactsToDeliverWithFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C014FD24 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C014FDE4 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C015044C (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C01534D4 (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01552A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0155594 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, __int64 a3)
{
  unsigned int v3; // r15d
  struct RawInputManagerObject *v5; // rbp
  void *v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r12d
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct RIMCOMPLETEFRAME *v19; // rdi
  int v20; // edx
  int v21; // r9d
  int v22; // edx
  int v23; // edx
  struct RIMCOMPLETEFRAME *v25; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v5 = a1;
  v6 = &WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (struct RawInputManagerObject *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        1,
        53,
        (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
    }
  }
  v7 = *((_QWORD *)a2 + 60);
  v8 = 0;
  LODWORD(v25) = 0;
  v26 = 0;
  v9 = *(_QWORD *)(v7 + 712);
  if ( v9 && *(_DWORD *)(v9 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v6, a3);
  rimCountContactsToDeliverWithFrame(v7, &v26, &v25);
  v11 = v26;
  if ( !v26 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 56, (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
    }
    v12 = (unsigned int)v25;
    goto LABEL_21;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(v5, v7);
  v12 = (unsigned int)v25;
  if ( !(unsigned int)rimStorePointersInHoldingFrame(v5, a2, v11, (unsigned int)v25) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v21 = 55;
    goto LABEL_15;
  }
  v25 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(v5, a2, &v25) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_21:
      rimFindAndReclaimHoldingFrame(v5, a2, v12, v3);
      goto LABEL_22;
    }
    v21 = 54;
LABEL_15:
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, v21, (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
    goto LABEL_21;
  }
  v19 = v25;
  *((_DWORD *)v25 + 19) = v12;
  if ( (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
  {
    *((_QWORD *)v19 + 4) = *((_QWORD *)a2 + 3);
    *((_DWORD *)v19 + 18) = 1;
  }
  InputTraceLogging::RIM::CompleteFrame((__int64)a2, (__int64)v19, v3);
  rimProcessCompleteFrame(v5, a2, v19);
  v8 = 1;
LABEL_22:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(v5, a2, v8, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_ddd(
      (_DWORD)gRimLog,
      v22,
      1,
      57,
      (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
      v8,
      v12,
      v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v23) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          1,
          58,
          (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
      }
    }
  }
  return v8;
}
