/*
 * XREFs of ?AddRef@CHolographicViewer@@WDI@EAAKXZ @ 0x1800F02F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicViewer::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 56));
}
