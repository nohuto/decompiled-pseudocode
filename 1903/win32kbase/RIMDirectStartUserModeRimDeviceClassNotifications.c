/*
 * XREFs of RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00BAB20
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00A8C90 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1C009BD68 (RIMSyncWalkRimObjList.c)
 */

void RIMDirectStartUserModeRimDeviceClassNotifications()
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 119, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  RIMSyncWalkRimObjList(
    0,
    (void (__fastcall *)(_QWORD *))lambda_1003e327db36c11300f040891a0577ee_::_lambda_invoker_cdecl_);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 120, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
}
