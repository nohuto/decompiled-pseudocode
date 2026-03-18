/*
 * XREFs of ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x1801D2390
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180219B6C (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromAxisAngle(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  CExpressionValue *v8; // rax
  unsigned int v9; // ebp
  int v10; // eax
  float v11; // xmm2_4
  __int128 v12; // xmm0
  unsigned int v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  int v16; // [rsp+38h] [rbp-70h]
  __int128 v17; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v18[80]; // [rsp+50h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 2 )
  {
    v14 = 6943;
LABEL_13:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v14);
    return v9;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 2);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
  }
  if ( v7[18] != 52 || (v9 = 0, *((_DWORD *)v5 + 18) != 18) )
  {
    v14 = 6957;
    goto LABEL_13;
  }
  v10 = v7[2];
  v11 = *v5;
  v15 = *(_QWORD *)v7;
  v16 = v10;
  D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v17, (const struct D2DVector3 *)&v15, v11);
  v12 = v17;
  v7[18] = 71;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v12;
  --*((_DWORD *)this + 4);
  return v9;
}
