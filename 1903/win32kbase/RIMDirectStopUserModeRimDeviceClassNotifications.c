/*
 * XREFs of RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00681B4
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00A8C90 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1C009BD68 (RIMSyncWalkRimObjList.c)
 */

__int64 RIMDirectStopUserModeRimDeviceClassNotifications()
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 121, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  result = RIMSyncWalkRimObjList(0LL, lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::_lambda_invoker_cdecl_);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 123, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  return result;
}
