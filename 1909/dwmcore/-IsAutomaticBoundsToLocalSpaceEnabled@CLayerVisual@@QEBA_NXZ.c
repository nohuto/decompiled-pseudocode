/*
 * XREFs of ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18000E0EC
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000D050 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18000E00C (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18000E058 (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800ECB94 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18000E140 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@C.c)
 */

bool __fastcall CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(CLayerVisual *this)
{
  wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::ReportUsageToService();
  return *((_WORD *)this + 288) != 0;
}
