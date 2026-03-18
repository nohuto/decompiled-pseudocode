/*
 * XREFs of ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B130C
 * Callers:
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800B1288 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?MarkUnoccludableAsRendered@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z @ 0x180167A44 (-MarkUnoccludableAsRendered@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180170170 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRect.c)
 *     ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18019AB60 (-GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4B00 (-NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5B6C (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801A9270 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A94C4 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802505E0 (-NotifyRenderedRect@CLocalAppRenderTarget@@IEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800595F0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 */

__int64 __fastcall PixelAlign(__int64 a1, _DWORD *a2, double a3)
{
  int v3; // eax
  __int64 v4; // r8
  double v5; // xmm0_8
  _DWORD *v6; // r9
  int v7; // edx
  int v8; // eax
  __int64 v9; // r8
  double v10; // xmm0_8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r8
  double v14; // xmm0_8
  __int64 v15; // r9
  int v16; // edx
  int v17; // eax
  __int64 v18; // r9

  v3 = PixelAlign(COERCE_DOUBLE((unsigned __int64)*a2), 0, a3);
  *(_QWORD *)&v5 = *(unsigned int *)(v4 + 4);
  *v6 = v3;
  v8 = PixelAlign(v5, v7, a3);
  *(_QWORD *)&v10 = *(unsigned int *)(v9 + 8);
  *(_DWORD *)(v11 + 4) = v8;
  v12 = PixelAlign(v10, 1, a3);
  *(_QWORD *)&v14 = *(unsigned int *)(v13 + 12);
  *(_DWORD *)(v15 + 8) = v12;
  v17 = PixelAlign(v14, v16, a3);
  *(_DWORD *)(v18 + 12) = v17;
  return v18;
}
