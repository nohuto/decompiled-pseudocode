/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ @ 0x1802403E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x180240364 (-ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ.c)
 */

void __fastcall CHwCompSwapChainTarget::ReleaseResourcesForDisplayChange(CHwCompSwapChainTarget *this)
{
  CHwCompSwapChainTarget::ReleaseBufferResources(this);
  CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(this);
}
