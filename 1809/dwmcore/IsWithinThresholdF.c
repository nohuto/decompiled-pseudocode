/*
 * XREFs of IsWithinThresholdF @ 0x1801E8694
 * Callers:
 *     ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x1801E83E0 (-Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x1801EFB6C (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18021ACC4 (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
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
