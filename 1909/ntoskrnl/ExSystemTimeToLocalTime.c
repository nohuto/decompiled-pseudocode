/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14013D240
 * Callers:
 *     ExpSetSystemTime @ 0x1405968F8 (ExpSetSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x140763F98 (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x14077C664 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140787CB8 (CmpUpdateReorganizeRegistryValues.c)
 *     PopDiagTracePassiveCooling @ 0x1408AFA14 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408B38E4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
