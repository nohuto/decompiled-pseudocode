/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x180169DF0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@WJA@EAAXXZ @ 0x1800EC9B0 (-ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@WJA@EAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18003DFF0 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 */

void __fastcall CHDRConversionRenderTarget::ReleaseResourcesForDisplayChange(CHDRConversionRenderTarget *this)
{
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 66);
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
