/*
 * XREFs of ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x18017CC98
 * Callers:
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x18017CE60 (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18002FA84 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

CLinearInterpolationLayer *__fastcall CLinearInterpolationLayer::CLinearInterpolationLayer(
        CLinearInterpolationLayer *this,
        const struct MilPointAndSizeL *a2,
        struct IRenderTargetBitmap *a3,
        float a4,
        float a5)
{
  CExternalLayer::CExternalLayer(this, a2, a3);
  *(_QWORD *)this = &CLinearInterpolationLayer::`vftable';
  *((float *)this + 28) = a4;
  *((float *)this + 29) = a5;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return this;
}
