/*
 * XREFs of ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1801D8224
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801D9BF4 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801D8640 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 */

float __fastcall CInteractionTracker::CalculateScaleAnimationDuration(CInteractionTracker *this, float a2)
{
  double v3; // xmm0_8
  float v4; // xmm5_4
  float v5; // xmm4_4
  __int64 v6; // rcx

  if ( *((float *)this + 32) == a2 )
    return FLOAT_0_001;
  if ( a2 >= *((float *)this + 33) && *((float *)this + 34) >= a2 )
    return *((float *)this + 30);
  v3 = CInteractionTracker::ClampValueToBoundary(this, 2LL);
  return fmaxf(
           (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v3 - v4)) & _xmm)
         / (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v5 - v4)) & _xmm) / *(float *)(v6 + 124)),
           0.001);
}
