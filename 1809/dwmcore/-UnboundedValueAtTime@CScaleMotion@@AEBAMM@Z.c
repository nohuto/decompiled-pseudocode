/*
 * XREFs of ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x1801E0E38
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x1801E0C50 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 *     ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x1801E0C80 (-CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ.c)
 * Callees:
 *     powf @ 0x1800EC628 (powf.c)
 *     logf_0 @ 0x1800F0033 (logf_0.c)
 */

float __fastcall CScaleMotion::UnboundedValueAtTime(CScaleMotion *this, float a2)
{
  float v4; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm6_4

  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
  if ( v4 <= 0.0000011920929 )
    return (float)(a2 * *((float *)this + 12)) + *((float *)this + 11);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
  if ( v6 < 0.0000011920929 || (*((_BYTE *)this + 8) & 1) == 0 )
    return *((float *)this + 11);
  v7 = (float)(powf(*((float *)this + 8), a2) - 1.0) * *((float *)this + 12);
  return (float)(v7 / logf_0(*((float *)this + 8))) + *((float *)this + 11);
}
