/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WNA@EAAPEAVCD3DSurface@@XZ @ 0x1800F0F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DSurface *__fastcall CHwTextureRenderTarget::GetTargetSurfaceNoRef(__int64 a1)
{
  return CHwDisplayRenderTarget::GetTargetSurfaceNoRef((CHwDisplayRenderTarget *)(a1 - 208));
}
