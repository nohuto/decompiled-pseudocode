/*
 * XREFs of ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180014388 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004438C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMi.c)
 *     ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004ED8C (-ClipAgainstMargins@CWindowNode@@QEAAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x180050310 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMil.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005A560 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180071AD4 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800B84B0 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800D20E0 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180165780 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180166500 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPoin.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802195B4 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 *     ?NotifyRenderedRect@CHwCompSwapChainTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802400D0 (-NotifyRenderedRect@CHwCompSwapChainTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  int v5; // r8d
  int v6; // edx
  char result; // al

  if ( *a2 > *a1 )
    *a1 = *a2;
  v2 = a2[1];
  if ( v2 > a1[1] )
    a1[1] = v2;
  v3 = a2[2];
  v4 = a1[2];
  if ( v3 < v4 )
  {
    a1[2] = v3;
    v4 = v3;
  }
  v5 = a2[3];
  v6 = a1[3];
  if ( v5 < v6 )
  {
    a1[3] = v5;
    v6 = v5;
    v4 = a1[2];
  }
  if ( v4 > *a1 && v6 > a1[1] )
    return 1;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
