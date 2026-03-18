/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x1408D3800
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406B97C0 (RtlpQueryTimeZoneInformationWorker.c)
 */

NTSTATUS __stdcall RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpQueryTimeZoneInformationWorker((char *)TimeZoneInformation, 0xACuLL);
}
