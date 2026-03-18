/*
 * XREFs of BmlCompareRegionsWithPivot @ 0x1C00D79EC
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00C6070 (BmlCompareTargetModes.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00D7018 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00D739C (BmlCompareSourceModesWithConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C0289630 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C00065B4 (--$DIFF@H@@YAHHH@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00D5938 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00D7AC0 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 */

__int64 __fastcall BmlCompareRegionsWithPivot(
        struct _D3DKMDT_2DREGION *a1,
        struct _D3DKMDT_2DREGION *a2,
        struct _D3DKMDT_2DREGION *a3)
{
  unsigned __int64 v6; // r10
  signed __int64 v7; // r8
  __int128 v8; // rax
  signed __int64 v9; // rax
  int ScaledAspectRatio; // edi
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax

  v6 = a3->cx * (unsigned __int64)a3->cy;
  v7 = abs64(a1->cx * (unsigned __int64)a1->cy - v6);
  v8 = (__int64)(a2->cx * (unsigned __int64)a2->cy - v6);
  v9 = (*((_QWORD *)&v8 + 1) ^ v8) - *((_QWORD *)&v8 + 1);
  if ( v9 == v7 )
  {
    ScaledAspectRatio = BmlGetScaledAspectRatio(a3);
    v12 = BmlGetScaledAspectRatio(a1);
    v13 = DIFF<int>(v12, ScaledAspectRatio);
    v14 = BmlGetScaledAspectRatio(a2);
    v15 = DIFF<int>(v14, ScaledAspectRatio);
    return BmlCompareValues<int>(v15, v13);
  }
  else if ( v9 <= v7 )
  {
    return (unsigned int)(v9 >= v7) - 1;
  }
  else
  {
    return 1LL;
  }
}
