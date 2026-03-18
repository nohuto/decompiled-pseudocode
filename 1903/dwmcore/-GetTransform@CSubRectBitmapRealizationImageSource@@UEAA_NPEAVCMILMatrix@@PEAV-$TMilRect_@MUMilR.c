/*
 * XREFs of ?GetTransform@CSubRectBitmapRealizationImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@CSubRectBitmapRealizationImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025AA80 (-GetBounds@CSubRectBitmapRealizationImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-.c)
 */

char __fastcall CSubRectBitmapRealizationImageSource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( a3 )
    CSubRectBitmapRealizationImageSource::GetBounds(a1, 0LL, 0LL, a3);
  return 0;
}
