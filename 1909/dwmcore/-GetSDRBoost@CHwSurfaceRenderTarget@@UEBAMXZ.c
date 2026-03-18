/*
 * XREFs of ?GetSDRBoost@CHwSurfaceRenderTarget@@UEBAMXZ @ 0x1800DA7F0
 * Callers:
 *     ?GetSDRBoost@CHwDisplayRenderTarget@@WJA@EBAMXZ @ 0x1800F0540 (-GetSDRBoost@CHwDisplayRenderTarget@@WJA@EBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CHwSurfaceRenderTarget::GetSDRBoost(CHwSurfaceRenderTarget *this)
{
  return *((float *)this + 33);
}
