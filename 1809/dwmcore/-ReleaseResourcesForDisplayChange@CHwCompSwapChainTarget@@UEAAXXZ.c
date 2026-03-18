/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ @ 0x1802010C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x180201024 (-ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ.c)
 */

void __fastcall CHwCompSwapChainTarget::ReleaseResourcesForDisplayChange(CHwCompSwapChainTarget *this)
{
  CHwCompSwapChainTarget::ReleaseBufferResources(this);
  CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(this);
}
