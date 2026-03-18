/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800F0420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 40));
}
