/*
 * XREFs of BmlGetModeCategoryForRegion @ 0x1C00DCCA8
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00DCCFC (BmlCompareSourceModesWithMonitors.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C02C19B8 (BmlGetRecommendedContentSizeForPath.c)
 *     _BmlGetPathModeListForPath @ 0x1C02C2418 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00DB7C4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetModeCategoryForRegion(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r10
  char v3; // r11
  bool v4; // cf

  if ( (unsigned int)BmlCompareModeExtents(a1, a2) != 1 )
  {
    if ( !v3 )
    {
      if ( *v2 < 0x400u )
        return 2LL;
      if ( *v2 != 1024 )
      {
        v4 = v2[1] < 0x300u;
        goto LABEL_6;
      }
      v4 = v2[1] < 0x300u;
      if ( v2[1] != 768 )
      {
LABEL_6:
        if ( v4 )
          return 2LL;
      }
    }
    return 3LL;
  }
  return 1LL;
}
