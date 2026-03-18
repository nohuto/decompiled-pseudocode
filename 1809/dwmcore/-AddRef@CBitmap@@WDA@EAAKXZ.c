/*
 * XREFs of ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800F0430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 48));
}
