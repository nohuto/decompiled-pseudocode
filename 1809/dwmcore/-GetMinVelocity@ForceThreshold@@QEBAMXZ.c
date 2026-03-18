/*
 * XREFs of ?GetMinVelocity@ForceThreshold@@QEBAMXZ @ 0x1801E8784
 * Callers:
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x1801E79FC (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

float __fastcall ForceThreshold::GetMinVelocity(ForceThreshold *this)
{
  float result; // xmm0_4
  float v2; // xmm2_4
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)this )
    return FLOAT_10_0;
  if ( *(_DWORD *)this == 1 )
    return FLOAT_0_1;
  if ( *(_DWORD *)this != 2 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  result = FLOAT_0_0099999998;
  v2 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 2) + *((float *)this + 1))) & _xmm)
     * 0.00030000001;
  if ( v2 >= 0.0099999998 )
    return fminf(10.0, v2);
  return result;
}
