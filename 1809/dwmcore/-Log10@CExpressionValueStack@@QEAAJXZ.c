/*
 * XREFs of ?Log10@CExpressionValueStack@@QEAAJXZ @ 0x1801CFE1C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     log10f_0 @ 0x1800F0027 (log10f_0.c)
 */

__int64 __fastcall CExpressionValueStack::Log10(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rax
  CExpressionValue *v3; // rax
  _DWORD *v4; // rbx
  float v5; // xmm6_4
  unsigned int v6; // edi
  unsigned int v8; // [rsp+20h] [rbp-78h]
  _BYTE v9[96]; // [rsp+30h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v8 = 4883;
LABEL_11:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v8);
    return v6;
  }
  v2 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v2 < *((_DWORD *)this + 12) )
  {
    v4 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v3 = CExpressionValue::CExpressionValue((CExpressionValue *)v9);
    v4 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v3);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v9);
  }
  if ( v4[18] != 18 )
  {
    v8 = 4924;
    goto LABEL_11;
  }
  v5 = log10f_0(*(float *)v4);
  v6 = 0;
  if ( _isnan(v5) )
  {
    v8 = 4909;
    goto LABEL_11;
  }
  *(float *)v4 = v5;
  v4[18] = 18;
  *((_BYTE *)v4 + 76) = 1;
  return v6;
}
