/*
 * XREFs of ?IsValid@CDesktopRenderTarget@@WGI@EBA_NXZ @ 0x1800ED150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDesktopRenderTarget::IsValid(__int64 a1)
{
  return CMagnifierRenderTarget::ShouldClearRenderTarget((CMagnifierRenderTarget *)(a1 - 104));
}
