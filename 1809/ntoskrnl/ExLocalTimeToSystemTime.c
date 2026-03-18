/*
 * XREFs of ExLocalTimeToSystemTime @ 0x140160BD0
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x140566B6C (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x1407341C0 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     PopNetGetNextDueRefreshTime @ 0x140876D64 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1408CD2D0 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 440LL);
}
