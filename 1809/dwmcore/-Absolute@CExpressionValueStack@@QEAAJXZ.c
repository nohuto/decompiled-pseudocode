/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x1801CD998
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  __int64 *v5; // rbx
  int v6; // eax
  __m128 v7; // xmm3
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  __m128 v11; // xmm0
  __m128 v12; // xmm4
  double v13; // xmm0_8
  float v14; // xmm2_4
  double v15; // xmm0_8
  double v16; // xmm0_8
  unsigned int v18; // [rsp+20h] [rbp-19h]
  __int128 v19; // [rsp+30h] [rbp-9h]
  __int64 v20; // [rsp+30h] [rbp-9h]
  float v21; // [rsp+38h] [rbp-1h]
  _BYTE v22[80]; // [rsp+40h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    {
      v5 = (__int64 *)(*((_QWORD *)this + 3) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      v5 = (__int64 *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    }
    v6 = *((_DWORD *)v5 + 18);
    switch ( v6 )
    {
      case 18:
        v16 = *(float *)v5;
        *((_DWORD *)v5 + 18) = 18;
        *(float *)v5 = COERCE_DOUBLE(*(_QWORD *)&v16 & _xmm);
        break;
      case 35:
        v13 = *(float *)v5;
        *((_DWORD *)v5 + 18) = 35;
        v14 = COERCE_DOUBLE(*(_QWORD *)&v13 & _xmm);
        v15 = *((float *)v5 + 1);
        *(float *)v5 = v14;
        *((float *)v5 + 1) = COERCE_DOUBLE(*(_QWORD *)&v15 & _xmm);
        break;
      case 52:
        v20 = *v5;
        v11 = (__m128)_mm_cvtps_pd((__m128)(unsigned int)*v5);
        v21 = *((float *)v5 + 2);
        *((_DWORD *)v5 + 18) = 52;
        v12 = _mm_cvtpd_ps((__m128d)_mm_and_ps(v11, (__m128)(unsigned __int64)_xmm));
        v11.m128_f32[0] = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v21) & _xmm);
        *v5 = _mm_unpacklo_ps(
                v12,
                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                        (__m128)_mm_cvtps_pd((__m128)HIDWORD(v20)),
                                        (__m128)(unsigned __int64)_xmm))).m128_u64[0];
        *((_DWORD *)v5 + 2) = v11.m128_i32[0];
        break;
      case 69:
        v7 = (__m128)_mm_loadu_si128((const __m128i *)v5);
        *((_DWORD *)v5 + 18) = 69;
        v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7.m128_f32[0]) & _xmm);
        *(float *)&v19 = v8;
        v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v7, v7, 85).m128_f32[0]) & _xmm);
        *((float *)&v19 + 1) = v9;
        v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v7, v7, 170).m128_f32[0]) & _xmm);
        *((float *)&v19 + 2) = v10;
        *((float *)&v19 + 3) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v7, v7, 255).m128_f32[0]) & _xmm);
        *(_OWORD *)v5 = v19;
        break;
      default:
        v18 = 727;
        goto LABEL_3;
    }
    *((_BYTE *)v5 + 76) = 1;
    return 0;
  }
  v18 = 669;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v18);
  return v2;
}
