/*
 * XREFs of ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800BCED8
 * Callers:
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014F74 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180096510 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1800BCD90 (-DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 *     ?DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x180166D30 (-DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 */

__int64 __fastcall CFloatFPU::CeilingSat(float a1)
{
  if ( a1 < -2147483600.0 )
    return 0x80000000LL;
  if ( a1 >= 2147483600.0 )
    return 0x7FFFFFFFLL;
  return (unsigned int)(int)ceilf_0(a1);
}
