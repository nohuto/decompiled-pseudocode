/*
 * XREFs of ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x1801E1C1C
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BCDE0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::SetInitialDelay(CKeyframeAnimation *this, float a2, double a3)
{
  int v3; // eax
  __m128 v4; // rt1
  unsigned int v5; // ebx
  float v7; // [rsp+48h] [rbp+10h]

  if ( (LODWORD(a2) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)a2 - a2;
    v4.m128_f32[0] = FLOAT_N0_5;
    v3 = (int)a2 - _mm_cmple_ss(*(__m128 *)&a3, v4).m128_u32[0];
  }
  else
  {
    v7 = a2 + 6291456.25;
    v3 = (int)(LODWORD(v7) << 10) >> 11;
  }
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 113) = 0;
    v5 = 0;
    *((_DWORD *)this + 112) = v3;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0xC2Au, 0LL);
  }
  return v5;
}
