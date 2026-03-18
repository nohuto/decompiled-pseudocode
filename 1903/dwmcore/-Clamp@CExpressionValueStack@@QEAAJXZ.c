/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x18001EF08
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // ebx
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  __m128 v14; // xmm6
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  float v17; // xmm0_4
  float v18; // xmm0_4
  unsigned int v19; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-20h]
  float v24; // [rsp+58h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v19 = 2523;
    goto LABEL_18;
  }
  v2 = *((_QWORD *)this + 3);
  v3 = 10LL * (v1 - 3);
  v4 = 10LL * (v1 - 2);
  v5 = *(_DWORD *)(v2 + 80LL * (v1 - 3) + 72);
  v6 = 10LL * (v1 - 1);
  if ( v5 != *(_DWORD *)(v2 + 8 * v4 + 72) || (v7 = 0, v5 != *(_DWORD *)(v2 + 8 * v6 + 72)) )
  {
    v19 = 2548;
    goto LABEL_18;
  }
  if ( v5 != 18 )
  {
    switch ( v5 )
    {
      case '#':
        v18 = fminf(fmaxf(*(float *)(v2 + 8 * v3 + 4), *(float *)(v2 + 8 * v4 + 4)), *(float *)(v2 + 8 * v6 + 4));
        v10 = fminf(fmaxf(*(float *)(v2 + 8 * v3), *(float *)(v2 + 8 * v4)), *(float *)(v2 + 8 * v6));
        *(_DWORD *)(v2 + 8 * v3 + 72) = 35;
        *(float *)(v2 + 8 * v3 + 4) = v18;
        goto LABEL_6;
      case '4':
        v20 = *(_QWORD *)(v2 + 8 * v3);
        v15 = (__m128)(unsigned int)v20;
        v16 = (__m128)HIDWORD(v20);
        v21 = *(_QWORD *)(v2 + 8 * v4);
        v23 = *(_QWORD *)(v2 + 8 * v6);
        v15.m128_f32[0] = fminf(fmaxf(*(float *)&v20, *(float *)&v21), *(float *)&v23);
        v16.m128_f32[0] = fminf(fmaxf(*((float *)&v20 + 1), *((float *)&v21 + 1)), *((float *)&v23 + 1));
        v17 = fmaxf(*(float *)(v2 + 8 * v3 + 8), *(float *)(v2 + 8 * v4 + 8));
        v24 = *(float *)(v2 + 8 * v6 + 8);
        *(_DWORD *)(v2 + 8 * v3 + 72) = 52;
        *(_QWORD *)(v2 + 8 * v3) = _mm_unpacklo_ps(v15, v16).m128_u64[0];
        *(float *)(v2 + 8 * v3 + 8) = fminf(v17, v24);
        goto LABEL_7;
      case 'E':
        v12 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8 * v4));
        v13 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8 * v6));
        *(_DWORD *)(v2 + 8 * v3 + 72) = 69;
        v14 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8 * v3));
        *(_QWORD *)&v22 = __PAIR64__(
                            COERCE_UNSIGNED_INT(
                              fminf(
                                fmaxf(
                                  _mm_shuffle_ps(v14, v14, 85).m128_f32[0],
                                  _mm_shuffle_ps(v12, v12, 85).m128_f32[0]),
                                _mm_shuffle_ps(v13, v13, 85).m128_f32[0])),
                            COERCE_UNSIGNED_INT(fminf(fmaxf(v14.m128_f32[0], v12.m128_f32[0]), v13.m128_f32[0])));
        *((_QWORD *)&v22 + 1) = __PAIR64__(
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      fmaxf(
                                        _mm_shuffle_ps(v14, v14, 255).m128_f32[0],
                                        _mm_shuffle_ps(v12, v12, 255).m128_f32[0]),
                                      _mm_shuffle_ps(v13, v13, 255).m128_f32[0])),
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      fmaxf(
                                        _mm_shuffle_ps(v14, v14, 170).m128_f32[0],
                                        _mm_shuffle_ps(v12, v12, 170).m128_f32[0]),
                                      _mm_shuffle_ps(v13, v13, 170).m128_f32[0])));
        *(_OWORD *)(v2 + 8 * v3) = v22;
        goto LABEL_7;
    }
    v19 = 2611;
LABEL_18:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v19,
      0LL);
    return v7;
  }
  v8 = *(float *)(v2 + 8 * v6);
  v9 = fmaxf(*(float *)(v2 + 8 * v3), *(float *)(v2 + 8 * v4));
  *(_DWORD *)(v2 + 8 * v3 + 72) = 18;
  v10 = fminf(v9, v8);
LABEL_6:
  *(float *)(v2 + 8 * v3) = v10;
LABEL_7:
  *(_BYTE *)(v2 + 8 * v3 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v7;
}
