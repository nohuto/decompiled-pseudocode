/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14015C370
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1405969AC (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408B4014 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
