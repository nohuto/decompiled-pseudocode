/*
 * XREFs of ?GetSDRBoost@CHwDisplayRenderTarget@@WJA@EBAMXZ @ 0x1800EC880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CHwDisplayRenderTarget::GetSDRBoost(__int64 a1)
{
  return CHwSurfaceRenderTarget::GetSDRBoost((CHwSurfaceRenderTarget *)(a1 - 144));
}
