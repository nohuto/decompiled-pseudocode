/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C010FEC0
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi

  v4 = a2;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2, a3);
  *(_DWORD *)(a1 + 492) = 1;
  *(_DWORD *)(a1 + 504) = v5 + 250;
  *(_QWORD *)(a1 + 496) = v4;
  LOBYTE(a2) = 3;
  return WPP_RECORDER_SF_dd(
           gRimLog,
           a2,
           22,
           10,
           (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids,
           v4,
           SBYTE4(v4));
}
