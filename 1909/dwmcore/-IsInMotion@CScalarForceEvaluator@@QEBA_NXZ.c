/*
 * XREFs of ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x18021FB68
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E398C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsInMotion@CExpressionForce@@UEBA_NXZ @ 0x18021EED0 (-IsInMotion@CExpressionForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x1802203D0 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScalarForceEvaluator::IsInMotion(CScalarForceEvaluator *this)
{
  float v1; // xmm2_4
  float v2; // xmm2_4
  bool result; // al

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm)) & _xmm);
  result = 1;
  if ( *((float *)this + 14) > v1 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 5)) & _xmm)) & _xmm);
    if ( *((float *)this + 15) > v2 )
      return 0;
  }
  return result;
}
