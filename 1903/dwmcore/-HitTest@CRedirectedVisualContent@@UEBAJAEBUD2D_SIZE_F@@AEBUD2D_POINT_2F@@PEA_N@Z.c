/*
 * XREFs of ?HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18020DD30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800062C8 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800880F0 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 */

__int64 __fastcall CRedirectedVisualContent::HitTest(
        CRedirectedVisualContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  bool IsInfinite; // al
  const struct MilRectF *v5; // rdx
  const struct D2D_POINT_2F *v6; // r8
  char *v7; // r9
  char v8; // r10
  char v9; // al

  IsInfinite = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)this + 18);
  v8 = 0;
  if ( !IsInfinite )
  {
    v9 = IsPointInRect(v6, v5);
    if ( v9 != v8 )
      v8 = 1;
  }
  *v7 = v8;
  return 0LL;
}
