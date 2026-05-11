/*
 * XREFs of WmiLogEvent @ 0x1C0002640
 * Callers:
 *     WmiLogStreamStateChange @ 0x1C000272C (WmiLogStreamStateChange.c)
 *     WmiLogPowerStateChange @ 0x1C0002858 (WmiLogPowerStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000F7E0 (__security_check_cookie.c)
 *     memset @ 0x1C00113C0 (memset.c)
 */

NTSTATUS __fastcall WmiLogEvent(__int64 a1, unsigned __int8 a2, __int128 *a3, int a4, int a5, int a6, int a7)
{
  __int128 v7; // xmm6
  NTSTATUS result; // eax
  _DWORD v9[8]; // [rsp+28h] [rbp-59h] BYREF
  _QWORD WnodeEventItem[8]; // [rsp+48h] [rbp-39h] BYREF

  v7 = *a3;
  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  result = -1073741823;
  if ( ExBusWmiLogEnable && ExBusWmiLoggerHandle && (unsigned int)ExBusWmiLogLevel >= 4 )
  {
    v9[0] = a2;
    v9[2] = a5;
    v9[3] = a6;
    v9[4] = a7;
    WnodeEventItem[6] = v9;
    WnodeEventItem[1] = ExBusWmiLoggerHandle;
    LOWORD(WnodeEventItem[0]) = 64;
    v9[1] = a4;
    v9[5] = 0;
    LODWORD(WnodeEventItem[7]) = 24;
    HIDWORD(WnodeEventItem[5]) = 1179648;
    BYTE4(WnodeEventItem[0]) = a2;
    BYTE5(WnodeEventItem[0]) = 4;
    *(_OWORD *)&WnodeEventItem[3] = v7;
    return IoWMIWriteEvent(WnodeEventItem);
  }
  return result;
}
