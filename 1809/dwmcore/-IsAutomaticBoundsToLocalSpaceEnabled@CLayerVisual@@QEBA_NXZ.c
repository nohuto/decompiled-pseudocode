/*
 * XREFs of ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800102B0
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000F0B0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18001005C (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18001016C (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180010304 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@C.c)
 */

bool __fastcall CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(CLayerVisual *this)
{
  wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::ReportUsageToService();
  return *((_WORD *)this + 288) != 0;
}
