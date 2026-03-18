/*
 * XREFs of ?GetSDRBoost@CHwStereoFullScreenRenderTarget@@WNA@EBAMXZ @ 0x1800F0EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CHwStereoFullScreenRenderTarget::GetSDRBoost(__int64 a1)
{
  return CHwSurfaceRenderTarget::GetSDRBoost((CHwSurfaceRenderTarget *)(a1 - 208));
}
