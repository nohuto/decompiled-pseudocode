/*
 * XREFs of ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180022AA8
 * Callers:
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180022B7C (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?MarkUnoccludableAsRendered@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z @ 0x180166354 (-MarkUnoccludableAsRendered@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18016EA90 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRect.c)
 *     ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1801992A0 (-GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A3240 (-NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A42AC (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801A79B0 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7C04 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024EE70 (-NotifyRenderedRect@CLocalAppRenderTarget@@IEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180022B04 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 */

__int64 __fastcall PixelAlign(__int64 a1, __int64 a2)
{
  int v2; // eax
  _DWORD *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // r9

  v2 = PixelAlign(a1, 0LL, a2, a1);
  *v3 = v2;
  v7 = PixelAlign(v5, v4, v6, v3);
  *(_DWORD *)(v8 + 4) = v7;
  v11 = PixelAlign(v9, 1LL, v10, v8);
  *(_DWORD *)(v12 + 8) = v11;
  v16 = PixelAlign(v14, v13, v15, v12);
  *(_DWORD *)(v17 + 12) = v16;
  return v17;
}
