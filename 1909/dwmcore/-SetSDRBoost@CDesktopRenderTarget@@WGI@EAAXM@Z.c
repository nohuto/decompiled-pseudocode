/*
 * XREFs of ?SetSDRBoost@CDesktopRenderTarget@@WGI@EAAXM@Z @ 0x1800F0E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopRenderTarget::SetSDRBoost(__int64 a1)
{
  CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)(a1 - 104));
}
