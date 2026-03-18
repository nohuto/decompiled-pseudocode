/*
 * XREFs of ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078
 * Callers:
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1800065C0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012E74 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18001A914 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800A0F80 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x18016AFFC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x18016B488 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180178910 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180178CE8 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180179178 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180179214 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801793A4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x1801BD208 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@AEBV-$shared.c)
 * Callees:
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1800A12BC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 */

struct CBitmapRealization *__fastcall CCompositionSurfaceInfo::GetRenderingRealizationNoRef(
        CCompositionSurfaceInfo *this)
{
  struct CBitmapRealization *result; // rax

  result = (struct CBitmapRealization *)*((_QWORD *)this + 15);
  if ( !result && !*((_BYTE *)this + 408) )
  {
    *((_BYTE *)this + 408) = 1;
    CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(this);
    result = (struct CBitmapRealization *)*((_QWORD *)this + 15);
    *((_BYTE *)this + 408) = 0;
  }
  return result;
}
