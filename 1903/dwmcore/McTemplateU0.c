/*
 * XREFs of McTemplateU0 @ 0x18015EAF8
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180012234 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180025F60 (-Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002A360 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033794 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003F2B0 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800486D4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180049A44 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18007AF80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18008CF88 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z @ 0x18008D350 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18008EC40 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800922F8 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180093D30 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800940C4 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800943DC (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180096C58 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180096CB0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800977A8 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x1800B5288 (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800CC4E0 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800CD358 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800D20E0 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800DBBE8 (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 *     ?SendEndOfUpdates@CDWMOffScreenSwapChain@@UEAAJXZ @ 0x1800DD210 (-SendEndOfUpdates@CDWMOffScreenSwapChain@@UEAAJXZ.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DE60C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ @ 0x1800DF708 (-ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ.c)
 *     ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1801654D0 (-NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017D1E4 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017E698 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801CB410 (-GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180245980 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(a1, a2, a3, 1u, &v4);
}
