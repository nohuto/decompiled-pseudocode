/*
 * XREFs of ?Vector2@CExpressionValueStack@@QEAAJXZ @ 0x1800BFEC0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2(unsigned __int64 this)
{
  unsigned __int64 v1; // rdi
  unsigned int v2; // edx
  __int64 v3; // rax
  _DWORD *v4; // rbx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rsi
  CExpressionValue *v7; // rax
  unsigned int v8; // ebp
  unsigned int v10; // [rsp+20h] [rbp-68h]
  _BYTE v11[80]; // [rsp+30h] [rbp-58h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this < 2 )
  {
    v10 = 5127;
LABEL_13:
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v10);
    return v8;
  }
  v2 = *(_DWORD *)(v1 + 48);
  v3 = (unsigned int)(this - 2);
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < v2 )
  {
    v6 = (_DWORD *)(*(_QWORD *)(v1 + 24) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v11);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v11);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v6 = &CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  this = (unsigned int)(this - 1);
  if ( (unsigned int)this < v2 )
  {
    v4 = (_DWORD *)(*(_QWORD *)(v1 + 24) + 80 * this);
  }
  else
  {
    v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v11);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v11);
  }
  if ( v6[18] != 18 || (v8 = 0, v4[18] != 18) )
  {
    v10 = 5141;
    goto LABEL_13;
  }
  v6[1] = *v4;
  v6[18] = 35;
  *((_BYTE *)v6 + 76) = 1;
  --*(_DWORD *)(v1 + 16);
  return v8;
}
