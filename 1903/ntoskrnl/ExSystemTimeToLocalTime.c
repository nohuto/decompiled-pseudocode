/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14013CC60
 * Callers:
 *     ExpSetSystemTime @ 0x140596560 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTraceActiveCooling @ 0x140779084 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140785958 (CmpUpdateReorganizeRegistryValues.c)
 *     PopDiagTracePassiveCooling @ 0x1408B01B4 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408B4014 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
