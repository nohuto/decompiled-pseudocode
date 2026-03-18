/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x1408D30E0
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140A22C8C (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406AEEB0 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
