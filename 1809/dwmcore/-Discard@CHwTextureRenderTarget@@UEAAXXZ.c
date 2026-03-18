/*
 * XREFs of ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x180203040
 * Callers:
 *     ?Discard@CHwDisplayRenderTarget@@WNA@EAAXXZ @ 0x1800F0E10 (-Discard@CHwDisplayRenderTarget@@WNA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::Discard(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::Discard(this);
}
