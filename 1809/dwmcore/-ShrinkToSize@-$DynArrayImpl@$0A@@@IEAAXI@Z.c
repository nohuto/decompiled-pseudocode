/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0
 * Callers:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18001D440 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x180022594 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_ @ 0x1800226F0 (_anonymous_namespace_--SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18002F69C (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800317B0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180036D7C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180042E30 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180045720 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800457F0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180046F68 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18004E12C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18004EA00 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x180054DDC (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18005D180 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18005F350 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x1800660C0 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1800666A8 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180066DAC (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x180068AA0 (--1CAnimation@@UEAA@XZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180068CF0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18006A154 (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18006B4DC (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18006B5B4 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x18006EC70 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18006EEB8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18007339C (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D0B0 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18008115C (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x1800811BC (-ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800811FC (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180081600 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18008AC60 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E760 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18008EAF0 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18008EF58 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180094640 (--1CWindowNode@@MEAA@XZ.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x1800A139C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800B0960 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x1800C1690 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800C1A34 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800C1E94 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800C2418 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C77D8 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800C7A44 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800CC9D0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x1800D7C58 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800D82D8 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800D8614 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800E1CA4 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800E8070 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800E9210 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800EAACC (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800EAB84 (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800EAD3C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLe.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18014A94C (--1CComposition@@MEAA@XZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18014C060 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x18014C210 (--1CFrameInfo@@QEAA@XZ.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x180151C74 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152AAC (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180152CF8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18015AE14 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusio.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C094 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C7A0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015CC80 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x18016C768 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x180175BE0 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@IEAAXXZ @ 0x180175C5C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801766A0 (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionCont.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x18017A854 (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 *     ?ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_CLEARTIMEEVENTS@@@Z @ 0x18018A7E0 (-ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_CLEARTIMEEVENT.c)
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x1801AB0F0 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1801B2284 (--1CScalar@@MEAA@XZ.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801B4AA8 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801B7C20 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1801B7DB0 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801B8D78 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801B9ED0 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801BF434 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D5F80 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180211E7C (--1CHolographicClient@@MEAA@XZ.c)
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180212BD4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x180215BD0 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

void __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v2; // r10
  void *v4; // rcx
  unsigned __int64 v5; // r8
  SIZE_T v6; // rax
  int v7; // eax
  LPVOID v8; // rax

  v2 = *(void **)a1;
  v4 = *(void **)(a1 + 8);
  if ( v2 == v4 )
    return;
  v5 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
  if ( v5 > 0xFFFFFFFF )
    return;
  v6 = (unsigned int)v5;
  if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
  {
    memcpy_0(v4, v2, (unsigned int)v5);
    if ( *(_QWORD *)a1 )
      HeapFree(WPF::g_processHeap, 0, *(LPVOID *)a1);
    *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 16);
    goto LABEL_8;
  }
  if ( v2 )
  {
    v8 = HeapReAlloc(WPF::g_processHeap, 0, v2, (unsigned int)v5);
    if ( !v8 )
      return;
LABEL_15:
    *(_QWORD *)a1 = v8;
    v7 = *(_DWORD *)(a1 + 24);
LABEL_8:
    *(_DWORD *)(a1 + 20) = v7;
    return;
  }
  if ( !(_DWORD)v5 )
    v6 = 1LL;
  v8 = HeapAlloc(WPF::g_processHeap, 0, v6);
  if ( v8 )
    goto LABEL_15;
}
