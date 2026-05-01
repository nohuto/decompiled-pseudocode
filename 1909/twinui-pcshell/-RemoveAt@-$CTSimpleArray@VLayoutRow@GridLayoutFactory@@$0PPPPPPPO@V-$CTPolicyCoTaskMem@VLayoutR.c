/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ_K@Z @ 0x180399324
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1803997F8 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     ?RemoveAll@?$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardCompareHelper@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardMergeHelper@UAppSpecialInfo@CAppTransitionManager@@@@@@QEAAXXZ @ 0x18039924C (-RemoveAll@-$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 */

__int64 __fastcall CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = 48 * a2;
  CTSimpleArray<CAppTransitionManager::AppSpecialInfo,4294967294,CTPolicyCoTaskMem<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardCompareHelper<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardMergeHelper<CAppTransitionManager::AppSpecialInfo>>::RemoveAll(48 * a2 + *a1);
  v6 = a1[1];
  if ( a2 != v6 - 1 )
  {
    memmove_0((void *)(v5 + *a1), (const void *)(v5 + *a1 + 48), 48 * (v6 - a2) - 48);
    v6 = a1[1];
  }
  a1[1] = v6 - 1;
  return 0LL;
}
