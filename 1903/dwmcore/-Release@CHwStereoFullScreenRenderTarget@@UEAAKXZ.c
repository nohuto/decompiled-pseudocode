/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x1800C0220
 * Callers:
 *     ?Release@CHwStereoFullScreenRenderTarget@@WCAI@EAAKXZ @ 0x1800EC980 (-Release@CHwStereoFullScreenRenderTarget@@WCAI@EAAKXZ.c)
 *     ?Release@CHwStereoFullScreenRenderTarget@@WGA@EAAKXZ @ 0x1800EC990 (-Release@CHwStereoFullScreenRenderTarget@@WGA@EAAKXZ.c)
 *     ?Release@CHwCompSwapChainTarget@@WJA@EAAKXZ @ 0x1800EC9A0 (-Release@CHwCompSwapChainTarget@@WJA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WJI@EAAKXZ @ 0x1800ECC50 (-Release@CHwTextureRenderTarget@@WJI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WKA@EAAKXZ @ 0x1800ECC60 (-Release@CHwTextureRenderTarget@@WKA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WKI@EAAKXZ @ 0x1800ECC70 (-Release@CHwTextureRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CHwCompSwapChainTarget@@WNA@EAAKXZ @ 0x1800ED7F0 (-Release@CHwCompSwapChainTarget@@WNA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CGdiSpriteBitmap::Release((CHwStereoFullScreenRenderTarget *)((char *)this + 96));
}
