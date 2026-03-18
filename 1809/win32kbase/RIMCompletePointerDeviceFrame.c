/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C0122F24
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C011913C (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0129108 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01296D4 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00749B8 (WPP_RECORDER_SF_ddd.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C0122698 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0123700 (rimCountContactsToDeliverWithFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C0123810 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01238D0 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0123E68 (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C0126B0C (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0128580 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C012886C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct RIMCOMPLETEFRAME *v20; // rbx
  unsigned __int16 v21; // r9
  struct RIMCOMPLETEFRAME *v23; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((_QWORD *)a2 + 60);
  v4 = 0;
  LODWORD(v23) = 0;
  v24 = 0;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x35u, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids);
  v11 = *(_QWORD *)(v3 + 704);
  if ( v11 && *(_DWORD *)(v11 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  rimCountContactsToDeliverWithFrame(v3, &v24, &v23);
  v12 = v24;
  if ( !v24 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x38u, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids);
    v13 = (unsigned int)v23;
    goto LABEL_14;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(a1, v3);
  v13 = (unsigned int)v23;
  if ( !(unsigned int)rimStorePointersInHoldingFrame(a1, a2, v12, (unsigned int)v23) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    v21 = 55;
    goto LABEL_11;
  }
  v23 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, a2, &v23) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    v21 = 54;
LABEL_11:
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, v21, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids);
LABEL_14:
    rimFindAndReclaimHoldingFrame(a1, a2, v13, a3);
    goto LABEL_15;
  }
  v20 = v23;
  *((_DWORD *)v23 + 13) = v13;
  if ( (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
  {
    *((_QWORD *)v20 + 4) = *((_QWORD *)a2 + 3);
    *((_DWORD *)v20 + 12) = 1;
  }
  InputTraceLogging::RIM::CompleteFrame((__int64)a2, (__int64)v20, a3);
  rimProcessCompleteFrame(a1, a2, v20);
  v4 = 1;
LABEL_15:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, a2, v4, 0LL);
  WPP_RECORDER_SF_ddd(
    gRimLog,
    3u,
    0x15u,
    0x39u,
    (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
    v4,
    v13,
    v12);
  return v4;
}
