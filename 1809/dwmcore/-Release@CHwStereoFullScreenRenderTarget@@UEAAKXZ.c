/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x180064990
 * Callers:
 *     ?Release@CHwCompSwapChainTarget@@WBBA@EAAKXZ @ 0x1800F0CD0 (-Release@CHwCompSwapChainTarget@@WBBA@EAAKXZ.c)
 *     ?Release@CHwCompSwapChainTarget@@WKA@EAAKXZ @ 0x1800F0CE0 (-Release@CHwCompSwapChainTarget@@WKA@EAAKXZ.c)
 *     ?Release@CHwCompSwapChainTarget@@WNA@EAAKXZ @ 0x1800F0CF0 (-Release@CHwCompSwapChainTarget@@WNA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WNI@EAAKXZ @ 0x1800F0FE0 (-Release@CHwTextureRenderTarget@@WNI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WOA@EAAKXZ @ 0x1800F0FF0 (-Release@CHwTextureRenderTarget@@WOA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WOI@EAAKXZ @ 0x1800F1000 (-Release@CHwTextureRenderTarget@@WOI@EAAKXZ.c)
 *     ?Release@CHwStereoFullScreenRenderTarget@@WCEI@EAAKXZ @ 0x1800F11F0 (-Release@CHwStereoFullScreenRenderTarget@@WCEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CGdiSpriteBitmap::Release((CHwStereoFullScreenRenderTarget *)((char *)this + 160));
}
