/*
 * XREFs of ?Asin@CExpressionValueStack@@QEAAJXZ @ 0x1801CDD9C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     asinf_0 @ 0x1800EFFD3 (asinf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Asin(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rax
  CExpressionValue *v3; // rax
  _DWORD *v4; // rbx
  float v5; // xmm0_4
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-68h]
  _BYTE v9[88]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v8 = 4119;
LABEL_12:
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
    v8 = 4161;
    goto LABEL_12;
  }
  v5 = *(float *)v4;
  if ( *(float *)v4 < -1.0 || v5 > 1.0 )
  {
    v8 = 4146;
    goto LABEL_12;
  }
  v4[18] = 18;
  *(float *)v4 = asinf_0(v5);
  *((_BYTE *)v4 + 76) = 1;
  return 0;
}
