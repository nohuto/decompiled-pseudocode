/*
 * XREFs of ?WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ @ 0x180096D9C
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x180096C64 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCHeadMovementDetector::WasThereSufficientYawMovement(MPCHeadMovementDetector *this)
{
  char v2; // r8
  __int64 v3; // rcx
  bool v4; // cf
  float v5; // xmm1_4
  unsigned __int64 v6; // r9
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 5) < *((_QWORD *)this + 14) )
    return 0;
  v2 = 1;
  v3 = ((unsigned __int8)*((_DWORD *)this + 40) + 1) & 3;
  v4 = *((_DWORD *)this + 27) < 0xAu;
  *((_DWORD *)this + 40) = v3;
  v5 = v4 ? 0.0 : *((float *)this + 26) / (float)*((int *)this + 27);
  *((float *)this + v3 + 36) = v5;
  v6 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 14) = v6 + 1000;
  if ( v6 < *((_QWORD *)this + 15) )
    return 0;
  v7 = *((unsigned int *)this + 40);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(*((float *)this
                                                                          + (((unsigned __int8)v7 - 1) & 3)
                                                                          + 36)
                                                                        + *((float *)this + v7 + 36))
                                                                + *((float *)this + (((unsigned __int8)v7 - 2) & 3) + 36))
                                                        + *((float *)this + (((unsigned __int8)v7 + 1) & 3) + 36))) & _xmm) <= *((float *)this + 34) )
    return 0;
  *((_QWORD *)this + 15) = v6 + 5000;
  return v2;
}
