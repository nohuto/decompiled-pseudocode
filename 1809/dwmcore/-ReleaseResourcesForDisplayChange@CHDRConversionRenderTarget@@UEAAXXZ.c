/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x180209F90
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@WNA@EAAXXZ @ 0x1800F1200 (-ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@WNA@EAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180072BAC (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 */

void __fastcall CHDRConversionRenderTarget::ReleaseResourcesForDisplayChange(CHDRConversionRenderTarget *this)
{
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 74);
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
