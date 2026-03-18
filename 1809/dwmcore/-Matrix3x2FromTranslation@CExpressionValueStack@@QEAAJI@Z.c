/*
 * XREFs of ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1800BFFD4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromTranslation(unsigned __int64 this, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rsi
  char v5; // r12
  CExpressionValue *v6; // rax
  unsigned int *v7; // rbx
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int *v12; // rbx
  CExpressionValue *v13; // rax
  unsigned int *v14; // r14
  CExpressionValue *v15; // rax
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  unsigned int v19; // [rsp+20h] [rbp-88h]
  _BYTE v20[80]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  v3 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  v5 = 0;
  if ( (unsigned int)this < a2 )
  {
    v19 = 5672;
    goto LABEL_3;
  }
  if ( a2 == 1 )
  {
    this = (unsigned int)(this - 1);
    if ( (unsigned int)this < *(_DWORD *)(v3 + 48) )
    {
      v7 = (unsigned int *)(*(_QWORD *)(v3 + 24) + 80 * this);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      v7 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    }
    if ( v7[18] != 35 )
      goto LABEL_21;
    v8 = (__m128)*v7;
    v9 = (__m128)v7[1];
    *(_OWORD *)v7 = _xmm;
    v7[18] = 104;
    *((_BYTE *)v7 + 76) = 1;
    *((_QWORD *)v7 + 2) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
  }
  else
  {
    if ( a2 != 2 )
      goto LABEL_21;
    v10 = *(_DWORD *)(v3 + 48);
    v11 = (unsigned int)(this - 2);
    v12 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v11 < v10 )
    {
      v14 = (unsigned int *)(*(_QWORD *)(v3 + 24) + 80 * v11);
    }
    else
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      LODWORD(this) = *(_DWORD *)(v3 + 16);
      v14 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
      v10 = *(_DWORD *)(v3 + 48);
    }
    this = (unsigned int)(this - 1);
    if ( (unsigned int)this < v10 )
    {
      v12 = (unsigned int *)(*(_QWORD *)(v3 + 24) + 80 * this);
    }
    else
    {
      v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    }
    if ( v14[18] != 18 || v12[18] != 18 )
      goto LABEL_21;
    v16 = (__m128)*v14;
    v17 = (__m128)*v12;
    v14[18] = 104;
    *(_OWORD *)v14 = _xmm;
    *((_BYTE *)v14 + 76) = 1;
    *((_QWORD *)v14 + 2) = _mm_unpacklo_ps(v16, v17).m128_u64[0];
  }
  v5 = 1;
LABEL_21:
  if ( v5 )
  {
    *(_DWORD *)(v3 + 16) += 1 - a2;
    return v2;
  }
  v19 = 5713;
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
