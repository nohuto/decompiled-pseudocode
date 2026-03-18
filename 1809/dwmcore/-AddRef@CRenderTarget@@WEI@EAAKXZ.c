/*
 * XREFs of ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800F0130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTarget::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 72));
}
