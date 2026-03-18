/*
 * XREFs of ?GetSDRBoost@CHwSurfaceRenderTarget@@UEBAMXZ @ 0x1800E7620
 * Callers:
 *     ?GetSDRBoost@CHwStereoFullScreenRenderTarget@@WNA@EBAMXZ @ 0x1800F0EE0 (-GetSDRBoost@CHwStereoFullScreenRenderTarget@@WNA@EBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CHwSurfaceRenderTarget::GetSDRBoost(CHwSurfaceRenderTarget *this)
{
  return *((float *)this + 49);
}
