/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801CE1C8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  __m128i *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  const __m128i *v10; // rbp
  CExpressionValue *v11; // rax
  __int32 v12; // eax
  float v13; // xmm0_4
  unsigned int v14; // ebx
  __m128 v15; // xmm5
  __m128 v16; // xmm4
  float v17; // xmm3_4
  float v18; // xmm0_4
  __int32 v19; // xmm1_4
  float v20; // xmm0_4
  unsigned int v22; // [rsp+20h] [rbp-78h]
  __m128i v23; // [rsp+30h] [rbp-68h]
  _BYTE v24[80]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 3 )
  {
    v22 = 3290;
LABEL_18:
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v22);
    return v14;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 3);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (__m128i *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = (__m128i *)&CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v8 = (unsigned int)(v2 - 2);
  if ( (unsigned int)v8 < v3 )
  {
    v10 = (const __m128i *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v10 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
  }
  v12 = v7[4].m128i_i32[2];
  v13 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v14 = 0, v12 != v10[4].m128i_i32[2]) )
  {
    v22 = 3316;
    goto LABEL_18;
  }
  if ( v12 != 70 )
  {
    v22 = 3347;
    goto LABEL_18;
  }
  v15 = (__m128)_mm_loadu_si128(v10);
  v7[4].m128i_i32[2] = 70;
  v16 = (__m128)_mm_loadu_si128(v7);
  v7[4].m128i_i8[12] = 1;
  v17 = fmaxf(0.0, fminf(v13, 1.0));
  *(float *)v23.m128i_i32 = (float)((float)(v15.m128_f32[0] - v16.m128_f32[0]) * v17) + v16.m128_f32[0];
  v18 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  *(float *)&v19 = (float)((float)(_mm_shuffle_ps(v15, v15, 85).m128_f32[0] - v18) * v17) + v18;
  v20 = _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
  v16.m128_f32[0] = _mm_shuffle_ps(v16, v16, 255).m128_f32[0];
  v23.m128i_i32[1] = v19;
  *(float *)&v23.m128i_i32[2] = (float)((float)(_mm_shuffle_ps(v15, v15, 170).m128_f32[0] - v20) * v17) + v20;
  *(float *)&v23.m128i_i32[3] = (float)((float)(_mm_shuffle_ps(v15, v15, 255).m128_f32[0] - v16.m128_f32[0]) * v17)
                              + v16.m128_f32[0];
  *v7 = v23;
  *((_DWORD *)this + 4) -= 2;
  return v14;
}
