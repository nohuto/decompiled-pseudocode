/*
 * XREFs of ?SetSDRBoost@CHwStereoFullScreenRenderTarget@@UEAAXM@Z @ 0x1800E7630
 * Callers:
 *     ?SetSDRBoost@CHwTextureRenderTarget@@WNA@EAAXM@Z @ 0x1800F1070 (-SetSDRBoost@CHwTextureRenderTarget@@WNA@EAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwStereoFullScreenRenderTarget::SetSDRBoost(CHwStereoFullScreenRenderTarget *this, float a2)
{
  *((float *)this + 49) = a2;
}
