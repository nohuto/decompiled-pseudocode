/*
 * XREFs of ?TimeToMinimumVelocity@CPositionMotion@@MEBAMXZ @ 0x180210BC0
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x1800EC503 (logf_0.c)
 */

float __fastcall CPositionMotion::TimeToMinimumVelocity(CPositionMotion *this)
{
  float v1; // xmm5_4
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm6_4

  v1 = *((float *)this + 12);
  v3 = 0.0;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v4 > *((float *)this + 14) )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
    if ( v5 > 0.0000011920929 )
    {
      v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
      if ( v6 >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
      {
        v7 = logf_0(*((float *)this + 14));
        v8 = v7 - logf_0(v4);
        return v8 / logf_0(*((float *)this + 8));
      }
    }
    else
    {
      return fmaxf(0.0, ((float)((float)(v1 > 0.0) * 3.4028235e38) - *((float *)this + 11)) / v1);
    }
  }
  return v3;
}
