/*
 * XREFs of ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B48EC
 * Callers:
 *     ?HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800211E0 (-HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4830 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800B53DC (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?IsDirty@CVisualTree@@QEBA_NXZ @ 0x1801A9190 (-IsDirty@CVisualTree@@QEBA_NXZ.c)
 */

bool __fastcall CHwndBitmap::GetBoundsInternal(CHwndBitmap *a1, __int64 a2)
{
  bool result; // al
  CVisualTree *v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // xmm0

  result = CHwndBitmap::IsValidVisual(a1);
  if ( result && (v5 = (CVisualTree *)*((_QWORD *)a1 + 14)) != 0LL )
  {
    result = CVisualTree::IsDirty(v5);
    if ( result )
      v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    else
      v7 = *(_OWORD *)(v6 + 36);
    *(_OWORD *)a2 = v7;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)a2 = 0LL;
  }
  return result;
}
