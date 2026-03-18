/*
 * XREFs of ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009E3AC
 * Callers:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180069400 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800A08C0 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C20D0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800C2418 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800EAACC (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x180161638 (-Restore@CCursorVisualReference@@QEAAXXZ.c)
 *     ?Show@CCursorVisualReference@@QEAAXXZ @ 0x18016169C (-Show@CCursorVisualReference@@QEAAXXZ.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x1801667A8 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180166A58 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180202D54 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CCompositionSurfaceInfo>(CGdiSpriteBitmap **a1)
{
  CGdiSpriteBitmap *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CGdiSpriteBitmap::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
