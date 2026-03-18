/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x1C0122E84
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C011913C (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01296D4 (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0129F9C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C008966C (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C0123E10 (rimReclaimHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0128580 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 */

__int64 __fastcall RIMAbandonPointerDeviceFrame(__int64 a1, __int64 a2)
{
  _QWORD *HoldingFrame; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x33u, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( HoldingFrame && *((_DWORD *)HoldingFrame + 4) )
  {
    rimReclaimHoldingFrame(v6, v5, HoldingFrame);
    RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, a2, 0LL, 1LL);
  }
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x34u, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids);
}
