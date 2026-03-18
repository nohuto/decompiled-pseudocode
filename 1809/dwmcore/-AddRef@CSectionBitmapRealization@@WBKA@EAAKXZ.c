/*
 * XREFs of ?AddRef@CSectionBitmapRealization@@WBKA@EAAKXZ @ 0x1800F1340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 416));
}
