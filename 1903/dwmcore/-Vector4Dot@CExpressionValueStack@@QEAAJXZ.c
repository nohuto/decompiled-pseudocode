/*
 * XREFs of ?Vector4Dot@CExpressionValueStack@@QEAAJXZ @ 0x180205334
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4Dot(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // r10
  __m128 v4; // xmm4
  __m128 v5; // xmm5
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) == 69 )
    {
      if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) == 69 )
      {
        v4 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 80LL * (v1 - 2)));
        v5 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 80LL * (v1 - 1)));
        *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) = 18;
        *(_BYTE *)(v3 + 80LL * (v1 - 2) + 76) = 1;
        *(float *)(v3 + 80LL * (v1 - 2)) = (float)((float)((float)(v4.m128_f32[0] * v5.m128_f32[0])
                                                         + (float)(_mm_shuffle_ps(v4, v4, 85).m128_f32[0]
                                                                 * _mm_shuffle_ps(v5, v5, 85).m128_f32[0]))
                                                 + (float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0]
                                                         * _mm_shuffle_ps(v5, v5, 170).m128_f32[0]))
                                         + (float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0]
                                                 * _mm_shuffle_ps(v4, v4, 255).m128_f32[0]);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v7 = 7657;
    }
    else
    {
      v7 = 7656;
    }
  }
  else
  {
    v7 = 7650;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v7,
    0LL);
  return v2;
}
