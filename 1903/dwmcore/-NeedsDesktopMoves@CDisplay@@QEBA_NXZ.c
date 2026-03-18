/*
 * XREFs of ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004F290 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180089C68 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3DE0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E31CC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18016F250 (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1801719DC (-VisualWasRendered@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180180990 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x180219090 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180219750 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplay::NeedsDesktopMoves(CDisplay *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 320) || *((_BYTE *)this + 319) || *((_BYTE *)this + 312) )
    return 1;
  return result;
}
