/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x1800C10EC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(unsigned __int64 this)
{
  unsigned __int64 v1; // rdi
  unsigned int v2; // edx
  __int64 v3; // rax
  unsigned int *v4; // rbx
  CExpressionValue *v5; // rax
  unsigned int *v6; // rsi
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  unsigned int *v9; // r14
  CExpressionValue *v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-78h]
  _BYTE v15[80]; // [rsp+40h] [rbp-58h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this < 3 )
  {
    v14 = 5182;
LABEL_17:
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v14);
    return v11;
  }
  v2 = *(_DWORD *)(v1 + 48);
  v3 = (unsigned int)(this - 3);
  v4 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < v2 )
  {
    v6 = (unsigned int *)(*(_QWORD *)(v1 + 24) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v6 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  v7 = (unsigned int)(this - 2);
  if ( (unsigned int)v7 < v2 )
  {
    v9 = (unsigned int *)(*(_QWORD *)(v1 + 24) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v9 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  this = (unsigned int)(this - 1);
  if ( (unsigned int)this < v2 )
  {
    v4 = (unsigned int *)(*(_QWORD *)(v1 + 24) + 80 * this);
  }
  else
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
  }
  if ( v6[18] != 18 || v9[18] != 18 || (v11 = 0, v4[18] != 18) )
  {
    v14 = 5198;
    goto LABEL_17;
  }
  v12 = *v4;
  *(_QWORD *)v6 = _mm_unpacklo_ps((__m128)*v6, (__m128)*v9).m128_u64[0];
  v6[2] = v12;
  v6[18] = 52;
  *((_BYTE *)v6 + 76) = 1;
  *(_DWORD *)(v1 + 16) -= 2;
  return v11;
}
