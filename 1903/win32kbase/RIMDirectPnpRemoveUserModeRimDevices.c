/*
 * XREFs of RIMDirectPnpRemoveUserModeRimDevices @ 0x1C0068238
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00A8C90 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1C009BD68 (RIMSyncWalkRimObjList.c)
 */

__int64 RIMDirectPnpRemoveUserModeRimDevices()
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 98, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  result = RIMSyncWalkRimObjList(0LL, lambda_b4c3eb96080f8da5f04a1adf58a2557b_::_lambda_invoker_cdecl_);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 99, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  return result;
}
