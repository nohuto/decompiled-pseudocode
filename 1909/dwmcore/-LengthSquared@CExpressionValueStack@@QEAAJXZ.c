/*
 * XREFs of ?LengthSquared@CExpressionValueStack@@QEAAJXZ @ 0x1801FF9A0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LengthSquared(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // eax
  __m128 v5; // xmm3
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  unsigned int v10; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    this = (CExpressionValueStack *)*((_QWORD *)this + 3);
    v3 = 10LL * (unsigned int)(v1 - 1);
    v4 = *((_DWORD *)this + 20 * (unsigned int)(v1 - 1) + 18);
    switch ( v4 )
    {
      case 18:
        *((float *)this + 2 * v3) = *((float *)this + 2 * v3) * *((float *)this + 2 * v3);
        break;
      case 35:
        *((float *)this + 2 * v3) = (float)(*((float *)this + 2 * v3) * *((float *)this + 2 * v3))
                                  + (float)(*((float *)this + 2 * v3 + 1) * *((float *)this + 2 * v3 + 1));
        break;
      case 52:
        *((float *)this + 2 * v3) = (float)((float)(COERCE_FLOAT(HIDWORD(*((_QWORD *)this + v3)))
                                                  * COERCE_FLOAT(HIDWORD(*((_QWORD *)this + v3))))
                                          + (float)(COERCE_FLOAT(*((_QWORD *)this + v3))
                                                  * COERCE_FLOAT(*((_QWORD *)this + v3))))
                                  + (float)(*((float *)this + 2 * v3 + 2) * *((float *)this + 2 * v3 + 2));
        break;
      case 69:
        v5 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 8 * v3));
        v6 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
        v7 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
        v8 = (float)(v6 * v6) + (float)(v5.m128_f32[0] * v5.m128_f32[0]);
        v5.m128_f32[0] = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
        *((float *)this + 2 * v3) = (float)(v8 + (float)(v7 * v7)) + (float)(v5.m128_f32[0] * v5.m128_f32[0]);
        break;
      case 71:
        *((float *)this + 2 * v3) = (float)((float)((float)(*((float *)this + 2 * v3 + 1) * *((float *)this + 2 * v3 + 1))
                                                  + (float)(*((float *)this + 2 * v3) * *((float *)this + 2 * v3)))
                                          + (float)(*((float *)this + 2 * v3 + 2) * *((float *)this + 2 * v3 + 2)))
                                  + (float)(*((float *)this + 2 * v3 + 3) * *((float *)this + 2 * v3 + 3));
        break;
      default:
        v10 = 3522;
        goto LABEL_3;
    }
    *((_DWORD *)this + 2 * v3 + 18) = 18;
    v2 = 0;
    *((_BYTE *)this + 8 * v3 + 76) = 1;
    return v2;
  }
  v10 = 3462;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v10,
    0LL);
  return v2;
}
