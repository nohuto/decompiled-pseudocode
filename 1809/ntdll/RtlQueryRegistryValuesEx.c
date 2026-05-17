/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1800536E0
 * Callers:
 *     QueryFeatureOverride @ 0x18009F2B4 (QueryFeatureOverride.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180053704 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(int a1, int a2, int a3, int a4, __int64 a5)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4, a5, 1);
}
