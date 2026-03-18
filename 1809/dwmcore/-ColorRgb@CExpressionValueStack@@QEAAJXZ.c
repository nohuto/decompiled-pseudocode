/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x1800725E0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(unsigned __int64 this)
{
  unsigned __int64 v1; // rdi
  unsigned int v2; // edx
  __int64 v3; // rax
  float *v4; // rbx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rsi
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  float *v9; // r15
  __int64 v10; // rax
  CExpressionValue *v11; // rax
  float *v12; // r14
  CExpressionValue *v13; // rax
  unsigned int v14; // r12d
  float v15; // xmm0_4
  unsigned int v17; // [rsp+28h] [rbp-29h]
  __int128 v18; // [rsp+38h] [rbp-19h]
  _BYTE v19[80]; // [rsp+48h] [rbp-9h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this < 4 )
  {
    v17 = 5299;
LABEL_21:
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v17);
    return v14;
  }
  v2 = *(_DWORD *)(v1 + 48);
  v3 = (unsigned int)(this - 4);
  v4 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < v2 )
  {
    v6 = (_DWORD *)(*(_QWORD *)(v1 + 24) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v6 = &CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  v7 = (unsigned int)(this - 3);
  if ( (unsigned int)v7 < v2 )
  {
    v9 = (float *)(*(_QWORD *)(v1 + 24) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v9 = (float *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  v10 = (unsigned int)(this - 2);
  if ( (unsigned int)v10 < v2 )
  {
    v12 = (float *)(*(_QWORD *)(v1 + 24) + 80 * v10);
  }
  else
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v12 = (float *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  this = (unsigned int)(this - 1);
  if ( (unsigned int)this < v2 )
  {
    v4 = (float *)(*(_QWORD *)(v1 + 24) + 80 * this);
  }
  else
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
  }
  if ( v6[18] != 18
    || *((_DWORD *)v9 + 18) != 18
    || *((_DWORD *)v12 + 18) != 18
    || (v14 = 0, *((_DWORD *)v4 + 18) != 18) )
  {
    v17 = 5317;
    goto LABEL_21;
  }
  *(float *)&v18 = fmaxf(fminf(*v9, 255.0), 0.0) / 255.0;
  v15 = fminf(*v12, 255.0);
  *((float *)&v18 + 2) = fmaxf(fminf(*v4, 255.0), 0.0) / 255.0;
  v6[18] = 70;
  *((_BYTE *)v6 + 76) = 1;
  *((float *)&v18 + 1) = fmaxf(v15, 0.0) / 255.0;
  *((float *)&v18 + 3) = fmaxf(fminf(*(float *)v6, 255.0), 0.0) / 255.0;
  *(_OWORD *)v6 = v18;
  *(_DWORD *)(v1 + 16) -= 3;
  return v14;
}
