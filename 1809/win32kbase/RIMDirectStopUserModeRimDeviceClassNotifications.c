/*
 * XREFs of RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C0052538
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C0094CD0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1C008A0A0 (RIMSyncWalkRimObjList.c)
 */

__int64 RIMDirectStopUserModeRimDeviceClassNotifications()
{
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x7Bu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  RIMSyncWalkRimObjList(0LL, lambda_4a9f2014d50dbcc8c02b38ea7afd9847_::_lambda_invoker_cdecl_);
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x7Du, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
}
