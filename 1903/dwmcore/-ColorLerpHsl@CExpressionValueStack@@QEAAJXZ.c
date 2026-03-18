/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18001E594
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ColorLerp@CExpressionValueStack@@QEAAJXZ @ 0x1802002E0 (-ColorLerp@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18001E774 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18001E828 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  CExpressionValueStack *v2; // rsi
  __m128i *v3; // rbx
  const __m128i *v4; // rdx
  float *v5; // rax
  float v6; // xmm7_4
  unsigned int v7; // edi
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  ColorSpaceHelpers *v10; // rcx
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  ColorSpaceHelpers *v14; // rcx
  __m128i v15; // xmm0
  unsigned int v17; // [rsp+20h] [rbp-60h]
  float *v18; // [rsp+40h] [rbp-40h] BYREF
  float v19; // [rsp+48h] [rbp-38h] BYREF
  float v20; // [rsp+4Ch] [rbp-34h] BYREF
  __m128i v21; // [rsp+50h] [rbp-30h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 3 )
  {
    v17 = 3166;
LABEL_10:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v17,
      0LL);
    return v7;
  }
  v3 = (__m128i *)(*((_QWORD *)this + 3) + 80LL * (v1 - 3));
  v4 = (const __m128i *)(*((_QWORD *)this + 3) + 80LL * (v1 - 2));
  v5 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
  this = (CExpressionValueStack *)v3[4].m128i_u32[2];
  v6 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v7 = 0, (_DWORD)this != v4[4].m128i_i32[2]) )
  {
    v17 = 3192;
    goto LABEL_10;
  }
  if ( (_DWORD)this != 70 )
  {
    v17 = 3244;
    goto LABEL_10;
  }
  v8 = (__m128)_mm_loadu_si128(v3);
  v9 = (__m128)_mm_loadu_si128(v4);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    this,
    _mm_shuffle_ps(v8, v8, 85).m128_f32[0],
    _mm_shuffle_ps(v8, v8, 170).m128_f32[0],
    _mm_shuffle_ps(v8, v8, 255).m128_f32[0],
    COERCE_FLOAT(&v18),
    (float *)&v18 + 1,
    &v19,
    &v20,
    v18);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v10,
    _mm_shuffle_ps(v9, v9, 85).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 170).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 255).m128_f32[0],
    COERCE_FLOAT(&v21),
    (float *)&v21.m128i_i32[1],
    (float *)&v21.m128i_i32[2],
    (float *)&v21.m128i_i32[3],
    v18);
  v11 = *(float *)&v21.m128i_i32[1] - *((float *)&v18 + 1);
  v12 = *(float *)&v21.m128i_i32[2] - v19;
  v13 = *(float *)&v21.m128i_i32[3] - v20;
  v21 = 0uLL;
  v8.m128_f32[0] = fmaxf(0.0, fminf(v6, 1.0));
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v14,
    (float)(v11 * v8.m128_f32[0]) + *((float *)&v18 + 1),
    (float)(v12 * v8.m128_f32[0]) + v19,
    (float)(v13 * v8.m128_f32[0]) + v20,
    COERCE_FLOAT(&v21),
    (float *)&v21.m128i_i32[1],
    (float *)&v21.m128i_i32[2],
    (float *)&v21.m128i_i32[3],
    v18);
  v15 = v21;
  v3[4].m128i_i32[2] = 70;
  v3[4].m128i_i8[12] = 1;
  *v3 = v15;
  *((_DWORD *)v2 + 4) -= 2;
  return v7;
}
