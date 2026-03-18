/*
 * XREFs of ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJI@Z @ 0x18001CE88
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(unsigned __int64 this, unsigned int a2)
{
  unsigned int v2; // r15d
  unsigned __int64 v3; // rdi
  unsigned int v5; // edx
  __int64 v6; // rax
  float *v7; // rbx
  CExpressionValue *v8; // rax
  _DWORD *v9; // r14
  CExpressionValue *v10; // rax
  float v11; // xmm1_4
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned int *v16; // rbx
  CExpressionValue *v17; // rax
  __int64 v18; // rax
  CExpressionValue *v19; // rax
  float *v20; // r12
  CExpressionValue *v21; // rax
  __int64 v22; // xmm1_8
  unsigned int v24; // [rsp+28h] [rbp-59h]
  char v25; // [rsp+38h] [rbp-49h]
  _BYTE v26[80]; // [rsp+48h] [rbp-39h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v3 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  v25 = 0;
  if ( (unsigned int)this < a2 )
  {
    v24 = 5961;
    goto LABEL_3;
  }
  if ( a2 == 2 )
  {
    v5 = *(_DWORD *)(v3 + 48);
    v6 = (unsigned int)(this - 2);
    v7 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v6 < v5 )
    {
      v9 = (_DWORD *)(*(_QWORD *)(v3 + 24) + 80 * v6);
    }
    else
    {
      v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v8);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      LODWORD(this) = *(_DWORD *)(v3 + 16);
      v9 = &CExpressionValueStack::s_emptyValue;
      v5 = *(_DWORD *)(v3 + 48);
    }
    this = (unsigned int)(this - 1);
    if ( (unsigned int)this < v5 )
    {
      v7 = (float *)(*(_QWORD *)(v3 + 24) + 80 * this);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
    }
    if ( v9[18] != 18 || *((_DWORD *)v7 + 18) != 18 )
      goto LABEL_29;
    v11 = *v7;
    v12 = 0LL;
    v13 = 0LL;
  }
  else
  {
    if ( a2 != 3 )
      goto LABEL_29;
    v14 = *(_DWORD *)(v3 + 48);
    v15 = (unsigned int)(this - 3);
    v16 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v15 < v14 )
    {
      v9 = (_DWORD *)(*(_QWORD *)(v3 + 24) + 80 * v15);
    }
    else
    {
      v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v17);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      LODWORD(this) = *(_DWORD *)(v3 + 16);
      v9 = &CExpressionValueStack::s_emptyValue;
      v14 = *(_DWORD *)(v3 + 48);
    }
    v18 = (unsigned int)(this - 2);
    if ( (unsigned int)v18 < v14 )
    {
      v20 = (float *)(*(_QWORD *)(v3 + 24) + 80 * v18);
    }
    else
    {
      v19 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v19);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      LODWORD(this) = *(_DWORD *)(v3 + 16);
      v20 = (float *)&CExpressionValueStack::s_emptyValue;
      v14 = *(_DWORD *)(v3 + 48);
    }
    this = (unsigned int)(this - 1);
    if ( (unsigned int)this < v14 )
    {
      v16 = (unsigned int *)(*(_QWORD *)(v3 + 24) + 80 * this);
    }
    else
    {
      v21 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v21);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
    }
    if ( v9[18] != 18 || *((_DWORD *)v20 + 18) != 18 || v16[18] != 35 )
      goto LABEL_29;
    v12 = (__m128)v16[1];
    v11 = *v20;
    v13 = (__m128)*v16;
  }
  v25 = 1;
  D2D1MakeSkewMatrix(
    *(float *)v9 * 57.295776,
    v11 * 57.295776,
    (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v13, v12),
    &matrix);
  v22 = *(_QWORD *)&matrix.m[2][0];
  *(_OWORD *)v9 = *(_OWORD *)&matrix.m11;
  *((_BYTE *)v9 + 76) = 1;
  *((_QWORD *)v9 + 2) = v22;
  v9[18] = 104;
LABEL_29:
  if ( v25 )
  {
    *(_DWORD *)(v3 + 16) += 1 - a2;
    return v2;
  }
  v24 = 6023;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v24);
  return v2;
}
