/*
 * XREFs of ?_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z @ 0x1800A1318
 * Callers:
 *     ?Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x1800A04E0 (-Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z.c)
 * Callees:
 *     fmodf_0 @ 0x18004FD92 (fmodf_0.c)
 */

float __fastcall CAnimatedTransitionVisual::_NormalizeAngleToShowFront(CAnimatedTransitionVisual *this, float a2)
{
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm0_4

  v2 = a2;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
  if ( v3 > 90.0 )
  {
    v4 = fmodf_0(a2, 180.0);
    v2 = v4;
    if ( v4 <= 90.0 )
    {
      if ( v4 < -90.0 )
        return v4 + 180.0;
    }
    else
    {
      return v4 + -180.0;
    }
  }
  return v2;
}
