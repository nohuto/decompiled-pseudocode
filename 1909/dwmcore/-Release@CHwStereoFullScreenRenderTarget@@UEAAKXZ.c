/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x1800ABFF0
 * Callers:
 *     ?Release@CHwStereoFullScreenRenderTarget@@WCAI@EAAKXZ @ 0x1800F0640 (-Release@CHwStereoFullScreenRenderTarget@@WCAI@EAAKXZ.c)
 *     ?Release@CHwStereoFullScreenRenderTarget@@WGA@EAAKXZ @ 0x1800F0650 (-Release@CHwStereoFullScreenRenderTarget@@WGA@EAAKXZ.c)
 *     ?Release@CHwCompSwapChainTarget@@WJA@EAAKXZ @ 0x1800F0660 (-Release@CHwCompSwapChainTarget@@WJA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WJI@EAAKXZ @ 0x1800F0910 (-Release@CHwTextureRenderTarget@@WJI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WKA@EAAKXZ @ 0x1800F0920 (-Release@CHwTextureRenderTarget@@WKA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WKI@EAAKXZ @ 0x1800F0930 (-Release@CHwTextureRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CHwCompSwapChainTarget@@WNA@EAAKXZ @ 0x1800F14B0 (-Release@CHwCompSwapChainTarget@@WNA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CGdiSpriteBitmap::Release((CHwStereoFullScreenRenderTarget *)((char *)this + 96));
}
