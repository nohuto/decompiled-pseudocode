/*
 * XREFs of ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066F40
 * Callers:
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WCAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F05D0 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WCAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F05E0 (-QueryInterface@CHwTextureRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwCompSwapChainTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F05F0 (-QueryInterface@CHwCompSwapChainTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F08D0 (-QueryInterface@CHwTextureRenderTarget@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F08E0 (-QueryInterface@CHwTextureRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F08F0 (-QueryInterface@CHwTextureRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwCompSwapChainTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F14A0 (-QueryInterface@CHwCompSwapChainTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::QueryInterface(
        CHwTextureRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CHwTextureRenderTarget *)((char *)this + 96), a2, a3);
}
