/*
 * XREFs of ?RemoveAssociatedWindowBackgroundTreatment@CHwTextureRenderTarget@@WJA@EAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800EC9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::RemoveAssociatedWindowBackgroundTreatment(
        __int64 a1,
        struct CWindowBackgroundTreatment *a2)
{
  CHwDisplayRenderTarget::RemoveAssociatedWindowBackgroundTreatment((CHwDisplayRenderTarget *)(a1 - 144), a2);
}
