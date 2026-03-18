/*
 * XREFs of ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801C1958
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180199530 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801AA4EC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C7B40 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::GetEffectiveOffset(CVisual *this, float *a2, float *a3, float *a4)
{
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm2_4

  v4 = *((float *)this + 29);
  v5 = *((float *)this + 30);
  v6 = *((float *)this + 28);
  *a2 = v4;
  *a3 = v5;
  *a4 = v6;
  return v4 != 0.0 || v5 != 0.0 || v6 != 0.0;
}
