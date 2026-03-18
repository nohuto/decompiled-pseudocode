/*
 * XREFs of ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18001382C
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800131D8 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180013458 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 * Callees:
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180013870 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 */

_OWORD *__fastcall CTreeEffectLayer::GetLayerPointAndSize(_OWORD *a1, CEffectBrush *a2, _OWORD *a3, __m128 *a4)
{
  *a1 = *a3;
  if ( a2 && CEffectBrush::HasBlurEffectNode(a2) )
    *a1 = _mm_cvttps_epi32(*a4);
  return a1;
}
