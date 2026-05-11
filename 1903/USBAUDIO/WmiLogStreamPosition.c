/*
 * XREFs of WmiLogStreamPosition @ 0x1C00025BC
 * Callers:
 *     PropertyGetAudioPosition @ 0x1C00257D0 (PropertyGetAudioPosition.c)
 *     PropertyGetAudioPositionEx @ 0x1C0025920 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0010AE0 (__security_check_cookie.c)
 *     memset @ 0x1C0012700 (memset.c)
 */

NTSTATUS __fastcall WmiLogStreamPosition(_QWORD *a1, int a2)
{
  NTSTATUS result; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v6; // [rsp+28h] [rbp-21h]
  __int64 v7; // [rsp+30h] [rbp-19h]
  __int64 v8; // [rsp+38h] [rbp-11h]
  __int64 v9; // [rsp+40h] [rbp-9h]
  _QWORD WnodeEventItem[8]; // [rsp+50h] [rbp+7h] BYREF

  memset((char *)WnodeEventItem + 2, 0, 0x3EuLL);
  result = -1073741823;
  if ( ExBusWmiLogEnable && ExBusWmiLoggerHandle && (unsigned int)ExBusWmiLogLevel >= 5 )
  {
    v6 = a1[2];
    v7 = a1[3];
    v8 = a1[1];
    v9 = a1[4];
    WnodeEventItem[6] = v5;
    WnodeEventItem[1] = ExBusWmiLoggerHandle;
    LOWORD(WnodeEventItem[0]) = 64;
    v5[0] = 48;
    v5[1] = a2;
    LODWORD(WnodeEventItem[7]) = 40;
    HIDWORD(WnodeEventItem[5]) = 1179648;
    WORD2(WnodeEventItem[0]) = 1328;
    *(_OWORD *)&WnodeEventItem[3] = ExBus_Position_GUID;
    return IoWMIWriteEvent(WnodeEventItem);
  }
  return result;
}
