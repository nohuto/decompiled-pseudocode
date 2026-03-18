/*
 * XREFs of ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008BC90
 * Callers:
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WCAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC910 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WCAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC920 (-QueryInterface@CHwTextureRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwCompSwapChainTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC930 (-QueryInterface@CHwCompSwapChainTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECC10 (-QueryInterface@CHwTextureRenderTarget@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECC20 (-QueryInterface@CHwTextureRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECC30 (-QueryInterface@CHwTextureRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwCompSwapChainTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED7E0 (-QueryInterface@CHwCompSwapChainTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
