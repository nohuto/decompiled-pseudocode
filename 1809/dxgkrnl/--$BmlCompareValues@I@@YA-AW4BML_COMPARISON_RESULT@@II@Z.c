/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00D7AAC
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C00D7018 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00D7188 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C00D7AEC (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1C0289254 (BmlCompareMonitorRegions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)-(a1 < a2);
}
