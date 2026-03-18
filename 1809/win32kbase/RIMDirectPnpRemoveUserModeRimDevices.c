/*
 * XREFs of RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00524D4
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C0094CD0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1C008A0A0 (RIMSyncWalkRimObjList.c)
 */

__int64 RIMDirectPnpRemoveUserModeRimDevices()
{
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x64u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  RIMSyncWalkRimObjList(0LL, lambda_b4c3eb96080f8da5f04a1adf58a2557b_::_lambda_invoker_cdecl_);
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x65u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
}
