/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x1801D169C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     fmodf_0 @ 0x1800F001B (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  unsigned int v4; // edx
  __int64 v5; // rax
  float *v6; // rbx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rbp
  CExpressionValue *v9; // rax
  int v10; // eax
  float v11; // xmm1_4
  float v12; // xmm0_4
  unsigned int v14; // [rsp+20h] [rbp-68h]
  _BYTE v15[80]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 2);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = &CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    }
    v10 = v8[18];
    v3 = 0;
    if ( v10 == *((_DWORD *)v6 + 18) )
    {
      if ( v10 == 18 )
      {
        v11 = *v6;
        if ( *v6 > 0.0 )
        {
          v12 = *(float *)v8;
          v8[18] = 18;
          *(float *)v8 = fmodf_0(v12, v11);
          *((_BYTE *)v8 + 76) = 1;
          --*((_DWORD *)this + 4);
          return v3;
        }
        v14 = 1459;
      }
      else
      {
        v14 = 1475;
      }
    }
    else
    {
      v14 = 1444;
    }
  }
  else
  {
    v14 = 1421;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v14);
  return v3;
}
