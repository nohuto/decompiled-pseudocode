/*
 * XREFs of ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18016A7E4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18016A928 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x180203B70 (-CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagR.c)
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180203EDC (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C59C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall ConvertSDRBoostToSDRWhiteLevel(float a1, enum DXGI_COLOR_SPACE_TYPE a2)
{
  float v2; // xmm3_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - 1.0)) & _xmm);
  if ( v2 < 0.0000011920929 || IsDXGIColorSpaceHDR(a2) )
    return 0LL;
  else
    return (unsigned int)(int)(float)(a1 * 80.0);
}
