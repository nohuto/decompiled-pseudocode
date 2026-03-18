/*
 * XREFs of ?IsPixelAligned@@YA_NM@Z @ 0x18000C938
 * Callers:
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18000C8E0 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
bool __fastcall IsPixelAligned(float a1, __int64 a2, double a3)
{
  int v3; // eax
  float v4; // xmm2_4
  __m128 v6; // rt1
  float v7; // [rsp+8h] [rbp+8h]

  if ( (LODWORD(a1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)a1 - a1;
    v6.m128_f32[0] = FLOAT_N0_5;
    v3 = (int)a1 - _mm_cmple_ss(*(__m128 *)&a3, v6).m128_u32[0];
  }
  else
  {
    v7 = a1 + 6291456.25;
    v3 = (int)(LODWORD(v7) << 10) >> 11;
  }
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - (float)v3)) & _xmm);
  return v4 <= 0.00390625;
}
