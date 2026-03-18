/*
 * XREFs of ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140137760
 * Callers:
 *     SmpProcessQueryStoreStats @ 0x140323F7C (SmpProcessQueryStoreStats.c)
 *     SmProcessCompressionInfoRequest @ 0x14066B284 (SmProcessCompressionInfoRequest.c)
 * Callees:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140137778 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(__int64 a1)
{
  return ST_STORE<SM_TRAITS>::StGetStatsWorker(a1, 0LL);
}
