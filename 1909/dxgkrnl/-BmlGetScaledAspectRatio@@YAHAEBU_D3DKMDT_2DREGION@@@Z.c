/*
 * XREFs of ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00DC46C
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1C00DC3AC (BmlCompareRegionsWithPivot.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00DD33C (BmlCompareSourceModesWithMonitors.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DDF98 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetScaledAspectRatio(const struct _D3DKMDT_2DREGION *a1, __int64 a2)
{
  signed int cy; // r8d
  __int64 v5; // rax

  cy = a1->cy;
  if ( cy )
    return (unsigned int)((signed int)(100 * a1->cx) / cy);
  v5 = WdLogNewEntry5_WdAssertion(a1, a2);
  WdLogEvent5_WdAssertion(v5);
  cy = a1->cy;
  if ( cy )
    return (unsigned int)((signed int)(100 * a1->cx) / cy);
  else
    return 0LL;
}
