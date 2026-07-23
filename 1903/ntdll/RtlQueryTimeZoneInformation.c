/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x180002B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return sub_180002B80(TimeZoneInformation, 0xACuLL);
}
