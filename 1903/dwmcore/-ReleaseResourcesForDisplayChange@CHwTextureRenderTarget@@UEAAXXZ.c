/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@UEAAXXZ @ 0x180163A50
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@WJA@EAAXXZ @ 0x1800ECC80 (-ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@WJA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::ReleaseResourcesForDisplayChange(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(this);
}
