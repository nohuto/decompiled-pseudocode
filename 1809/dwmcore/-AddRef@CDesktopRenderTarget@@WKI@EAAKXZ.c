/*
 * XREFs of ?AddRef@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800F0140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopRenderTarget::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 168));
}
