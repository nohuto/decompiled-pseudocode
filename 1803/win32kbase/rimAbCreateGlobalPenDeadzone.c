/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C00E65D8
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi

  v3 = a2;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2);
  *(_DWORD *)(a1 + 476) = 1;
  *(_DWORD *)(a1 + 488) = v4 + 250;
  *(_QWORD *)(a1 + 480) = v3;
  LOBYTE(a2) = 3;
  return WPP_RECORDER_SF_dd(
           WPP_GLOBAL_Control->DeviceExtension,
           a2,
           21,
           10,
           (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
           v3,
           SBYTE4(v3));
}
