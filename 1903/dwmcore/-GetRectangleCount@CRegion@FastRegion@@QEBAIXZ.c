/*
 * XREFs of ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18008EBF8
 * Callers:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18000CD68 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180016E70 (-GetRectangles@CRegionShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18003CBD0 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18008CF88 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800DBDE8 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180184090 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1802470D0 (-GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802624E4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262B3C (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262C38 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::CRegion::GetRectangleCount(int **this)
{
  int *v1; // rdx
  int *v2; // r8

  v1 = *this;
  if ( !**this )
    return 0LL;
  v2 = &v1[2 * *v1 + 1];
  return ((__int64)v2 + v2[1] - (__int64)v1[4] - (__int64)(v1 + 3)) >> 3;
}
