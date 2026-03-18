/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800F0710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 264));
}
