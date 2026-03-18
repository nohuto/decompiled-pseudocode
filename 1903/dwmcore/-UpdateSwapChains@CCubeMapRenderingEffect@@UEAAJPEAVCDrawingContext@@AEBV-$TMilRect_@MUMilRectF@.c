/*
 * XREFs of ?UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180258AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubeMapRenderingEffect::UpdateSwapChains(__int64 a1, CDrawingContext *a2)
{
  return CDrawListBitmap::UpdateSwapChainRealization((__int64 *)(a1 + 16), a2);
}
