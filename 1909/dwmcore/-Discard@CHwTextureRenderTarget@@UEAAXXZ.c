/*
 * XREFs of ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18015E400
 * Callers:
 *     ?Discard@CHwDisplayRenderTarget@@WJA@EAAXXZ @ 0x1800F0480 (-Discard@CHwDisplayRenderTarget@@WJA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::Discard(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::Discard(this);
}
