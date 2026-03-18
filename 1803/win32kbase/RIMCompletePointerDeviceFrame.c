/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C00F8C64
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0100AF4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C0058948 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0063C14 (WPP_RECORDER_SF_ddd.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00F950C (rimCountContactsToDeliverWithFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00F9684 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C00F98E4 (rimReclaimHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00F993C (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C00FED4C (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01003F8 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 v16; // r9
  unsigned int v17; // r8d
  _QWORD *HoldingFrame; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 480);
  v3 = 0;
  LODWORD(v22) = 0;
  v23 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x35u,
    (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
  v8 = *(_QWORD *)(v2 + 672);
  if ( v8 && *(_DWORD *)(v8 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  rimCountContactsToDeliverWithFrame(v2, &v23, &v22);
  v9 = v23;
  v10 = v22;
  if ( v23 )
  {
    RIMUpdatePrimaryAndFinalizePointerFlags(a1, v2);
    if ( (unsigned int)rimStorePointersInHoldingFrame(a1, a2, v9, v10) )
    {
      v22 = 0LL;
      if ( (unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, a2, &v22) )
      {
        v15 = v22;
        v3 = 1;
        *(_DWORD *)(v22 + 52) = v10;
        if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
        {
          *(_QWORD *)(v15 + 32) = *(_QWORD *)(a2 + 24);
          *(_DWORD *)(v15 + 48) = 1;
        }
        rimProcessCompleteFrame(a1, a2);
        goto LABEL_16;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
      v16 = 54;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
      v16 = 55;
    }
    v17 = 21;
  }
  else
  {
    v16 = 56;
    v17 = 20;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    v17,
    v16,
    (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( HoldingFrame )
    rimReclaimHoldingFrame(v20, v19, HoldingFrame);
LABEL_16:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, a2, v3, 0LL);
  WPP_RECORDER_SF_ddd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x39u,
    (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids,
    v3,
    v10,
    v9);
  return v3;
}
