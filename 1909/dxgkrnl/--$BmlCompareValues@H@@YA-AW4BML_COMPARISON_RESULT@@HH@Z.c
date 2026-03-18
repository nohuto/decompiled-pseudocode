/*
 * XREFs of ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00DC4AC
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1C00DC3AC (BmlCompareRegionsWithPivot.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00DD33C (BmlCompareSourceModesWithMonitors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<int>(int a1, int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)(a1 >= a2) - 1;
}
