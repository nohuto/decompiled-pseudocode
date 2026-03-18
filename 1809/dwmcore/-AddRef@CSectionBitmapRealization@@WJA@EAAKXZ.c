/*
 * XREFs of ?AddRef@CSectionBitmapRealization@@WJA@EAAKXZ @ 0x1800F05C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 144));
}
