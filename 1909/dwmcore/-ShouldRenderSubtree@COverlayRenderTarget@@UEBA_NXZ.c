/*
 * XREFs of ?ShouldRenderSubtree@COverlayRenderTarget@@UEBA_NXZ @ 0x1800DB310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall COverlayRenderTarget::ShouldRenderSubtree(COverlayRenderTarget *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 8) + 198LL);
}
