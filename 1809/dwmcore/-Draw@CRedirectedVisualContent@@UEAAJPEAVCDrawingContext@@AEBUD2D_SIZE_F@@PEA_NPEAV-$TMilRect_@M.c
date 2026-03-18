/*
 * XREFs of ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9C80
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 */

__int64 __fastcall CRedirectedVisualContent::Draw(__int64 a1, struct CComposition **a2)
{
  CDrawingContext::DrawVisual(a2, *(struct CVisual **)(a1 + 56), 1);
  return 0LL;
}
