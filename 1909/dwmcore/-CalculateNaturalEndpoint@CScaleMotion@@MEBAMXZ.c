/*
 * XREFs of ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x18020F690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18020F848 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 */

float __fastcall CScaleMotion::CalculateNaturalEndpoint(CScaleMotion *this)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v5; // xmm0_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
  if ( v2 > 0.0000011920929 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm) >= 0.0000011920929
      && (*((_BYTE *)this + 8) & 1) != 0 )
    {
      v5 = (*(float (__fastcall **)(CScaleMotion *))(*(_QWORD *)this + 40LL))(this);
      return fmaxf(0.001, CScaleMotion::UnboundedValueAtTime(this, v5));
    }
  }
  else
  {
    v3 = *((float *)this + 12);
    if ( v3 < 0.0 )
      return FLOAT_0_001;
    if ( v3 != 0.0 )
      return FLOAT_3_4028235e38;
  }
  return *((float *)this + 11);
}
