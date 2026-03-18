/*
 * XREFs of ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x18016E214
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180096170 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18003D0E0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 */

unsigned int __fastcall CDrawingContext::GetActiveLightCount(const struct CVisualTree **this)
{
  struct CVisual *CurrentVisual; // rax

  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
  return CLightStack::GetActiveLightCount((CLightStack *)(this + 84), CurrentVisual, this[757], 1);
}
