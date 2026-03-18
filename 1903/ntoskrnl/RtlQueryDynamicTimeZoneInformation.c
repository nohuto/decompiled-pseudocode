/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x1408D37E0
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140A22BAC (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406B97C0 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
