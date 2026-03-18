/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x1408D3820
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x1408D385C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetDynamicTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
