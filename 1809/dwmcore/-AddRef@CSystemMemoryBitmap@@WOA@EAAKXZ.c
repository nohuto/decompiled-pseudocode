/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800F0440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 224));
}
