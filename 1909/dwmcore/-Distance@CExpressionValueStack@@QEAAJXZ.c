/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x1801FEEA4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(__int64 this)
{
  unsigned int v1; // edx
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  __m128 v8; // xmm5
  __m128 v9; // xmm2
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  unsigned int v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-28h]

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = *(_QWORD *)(this + 24);
    v3 = 0;
    v5 = 10LL * (v1 - 2);
    v6 = 10LL * (v1 - 1);
    v7 = *(_DWORD *)(v4 + 8 * v5 + 72);
    if ( v7 != *(_DWORD *)(v4 + 8 * v6 + 72) )
    {
      v20 = 3575;
      goto LABEL_3;
    }
    this = 18LL;
    switch ( v7 )
    {
      case 18:
        v18 = *(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6);
        *(_DWORD *)(v4 + 8 * v5 + 72) = 18;
        *(float *)(v4 + 8 * v5) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm);
        goto LABEL_17;
      case 35:
        v17 = *(float *)(v4 + 8 * v5 + 4) - *(float *)(v4 + 8 * v6 + 4);
        v15 = *(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6);
        v16 = v17 * v17;
        break;
      case 52:
        v21 = *(_QWORD *)(v4 + 8 * v5);
        v15 = *(float *)(v4 + 8 * v5 + 8) - *(float *)(v4 + 8 * v6 + 8);
        v16 = (float)((float)(*((float *)&v21 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6))))
                    * (float)(*((float *)&v21 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6)))))
            + (float)((float)(*(float *)&v21 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6)))
                    * (float)(*(float *)&v21 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6))));
        break;
      case 69:
        v8 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v5));
        v9 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
        v10 = v8.m128_f32[0] - v9.m128_f32[0];
        v11 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
        v12 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
        v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
        v13 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
        v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
        v14 = (float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)((float)(v12 - v13) * (float)(v12 - v13)))
            + (float)((float)(v8.m128_f32[0] - v9.m128_f32[0]) * (float)(v8.m128_f32[0] - v9.m128_f32[0]));
        goto LABEL_12;
      default:
        v20 = 3635;
        goto LABEL_3;
    }
    v14 = v16 + (float)(v15 * v15);
LABEL_12:
    *(_DWORD *)(v4 + 8 * v5 + 72) = 18;
    *(float *)(v4 + 8 * v5) = sqrtf_0(v14);
LABEL_17:
    *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
    --*(_DWORD *)(v2 + 16);
    return v3;
  }
  v20 = 3552;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v20,
    0LL);
  return v3;
}
