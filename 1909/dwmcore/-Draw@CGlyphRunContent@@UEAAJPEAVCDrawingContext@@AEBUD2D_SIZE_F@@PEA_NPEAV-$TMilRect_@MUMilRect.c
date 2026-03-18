/*
 * XREFs of ?Draw@CGlyphRunContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D4EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CGlyphRunContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1802051A0 (-DrawAsDrawList@CGlyphRunContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 */

__int64 __fastcall CGlyphRunContent::Draw(int a1, int a2, int a3, int a4, __int64 a5)
{
  return CGlyphRunContent::DrawAsDrawList(a1, a2, a3, a4, a5, 0LL);
}
