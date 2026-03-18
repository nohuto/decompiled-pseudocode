/*
 * XREFs of ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1801F1F10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180053120 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 */

char __fastcall CProjectedShadow::IsDrawListCacheDirty(
        CProjectedShadow *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v5; // eax
  char v6; // bl
  unsigned __int64 v7; // r10
  CRenderTargetImageSource *v8; // rax
  CRenderTargetImageSource *v9; // rax

  v5 = *((_DWORD *)this + 62);
  v6 = 0;
  v7 = *((_QWORD *)a2 + 3);
  switch ( v5 )
  {
    case 0:
      v9 = (CRenderTargetImageSource *)*((_QWORD *)this + 36);
LABEL_16:
      if ( *((_QWORD *)v9 + 24) <= v7 )
        goto LABEL_17;
      return 1;
    case 1:
      v9 = CProjectedShadow::s_cpFastShadowIntermediate;
      goto LABEL_16;
    case 2:
      if ( *((_QWORD *)CProjectedShadow::s_cpHalfBlurAsset + 24) <= v7 )
      {
        v8 = CProjectedShadow::s_cp1xBlurAsset;
        goto LABEL_7;
      }
      return 1;
  }
  if ( v5 != 3 )
  {
    if ( (unsigned int)(v5 - 4) > 1 )
      goto LABEL_17;
    goto LABEL_6;
  }
  if ( *((_QWORD *)CProjectedShadow::s_cp1xBlurAsset + 24) > v7 )
    return 1;
LABEL_6:
  v8 = CProjectedShadow::s_cp2xBlurAsset;
LABEL_7:
  if ( *((_QWORD *)v8 + 24) > v7 || *(_QWORD *)&CProjectedShadow::s_cpMaskForBlur[24] > v7 )
    return 1;
LABEL_17:
  if ( CContent::IsDrawListCacheDirty(this, a2, a3, a4, a5) )
    return 1;
  return v6;
}
