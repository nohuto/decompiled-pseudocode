/*
 * XREFs of ?SetSDRBoost@CHwStereoFullScreenRenderTarget@@UEAAXM@Z @ 0x1800D9BF0
 * Callers:
 *     ?SetSDRBoost@CHwTextureRenderTarget@@WJA@EAAXM@Z @ 0x1800ECA40 (-SetSDRBoost@CHwTextureRenderTarget@@WJA@EAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwStereoFullScreenRenderTarget::SetSDRBoost(CHwStereoFullScreenRenderTarget *this, float a2)
{
  *((float *)this + 33) = a2;
}
