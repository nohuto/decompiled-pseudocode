/*
 * XREFs of ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x18015E3F0
 * Callers:
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WCAI@EAAKXZ @ 0x1800F0430 (-AddRef@CHwStereoFullScreenRenderTarget@@WCAI@EAAKXZ.c)
 *     ?AddRef@CHwCompSwapChainTarget@@WGA@EAAKXZ @ 0x1800F0440 (-AddRef@CHwCompSwapChainTarget@@WGA@EAAKXZ.c)
 *     ?AddRef@CHwCompSwapChainTarget@@WJA@EAAKXZ @ 0x1800F0450 (-AddRef@CHwCompSwapChainTarget@@WJA@EAAKXZ.c)
 *     ?AddRef@CHwCompSwapChainTarget@@WNA@EAAKXZ @ 0x1800F1460 (-AddRef@CHwCompSwapChainTarget@@WNA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::AddRef(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalAddRef((CHwStereoFullScreenRenderTarget *)((char *)this + 96));
}
