/*
 * XREFs of ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x180229730
 * Callers:
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1802298AC (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180229A60 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

char __fastcall CAnimationInterpolator::EnsureHandoffCachedData(CAnimationInterpolator *this, float a2, __int64 a3)
{
  char InterpolatedValue; // di
  char v7; // al
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v14; // [rsp+40h] [rbp+8h] BYREF

  InterpolatedValue = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v14 = 0.0;
    InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, &v14, 0LL);
    if ( InterpolatedValue )
    {
      InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, a3, (float *)this + 4, 0LL);
      if ( InterpolatedValue )
      {
        v7 = *((_BYTE *)this + 24);
        v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 4) - v14)) & _xmm);
        if ( v8 >= 0.0000011920929 )
        {
          v9 = *((float *)this + 4);
          v10 = v9 - v14;
          *((_BYTE *)this + 24) = v7 | 1;
          v11 = (float)(v9 - a2) / v10;
          *((float *)this + 5) = v11;
          InterpolatedValue = _finite(v11) != 0 ? InterpolatedValue : 0;
        }
        else
        {
          *((_BYTE *)this + 24) = v7 & 0xFE;
        }
        if ( InterpolatedValue )
        {
          v12 = a2 - v14;
          *((_BYTE *)this + 24) |= 2u;
          *((float *)this + 3) = v12;
        }
      }
    }
  }
  return InterpolatedValue;
}
