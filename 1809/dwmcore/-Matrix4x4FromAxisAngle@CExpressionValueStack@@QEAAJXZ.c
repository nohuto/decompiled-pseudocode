/*
 * XREFs of ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x180016168
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1800162BC (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromAxisAngle(unsigned __int64 this)
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // edx
  __int64 v3; // rax
  float *v4; // rbx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rdi
  CExpressionValue *v7; // rax
  unsigned int v8; // r14d
  int v9; // eax
  float v10; // xmm2_4
  unsigned int v12; // [rsp+28h] [rbp-19h]
  __int64 v13; // [rsp+38h] [rbp-9h] BYREF
  int v14; // [rsp+40h] [rbp-1h]
  _OWORD v15[5]; // [rsp+48h] [rbp+7h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this < 2 )
  {
    v12 = 6136;
LABEL_13:
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12);
    return v8;
  }
  v2 = *(_DWORD *)(v1 + 48);
  v3 = (unsigned int)(this - 2);
  v4 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < v2 )
  {
    v6 = (_DWORD *)(*(_QWORD *)(v1 + 24) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v6 = &CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  this = (unsigned int)(this - 1);
  if ( (unsigned int)this < v2 )
  {
    v4 = (float *)(*(_QWORD *)(v1 + 24) + 80 * this);
  }
  else
  {
    v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
  }
  if ( v6[18] != 52 || (v8 = 0, *((_DWORD *)v4 + 18) != 18) )
  {
    v12 = 6150;
    goto LABEL_13;
  }
  v9 = v6[2];
  v10 = *v4;
  v13 = *(_QWORD *)v6;
  v14 = v9;
  D2DMatrixRotationAxis((struct D2DMatrix *)v15, (const struct D2DVector3 *)&v13, v10);
  v6[18] = 265;
  *(_OWORD *)v6 = v15[0];
  *((_OWORD *)v6 + 1) = v15[1];
  *((_OWORD *)v6 + 2) = v15[2];
  *((_OWORD *)v6 + 3) = v15[3];
  *((_BYTE *)v6 + 76) = 1;
  --*(_DWORD *)(v1 + 16);
  return v8;
}
