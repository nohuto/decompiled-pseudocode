/*
 * XREFs of ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18000C8E0
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000C3BC (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18024B38C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NM@Z @ 0x18000C938 (-IsPixelAligned@@YA_NM@Z.c)
 */

char __fastcall IsPixelAligned(const struct MilRectF *a1)
{
  char v1; // dl
  __int64 v2; // rcx
  char v3; // al
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  char v7; // al
  char v8; // dl
  char v9; // cl

  if ( IsPixelAligned(*(float *)a1) )
  {
    v3 = IsPixelAligned(*(float *)(v2 + 4));
    if ( v3 != v1 )
    {
      v5 = IsPixelAligned(*(float *)(v4 + 8));
      if ( v5 != v1 )
      {
        v7 = IsPixelAligned(*(float *)(v6 + 12));
        v9 = v8;
        if ( v7 != v8 )
          return 1;
        return v9;
      }
    }
  }
  return v1;
}
