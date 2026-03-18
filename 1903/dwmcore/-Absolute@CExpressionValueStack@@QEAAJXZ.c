/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x1801FFC78
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // eax
  __m128 v5; // xmm3
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  double v10; // xmm0_8
  float v11; // xmm2_4
  double v12; // xmm0_8
  double v13; // xmm0_8
  unsigned int v15; // [rsp+20h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+30h] [rbp-10h]
  float v18; // [rsp+38h] [rbp-8h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    this = (CExpressionValueStack *)*((_QWORD *)this + 3);
    v3 = 10LL * (unsigned int)(v1 - 1);
    v4 = *((_DWORD *)this + 20 * (unsigned int)(v1 - 1) + 18);
    switch ( v4 )
    {
      case 18:
        v13 = *((float *)this + 2 * v3);
        *((_DWORD *)this + 2 * v3 + 18) = 18;
        *((float *)this + 2 * v3) = COERCE_DOUBLE(*(_QWORD *)&v13 & _xmm);
        break;
      case 35:
        v10 = *((float *)this + 2 * v3);
        *((_DWORD *)this + 2 * v3 + 18) = 35;
        v11 = COERCE_DOUBLE(*(_QWORD *)&v10 & _xmm);
        v12 = *((float *)this + 2 * v3 + 1);
        *((float *)this + 2 * v3) = v11;
        *((float *)this + 2 * v3 + 1) = COERCE_DOUBLE(*(_QWORD *)&v12 & _xmm);
        break;
      case 52:
        v17 = *((_QWORD *)this + v3);
        v18 = *((float *)this + 2 * v3 + 2);
        *((_DWORD *)this + 2 * v3 + 18) = 52;
        v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm);
        *((_QWORD *)this + v3) = _mm_unpacklo_ps(
                                   _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                           (__m128)_mm_cvtps_pd((__m128)(unsigned int)v17),
                                                           (__m128)(unsigned __int64)_xmm)),
                                   _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                           (__m128)_mm_cvtps_pd((__m128)HIDWORD(v17)),
                                                           (__m128)(unsigned __int64)_xmm))).m128_u64[0];
        *((float *)this + 2 * v3 + 2) = v9;
        break;
      case 69:
        v5 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 8 * v3));
        *((_DWORD *)this + 2 * v3 + 18) = 69;
        v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5.m128_f32[0]) & _xmm);
        *(float *)&v16 = v6;
        v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v5, v5, 85).m128_f32[0]) & _xmm);
        *((float *)&v16 + 1) = v7;
        v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v5, v5, 170).m128_f32[0]) & _xmm);
        *((float *)&v16 + 2) = v8;
        *((float *)&v16 + 3) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v5, v5, 255).m128_f32[0]) & _xmm);
        *(_OWORD *)((char *)this + 8 * v3) = v16;
        break;
      default:
        v15 = 715;
        goto LABEL_3;
    }
    *((_BYTE *)this + 8 * v3 + 76) = 1;
    return 0;
  }
  v15 = 657;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v15,
    0LL);
  return v2;
}
