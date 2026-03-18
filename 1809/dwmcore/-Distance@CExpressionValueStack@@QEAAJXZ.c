/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x1801CE5B8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // r14d
  unsigned int v4; // edx
  __int64 v5; // rax
  const __m128i *v6; // rdi
  CExpressionValue *v7; // rax
  __m128i *v8; // rbx
  CExpressionValue *v9; // rax
  __int32 v10; // eax
  __m128 v11; // xmm5
  __m128 v12; // xmm2
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  unsigned int v22; // [rsp+28h] [rbp-29h]
  _BYTE v23[80]; // [rsp+58h] [rbp+7h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 2);
    v6 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (__m128i *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (__m128i *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (const __m128i *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    }
    v10 = v8[4].m128i_i32[2];
    v3 = 0;
    if ( v10 != v6[4].m128i_i32[2] )
    {
      v22 = 3587;
      goto LABEL_3;
    }
    v2 = 18LL;
    switch ( v10 )
    {
      case 18:
        v20 = *(float *)v8->m128i_i32 - *(float *)v6->m128i_i32;
        v8[4].m128i_i32[2] = 18;
        *(float *)v8->m128i_i32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20) & _xmm);
        goto LABEL_23;
      case 35:
        v18 = *(float *)v8->m128i_i32 - *(float *)v6->m128i_i32;
        v19 = (float)(*(float *)&v8->m128i_i32[1] - *(float *)&v6->m128i_i32[1])
            * (float)(*(float *)&v8->m128i_i32[1] - *(float *)&v6->m128i_i32[1]);
        break;
      case 52:
        v18 = *(float *)&v8->m128i_i32[2] - *(float *)&v6->m128i_i32[2];
        v19 = (float)((float)(COERCE_FLOAT(HIDWORD(v8->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v6->m128i_i64[0])))
                    * (float)(COERCE_FLOAT(HIDWORD(v8->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v6->m128i_i64[0]))))
            + (float)((float)(COERCE_FLOAT(v8->m128i_i64[0]) - COERCE_FLOAT(v6->m128i_i64[0]))
                    * (float)(COERCE_FLOAT(v8->m128i_i64[0]) - COERCE_FLOAT(v6->m128i_i64[0])));
        break;
      case 69:
        v11 = (__m128)_mm_loadu_si128(v8);
        v12 = (__m128)_mm_loadu_si128(v6);
        v13 = v11.m128_f32[0] - v12.m128_f32[0];
        v14 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0] - _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
        v15 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
        v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
        v16 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
        v12.m128_f32[0] = _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
        v17 = (float)((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)((float)(v15 - v16) * (float)(v15 - v16)))
            + (float)((float)(v11.m128_f32[0] - v12.m128_f32[0]) * (float)(v11.m128_f32[0] - v12.m128_f32[0]));
        goto LABEL_18;
      default:
        v22 = 3647;
        goto LABEL_3;
    }
    v17 = v19 + (float)(v18 * v18);
LABEL_18:
    v8[4].m128i_i32[2] = 18;
    *(float *)v8->m128i_i32 = sqrtf_0(v17);
LABEL_23:
    v8[4].m128i_i8[12] = 1;
    --*((_DWORD *)this + 4);
    return v3;
  }
  v22 = 3564;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v22);
  return v3;
}
