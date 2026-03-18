/*
 * XREFs of ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x18016F8F4
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 */

unsigned int __fastcall CDrawingContext::GetActiveLightCount(const struct CVisualTree **this)
{
  struct CVisual *CurrentVisual; // rax

  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
  return CLightStack::GetActiveLightCount((CLightStack *)(this + 84), CurrentVisual, this[757], 1);
}
