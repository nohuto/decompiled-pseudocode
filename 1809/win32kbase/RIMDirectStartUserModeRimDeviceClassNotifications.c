/*
 * XREFs of RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00A61B0
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C0094CD0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1C008A0A0 (RIMSyncWalkRimObjList.c)
 */

__int64 RIMDirectStartUserModeRimDeviceClassNotifications()
{
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x79u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  RIMSyncWalkRimObjList(
    0,
    (void (__fastcall *)(_QWORD *))lambda_1003e327db36c11300f040891a0577ee_::_lambda_invoker_cdecl_);
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x7Au, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
}
