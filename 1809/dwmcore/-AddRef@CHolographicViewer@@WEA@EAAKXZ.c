/*
 * XREFs of ?AddRef@CHolographicViewer@@WEA@EAAKXZ @ 0x1800F0120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicViewer::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 64));
}
