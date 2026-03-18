/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@UEAAXXZ @ 0x1802033F0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@WNA@EAAXXZ @ 0x1800F1010 (-ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@WNA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::ReleaseResourcesForDisplayChange(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(this);
}
