/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x140699B00
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140763F98 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x14069AB88 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(void *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
