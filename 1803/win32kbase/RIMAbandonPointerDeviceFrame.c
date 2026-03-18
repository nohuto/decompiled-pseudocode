/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x1C00588C0
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01017F0 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C0058948 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C00F98E4 (rimReclaimHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 */

__int64 __fastcall RIMAbandonPointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 HoldingFrame; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x33u,
    (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( HoldingFrame && *(_DWORD *)(HoldingFrame + 16) )
  {
    rimReclaimHoldingFrame(v6, v5, HoldingFrame);
    RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, a2, 0LL, 1LL);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x34u,
           (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
}
