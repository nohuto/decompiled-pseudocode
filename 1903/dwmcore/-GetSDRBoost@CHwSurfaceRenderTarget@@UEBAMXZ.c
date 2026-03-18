/*
 * XREFs of ?GetSDRBoost@CHwSurfaceRenderTarget@@UEBAMXZ @ 0x1800D9B80
 * Callers:
 *     ?GetSDRBoost@CHwDisplayRenderTarget@@WJA@EBAMXZ @ 0x1800EC880 (-GetSDRBoost@CHwDisplayRenderTarget@@WJA@EBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CHwSurfaceRenderTarget::GetSDRBoost(CHwSurfaceRenderTarget *this)
{
  return *((float *)this + 33);
}
