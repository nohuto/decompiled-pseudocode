/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ @ 0x18023ECD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x18023EC54 (-ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ.c)
 */

void __fastcall CHwCompSwapChainTarget::ReleaseResourcesForDisplayChange(CHwCompSwapChainTarget *this)
{
  CHwCompSwapChainTarget::ReleaseBufferResources(this);
  CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(this);
}
