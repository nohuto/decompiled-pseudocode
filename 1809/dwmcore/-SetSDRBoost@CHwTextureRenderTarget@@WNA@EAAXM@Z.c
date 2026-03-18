/*
 * XREFs of ?SetSDRBoost@CHwTextureRenderTarget@@WNA@EAAXM@Z @ 0x1800F1070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::SetSDRBoost(__int64 a1, float a2)
{
  CHwStereoFullScreenRenderTarget::SetSDRBoost((CHwStereoFullScreenRenderTarget *)(a1 - 208), a2);
}
