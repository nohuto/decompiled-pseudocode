/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14015CA10
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1405969AC (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x140763F98 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408B38E4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
