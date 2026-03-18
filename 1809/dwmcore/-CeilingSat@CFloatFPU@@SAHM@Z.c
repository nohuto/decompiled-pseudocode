/*
 * XREFs of ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18005F5E8
 * Callers:
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800150C8 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18005F4A0 (-DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800B35C0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1802065F0 (-DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 */

__int64 __fastcall CFloatFPU::CeilingSat(float a1)
{
  if ( a1 < -2147483600.0 )
    return 0x80000000LL;
  if ( a1 >= 2147483600.0 )
    return 0x7FFFFFFFLL;
  return (unsigned int)(int)ceilf_0(a1);
}
