/*
 * XREFs of memcmp_0 @ 0x1800F01FF
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18000790C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x180014A60 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18002AA44 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180043C10 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x18004ABF8 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18005A9E0 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180075BC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800760D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800981F0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A316C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A4430 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800B1F28 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800B3C5C (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800B436C (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800B8A20 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800BFDBC (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800D8F50 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180183D20 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x1801935EC (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801A931C (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801ADD18 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x1801B73B4 (-SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801C02E8 (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x1801E1690 (-ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATI.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801E6808 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801FF268 (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18020195C (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x180211BF8 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 *     IsSolidColorSurface @ 0x18021AEB0 (IsSolidColorSurface.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
