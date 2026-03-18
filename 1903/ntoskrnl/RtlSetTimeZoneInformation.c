/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1408D3840
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x1408D385C (RtlpSetTimeZoneInformationWorker.c)
 */

NTSTATUS __stdcall RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpSetTimeZoneInformationWorker(TimeZoneInformation);
}
