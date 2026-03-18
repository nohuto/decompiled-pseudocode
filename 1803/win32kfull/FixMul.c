/*
 * XREFs of FixMul @ 0x1C02B2F90
 * Callers:
 *     lQueryDEVICEMETRICS @ 0x1C021FA24 (lQueryDEVICEMETRICS.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0221838 (vFillGLYPHDATA_ErrRecover.c)
 *     vGetNotionalGlyphMetrics @ 0x1C0221CE4 (vGetNotionalGlyphMetrics.c)
 *     bComputeMaxGlyph @ 0x1C0221F34 (bComputeMaxGlyph.c)
 *     bSetXform @ 0x1C0222A4C (bSetXform.c)
 *     vCheckForSingularXform @ 0x1C022354C (vCheckForSingularXform.c)
 *     vCalcXformVertical @ 0x1C02240F8 (vCalcXformVertical.c)
 *     vQuantizeXform @ 0x1C0224660 (vQuantizeXform.c)
 *     mth_FixXYMul @ 0x1C02B3550 (mth_FixXYMul.c)
 *     mth_FoldPointSizeResolution @ 0x1C02B3638 (mth_FoldPointSizeResolution.c)
 *     mth_IntelMul @ 0x1C02B36E0 (mth_IntelMul.c)
 *     mth_MxConcat2x2 @ 0x1C02B38AC (mth_MxConcat2x2.c)
 *     mth_Non90DegreeTransformation @ 0x1C02B395C (mth_Non90DegreeTransformation.c)
 *     InvokeGlobalGSScale @ 0x1C02B3B48 (InvokeGlobalGSScale.c)
 *     scl_CalcComponentOffset @ 0x1C02B3E84 (scl_CalcComponentOffset.c)
 *     scl_InitializeScaling @ 0x1C02B4748 (scl_InitializeScaling.c)
 *     scl_Scale @ 0x1C02B50E0 (scl_Scale.c)
 *     scl_ScaleAdvanceWidth @ 0x1C02B51A4 (scl_ScaleAdvanceWidth.c)
 *     scl_ScaleFromFixedFUnits @ 0x1C02B56D8 (scl_ScaleFromFixedFUnits.c)
 *     scl_ScaleUpToSubPixelOverscale @ 0x1C02B5948 (scl_ScaleUpToSubPixelOverscale.c)
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 *     InvokeGetCVTEntry @ 0x1C02C524C (InvokeGetCVTEntry.c)
 *     itrp_CheckSingleWidth @ 0x1C02C65EC (itrp_CheckSingleWidth.c)
 *     itrp_DeltaEngine @ 0x1C02C6A7C (itrp_DeltaEngine.c)
 *     itrp_GetCVTScale @ 0x1C02C8320 (itrp_GetCVTScale.c)
 *     itrp_IUP @ 0x1C02C9AC0 (itrp_IUP.c)
 *     itrp_MPPEM @ 0x1C02CC330 (itrp_MPPEM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixMul(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  bool v4; // sf
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  unsigned __int64 v9; // rax
  int v10; // r8d
  unsigned int v11; // edx

  v2 = 0;
  if ( !a1 || !a2 )
    return 0LL;
  v3 = 1;
  v4 = a1 < 0;
  if ( a1 > 0 )
  {
    if ( a2 < 0 )
    {
LABEL_8:
      v2 = 1;
      goto LABEL_9;
    }
    v4 = a1 < 0;
  }
  if ( v4 && a2 > 0 )
    goto LABEL_8;
LABEL_9:
  v5 = a2 * (__int64)a1;
  v6 = HIDWORD(v5);
  if ( (v5 & 0x8000) == 0 || (!v2 ? (v7 = 1) : (v7 = v5 & 0x7FFF), !v7) )
    v3 = 0;
  v8 = v5 >> 16;
  v9 = HIDWORD(v5);
  v10 = v3 + v8;
  if ( (v6 & 0xFFFF0000) != 0 )
  {
    v11 = 0x80000000;
    if ( (v9 & 0xFFFF0000) == 0xFFFF0000 )
    {
      if ( v10 <= 0 )
        return (unsigned int)v10;
    }
    else
    {
      return 0x80000000 - ((v9 & 0x80000000) != 0LL);
    }
  }
  else
  {
    v11 = 0x7FFFFFFF;
    if ( v10 >= 0 )
      return (unsigned int)v10;
  }
  return v11;
}
