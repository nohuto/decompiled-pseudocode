/*
 * XREFs of ?GetBounds@CTreeEffect@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1800D9C98
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800ECDA0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 * Callees:
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000DC70 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 */

__int64 __fastcall CTreeEffect::GetBounds(__int64 *a1, _OWORD *a2, __int64 a3, _OWORD *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
    return CEffectBrush::GetBounds(*a1, a2, a3, a4);
  return result;
}
