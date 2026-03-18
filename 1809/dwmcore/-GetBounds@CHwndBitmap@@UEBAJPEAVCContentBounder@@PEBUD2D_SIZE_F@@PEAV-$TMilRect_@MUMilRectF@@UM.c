/*
 * XREFs of ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008FAE0
 * Callers:
 *     ?GetBounds@CHwndBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F0A70 (-GetBounds@CHwndBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetTransform@CHwndBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019A9D0 (-GetTransform@CHwndBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18008F850 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18008F888 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EF4B0 (-GetBoundsInternal@CHwndBitmap@@AEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 */

__int64 __fastcall CHwndBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CHwndBitmap *v4; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ecx

  v4 = (CHwndBitmap *)(a1 - 8);
  v6 = 0;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 8))
    && (v9 = CHwndBitmap::EnsureVisualTree(v4, v7, v8), v6 = v9, v9 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x8Du);
  }
  else
  {
    CHwndBitmap::GetBoundsInternal(v4, a4);
  }
  return v6;
}
