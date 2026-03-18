/*
 * XREFs of ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180007C10 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180008960 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180011DF8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180012040 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001274C (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066580 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800B8870 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800EABB0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800EADB0 (-GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C8DD0 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x180259538 (-GetPlaneOfVisual@ShadowHelpers@@YA-AUD2D_VECTOR_4F@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::GetEffectiveSize(CVisual *this, float *a2, float *a3)
{
  *a2 = *((float *)this + 33);
  *a3 = *((float *)this + 34);
  return *((float *)this + 33) != 0.0 && *((float *)this + 34) != 0.0;
}
