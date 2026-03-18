/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00DC498
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C00DB800 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00DD33C (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C014E628 (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1C02C1684 (BmlCompareMonitorRegions.c)
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
