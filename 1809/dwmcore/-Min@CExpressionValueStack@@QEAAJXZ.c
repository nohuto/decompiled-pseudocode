/*
 * XREFs of ?Min@CExpressionValueStack@@QEAAJXZ @ 0x180079794
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Min(unsigned __int64 this)
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // r14d
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rdi
  CExpressionValue *v6; // rax
  _QWORD *v7; // rbx
  CExpressionValue *v8; // rax
  int v9; // eax
  __m128 v10; // xmm3
  __m128 v11; // xmm4
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  unsigned int v19; // [rsp+28h] [rbp-29h]
  __int128 v20; // [rsp+48h] [rbp-9h]
  _BYTE v21[80]; // [rsp+58h] [rbp+7h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this >= 2 )
  {
    v3 = *(_DWORD *)(v1 + 48);
    v4 = (unsigned int)(this - 2);
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < v3 )
    {
      v7 = (_QWORD *)(*(_QWORD *)(v1 + 24) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      LODWORD(this) = *(_DWORD *)(v1 + 16);
      v7 = &CExpressionValueStack::s_emptyValue;
      v3 = *(_DWORD *)(v1 + 48);
    }
    this = (unsigned int)(this - 1);
    if ( (unsigned int)this < v3 )
    {
      v5 = (float *)(*(_QWORD *)(v1 + 24) + 80 * this);
    }
    else
    {
      v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    }
    v9 = *((_DWORD *)v7 + 18);
    v2 = 0;
    if ( v9 == *((_DWORD *)v5 + 18) )
    {
      switch ( v9 )
      {
        case 18:
          v17 = fminf(*(float *)v7, *v5);
          *((_DWORD *)v7 + 18) = 18;
          *(float *)v7 = v17;
          break;
        case 35:
          v15 = fminf(*(float *)v7, *v5);
          v16 = fminf(*((float *)v7 + 1), v5[1]);
          *((_DWORD *)v7 + 18) = 35;
          *(float *)v7 = v15;
          *((float *)v7 + 1) = v16;
          break;
        case 52:
          v12 = (__m128)(unsigned int)*v7;
          v13 = (__m128)(unsigned int)HIDWORD(*v7);
          v12.m128_f32[0] = fminf(COERCE_FLOAT(*v7), COERCE_FLOAT(*(_QWORD *)v5));
          v13.m128_f32[0] = fminf(COERCE_FLOAT(HIDWORD(*v7)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v5)));
          v14 = fminf(*((float *)v7 + 2), v5[2]);
          *((_DWORD *)v7 + 18) = 52;
          *v7 = _mm_unpacklo_ps(v12, v13).m128_u64[0];
          *((float *)v7 + 2) = v14;
          break;
        case 69:
          v10 = (__m128)_mm_loadu_si128((const __m128i *)v5);
          *((_DWORD *)v7 + 18) = 69;
          v11 = (__m128)_mm_loadu_si128((const __m128i *)v7);
          *(_QWORD *)&v20 = __PAIR64__(
                              COERCE_UNSIGNED_INT(
                                fminf(
                                  _mm_shuffle_ps(v11, v11, 85).m128_f32[0],
                                  _mm_shuffle_ps(v10, v10, 85).m128_f32[0])),
                              COERCE_UNSIGNED_INT(fminf(v11.m128_f32[0], v10.m128_f32[0])));
          *((_QWORD *)&v20 + 1) = __PAIR64__(
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v11, v11, 255).m128_f32[0],
                                        _mm_shuffle_ps(v10, v10, 255).m128_f32[0])),
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v11, v11, 170).m128_f32[0],
                                        _mm_shuffle_ps(v10, v10, 170).m128_f32[0])));
          *(_OWORD *)v7 = v20;
          break;
        default:
          v19 = 2389;
          goto LABEL_3;
      }
      *((_BYTE *)v7 + 76) = 1;
      --*(_DWORD *)(v1 + 16);
      return v2;
    }
    v19 = 2333;
  }
  else
  {
    v19 = 2309;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v19);
  return v2;
}
