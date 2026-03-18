/*
 * XREFs of ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x1801CEF7C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180218810 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Inverse(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rax
  CExpressionValue *v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // xmm1_8
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  unsigned int v13; // [rsp+20h] [rbp-39h]
  float v14[4]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v15[5]; // [rsp+40h] [rbp-19h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+90h] [rbp+37h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v13 = 2895;
LABEL_16:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13);
    return v5;
  }
  v2 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v2 < *((_DWORD *)this + 12) )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v3 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
    v4 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v3);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
  }
  v5 = 0;
  if ( *((_DWORD *)v4 + 18) == 104 )
  {
    v9 = v4[2];
    *(_OWORD *)&matrix.m11 = *(_OWORD *)v4;
    *(_QWORD *)&matrix.m[2][0] = v9;
    if ( !D2D1InvertMatrix(&matrix) )
    {
      v13 = 2921;
      goto LABEL_16;
    }
    v10 = *(_OWORD *)&matrix.m11;
    *((_DWORD *)v4 + 18) = 104;
    v11 = *(_QWORD *)&matrix.m[2][0];
    *(_OWORD *)v4 = v10;
    v4[2] = v11;
  }
  else
  {
    if ( *((_DWORD *)v4 + 18) != 265 )
    {
      v13 = 2960;
      goto LABEL_16;
    }
    v14[0] = 0.0;
    D2DMatrixInverse((struct D2DMatrix *)v15, v14, (const struct D2DMatrix *)v4);
    if ( v14[0] == 0.0 )
    {
      v13 = 2945;
      goto LABEL_16;
    }
    v6 = v15[1];
    *(_OWORD *)v4 = v15[0];
    *((_DWORD *)v4 + 18) = 265;
    v7 = v15[2];
    *((_OWORD *)v4 + 1) = v6;
    v8 = v15[3];
    *((_OWORD *)v4 + 2) = v7;
    *((_OWORD *)v4 + 3) = v8;
  }
  *((_BYTE *)v4 + 76) = 1;
  return v5;
}
