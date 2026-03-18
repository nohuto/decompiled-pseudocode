/*
 * XREFs of ?AddRef@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800F0400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAtlasImageSource::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 24));
}
