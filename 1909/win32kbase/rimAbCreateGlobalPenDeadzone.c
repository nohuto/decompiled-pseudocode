/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C0138764
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013983C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C011C508 (WPP_RECORDER_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  _UNKNOWN **result; // rax

  v4 = a2;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2, a3);
  *(_QWORD *)(a1 + 496) = v4;
  *(_DWORD *)(a1 + 492) = 1;
  *(_DWORD *)(a1 + 504) = v5 + 250;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_Dd(
                          (_DWORD)gRimLog,
                          a2,
                          1,
                          10,
                          (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids,
                          v4,
                          *(_DWORD *)(a1 + 500));
  }
  return result;
}
