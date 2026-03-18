/*
 * XREFs of ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x1801F5E78
 * Callers:
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1801F55C4 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801F5FE0 (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRadialGradientBrush::IsCenteredGradient(CRadialGradientBrush *this)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  bool result; // al

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 52)) & _xmm);
  result = 0;
  if ( v1 < 0.0000011920929 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 53)) & _xmm);
    if ( v2 < 0.0000011920929 )
      return 1;
  }
  return result;
}
