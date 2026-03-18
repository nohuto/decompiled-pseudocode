/*
 * XREFs of ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1801B6FDC
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18019A8A0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1801ACF08 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800A21D4 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 */

float __fastcall CVisual::GetVisualAlpha(CVisual *this, CVisual **a2)
{
  if ( a2 && this == a2[3] && *((_BYTE *)a2 + 34) )
    return FLOAT_1_0;
  else
    return fminf(1.0, fmaxf(CVisual::GetOpacityInternal(this), 0.0));
}
