/*
 * XREFs of ?IsDirty@CVisualTree@@QEBA_NXZ @ 0x1801A9190
 * Callers:
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4830 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B48EC (-GetBoundsInternal@CHwndBitmap@@AEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisualTree::IsDirty(CVisualTree *this)
{
  return (*(_BYTE *)(*((_QWORD *)this + 3) + 88LL) & 0x7F) != 0;
}
