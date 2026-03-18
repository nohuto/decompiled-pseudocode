/*
 * XREFs of ?AddRef@CSubRectBitmapRealizationImageSource@@WBA@EAAKXZ @ 0x1800F00E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSubRectBitmapRealizationImageSource::AddRef(__int64 a1)
{
  return EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)(a1 - 16));
}
