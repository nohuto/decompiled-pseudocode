/*
 * XREFs of ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x1801D40E0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  _DWORD *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // r14
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  _DWORD *v13; // r15
  CExpressionValue *v14; // rax
  unsigned int v15; // esi
  unsigned int v17; // [rsp+28h] [rbp-29h]
  __int128 v18; // [rsp+38h] [rbp-19h]
  _BYTE v19[80]; // [rsp+48h] [rbp-9h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 4 )
  {
    v17 = 5239;
LABEL_21:
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v17);
    return v15;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 4);
  v5 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v8 = (unsigned int)(v2 - 3);
  if ( (unsigned int)v8 < v3 )
  {
    v10 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v10 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v11 = (unsigned int)(v2 - 2);
  if ( (unsigned int)v11 < v3 )
  {
    v13 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v13 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v14 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
  }
  if ( v7[18] != 18 || v10[18] != 18 || v13[18] != 18 || (v15 = 0, v5[18] != 18) )
  {
    v17 = 5257;
    goto LABEL_21;
  }
  LODWORD(v18) = *v7;
  DWORD1(v18) = *v10;
  DWORD2(v18) = *v13;
  HIDWORD(v18) = *v5;
  v7[18] = 69;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v18;
  *((_DWORD *)this + 4) -= 3;
  return v15;
}
