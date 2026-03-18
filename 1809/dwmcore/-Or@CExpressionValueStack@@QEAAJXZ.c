/*
 * XREFs of ?Or@CExpressionValueStack@@QEAAJXZ @ 0x1801D1C30
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Or(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // edx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  CExpressionValue *v7; // rax
  _DWORD *v8; // r14
  CExpressionValue *v9; // rax
  int v10; // eax
  char v11; // al
  unsigned int v13; // [rsp+20h] [rbp-68h]
  _BYTE v14[80]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 2 )
  {
    v13 = 2157;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13);
    return v3;
  }
  v4 = *((_DWORD *)this + 12);
  v5 = (unsigned int)(v2 - 2);
  v6 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v5 < v4 )
  {
    v8 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v5);
  }
  else
  {
    v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v8 = &CExpressionValueStack::s_emptyValue;
    v4 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v4 )
  {
    v6 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
  }
  v10 = v8[18];
  v3 = 0;
  if ( v10 != v6[18] )
  {
    v13 = 2185;
    goto LABEL_3;
  }
  if ( v10 != 17 )
  {
    v13 = 2204;
    goto LABEL_3;
  }
  if ( *(_BYTE *)v8 || (v11 = 0, *(_BYTE *)v6) )
    v11 = 1;
  v8[18] = 17;
  *(_BYTE *)v8 = v11;
  *((_BYTE *)v8 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v3;
}
