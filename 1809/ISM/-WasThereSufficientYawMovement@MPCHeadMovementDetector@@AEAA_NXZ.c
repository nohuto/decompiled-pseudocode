/*
 * XREFs of ?WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A89C
 * Callers:
 *     _lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_ @ 0x18005A1C0 (_lambda_aa0eaa0d8a3377c6799a200e781869ec_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCHeadMovementDetector::WasThereSufficientYawMovement(MPCHeadMovementDetector *this)
{
  __int64 v2; // rcx
  bool v3; // cf
  float v4; // xmm1_4
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  float v7; // xmm0_4
  bool result; // al

  if ( *((_QWORD *)this + 4) < *((_QWORD *)this + 11) )
    return 0;
  v2 = ((unsigned __int8)*((_DWORD *)this + 34) + 1) & 3;
  v3 = *((_DWORD *)this + 21) < 0xAu;
  *((_DWORD *)this + 34) = v2;
  v4 = v3 ? 0.0 : *((float *)this + 20) / (float)*((int *)this + 21);
  *((float *)this + v2 + 30) = v4;
  v5 = *((_QWORD *)this + 4);
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = v5 + 1000;
  if ( v5 < *((_QWORD *)this + 12) )
    return 0;
  v6 = *((unsigned int *)this + 34);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(*((float *)this + (((unsigned __int8)v6 - 1) & 3)
                                                                                   + 30)
                                                                 + *((float *)this + v6 + 30))
                                                         + *((float *)this + (((unsigned __int8)v6 - 2) & 3) + 30))
                                                 + *((float *)this + (((unsigned __int8)v6 + 1) & 3) + 30))) & _xmm);
  result = v7 > *((float *)this + 28);
  if ( v7 > *((float *)this + 28) )
    *((_QWORD *)this + 12) = v5 + 5000;
  return result;
}
