/*
 * XREFs of ?QueryInterface@CHwStereoFullScreenRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180201010
 * Callers:
 *     ?QueryInterface@CHwCompSwapChainTarget@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0CA0 (-QueryInterface@CHwCompSwapChainTarget@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwCompSwapChainTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0CB0 (-QueryInterface@CHwCompSwapChainTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0CC0 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WCEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F11A0 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WCEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::QueryInterface(
        CHwStereoFullScreenRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CHwStereoFullScreenRenderTarget *)((char *)this + 160), a2, a3);
}
