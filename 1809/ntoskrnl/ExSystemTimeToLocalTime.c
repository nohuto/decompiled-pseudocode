/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14013AF80
 * Callers:
 *     ExpSetSystemTime @ 0x140566AC8 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1407341C0 (ExpRefreshSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTraceActiveCooling @ 0x140751700 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075E830 (CmpUpdateReorganizeRegistryValues.c)
 *     PopDiagTracePassiveCooling @ 0x14087342C (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x140876D64 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1408CD2D0 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 440LL);
}
