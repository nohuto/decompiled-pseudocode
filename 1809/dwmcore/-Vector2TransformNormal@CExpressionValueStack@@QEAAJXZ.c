/*
 * XREFs of ?Vector2TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x1801D3970
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2TransformNormal(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  __m128 *v6; // rdi
  CExpressionValue *v7; // rax
  float *v8; // rbx
  CExpressionValue *v9; // rax
  __int32 v10; // eax
  float v11; // xmm4_4
  __m128 v12; // xmm1
  float v13; // xmm5_4
  float v14; // xmm4_4
  unsigned int v16; // [rsp+20h] [rbp-88h]
  _BYTE v17[80]; // [rsp+50h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 2 )
  {
    v16 = 7373;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v16);
    return v3;
  }
  v4 = *((_DWORD *)this + 12);
  v5 = (unsigned int)(v2 - 2);
  v6 = (__m128 *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v5 < v4 )
  {
    v8 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
  }
  else
  {
    v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v8 = (float *)&CExpressionValueStack::s_emptyValue;
    v4 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v4 )
  {
    v6 = (__m128 *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
  }
  if ( *((_DWORD *)v8 + 18) != 35 )
  {
    v16 = 7379;
    goto LABEL_3;
  }
  v10 = v6[4].m128_i32[2];
  v2 = 265LL;
  if ( v10 != 104 && v10 != 265 )
  {
    v16 = 7387;
    goto LABEL_3;
  }
  v11 = *v8;
  if ( v10 == 104 )
  {
    v12 = *v6;
    v13 = (float)(v11 * COERCE_FLOAT(*v6)) + (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] * v8[1]);
    v14 = (float)(v11 * _mm_shuffle_ps(*v6, *v6, 85).m128_f32[0])
        + (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] * v8[1]);
  }
  else
  {
    v13 = (float)(v11 * COERCE_FLOAT(*v6)) + (float)(COERCE_FLOAT(*(_OWORD *)&v6[1]) * v8[1]);
    v14 = (float)(v11 * _mm_shuffle_ps(*v6, *v6, 85).m128_f32[0])
        + (float)(_mm_shuffle_ps(v6[1], v6[1], 85).m128_f32[0] * v8[1]);
  }
  *((_DWORD *)v8 + 18) = 35;
  *v8 = v13;
  v8[1] = v14;
  *((_BYTE *)v8 + 76) = 1;
  --*((_DWORD *)this + 4);
  return 0;
}
