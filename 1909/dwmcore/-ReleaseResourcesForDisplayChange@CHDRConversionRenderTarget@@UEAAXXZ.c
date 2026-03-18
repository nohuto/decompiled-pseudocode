/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x180168700
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@WJA@EAAXXZ @ 0x1800F0670 (-ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@WJA@EAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 */

void __fastcall CHDRConversionRenderTarget::ReleaseResourcesForDisplayChange(CHDRConversionRenderTarget *this)
{
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 66);
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
