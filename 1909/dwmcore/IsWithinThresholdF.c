/*
 * XREFs of IsWithinThresholdF @ 0x1802207E4
 * Callers:
 *     ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x180220530 (-Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x180228BD0 (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18022E858 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWithinThresholdF(float a1, float a2, float a3)
{
  float v3; // xmm4_4
  float v5; // xmm2_4
  bool result; // al

  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
  result = v3 < 0.000099999997 && (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm), v5 < 0.000099999997)
        || a3 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - a2)) & _xmm);
  return result;
}
