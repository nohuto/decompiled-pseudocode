/*
 * XREFs of ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1802FB48C
 * Callers:
 *     ?s_GetMinimumScrollViewerSize@CMultitaskingViewFrame@@CA?AUCSize@Geometry@@W4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEBU23@@Z @ 0x1802FCD60 (-s_GetMinimumScrollViewerSize@CMultitaskingViewFrame@@CA-AUCSize@Geometry@@W4MultitaskingViewCon.c)
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1803196B0 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x18031992C (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x180319F98 (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ @ 0x18031A030 (-_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ.c)
 *     ?_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@@Z @ 0x18031A0F4 (-_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV-$CCoSimpleArray@VLayoutItem@GridLayou.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x18031A1BC (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThumbnailHeight::GetForScreenHeight(ThumbnailHeight *this, int a2)
{
  int v2; // r8d
  double v3; // xmm0_8
  __int64 result; // rax

  v2 = *((_DWORD *)this + 2);
  if ( *(double *)this == 0.0 )
    v3 = (double)v2;
  else
    v3 = (double)a2 * *(double *)this;
  result = (unsigned int)(int)v3;
  if ( v2 )
  {
    if ( v2 < (int)result )
      return (unsigned int)v2;
  }
  return result;
}
