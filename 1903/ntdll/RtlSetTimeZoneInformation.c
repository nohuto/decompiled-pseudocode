/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1800EB4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return sub_1800EB568(TimeZoneInformation);
}
