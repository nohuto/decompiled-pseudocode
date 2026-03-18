/*
 * XREFs of ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x1802004A0
 * Callers:
 *     ?AddRef@CHwCompSwapChainTarget@@WBBA@EAAKXZ @ 0x1800F0C40 (-AddRef@CHwCompSwapChainTarget@@WBBA@EAAKXZ.c)
 *     ?AddRef@CHwCompSwapChainTarget@@WKA@EAAKXZ @ 0x1800F0C50 (-AddRef@CHwCompSwapChainTarget@@WKA@EAAKXZ.c)
 *     ?AddRef@CHwCompSwapChainTarget@@WNA@EAAKXZ @ 0x1800F0C60 (-AddRef@CHwCompSwapChainTarget@@WNA@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WCEI@EAAKXZ @ 0x1800F10B0 (-AddRef@CHwStereoFullScreenRenderTarget@@WCEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::AddRef(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalAddRef((CHwStereoFullScreenRenderTarget *)((char *)this + 160));
}
