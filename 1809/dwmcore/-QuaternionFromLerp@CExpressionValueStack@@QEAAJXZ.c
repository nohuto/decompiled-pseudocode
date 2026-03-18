/*
 * XREFs of ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ @ 0x1801D24C8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x180219964 (-D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromLerp(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  float *v6; // rbx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rax
  CExpressionValue *v10; // rax
  _DWORD *v11; // r14
  CExpressionValue *v12; // rax
  __int128 v13; // xmm1
  float v14; // xmm3_4
  __int128 v15; // xmm0
  unsigned int v17; // [rsp+28h] [rbp-39h]
  __int128 v18; // [rsp+38h] [rbp-29h] BYREF
  __int128 v19; // [rsp+48h] [rbp-19h] BYREF
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v21[80]; // [rsp+68h] [rbp+7h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 3 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 3);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = &CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v9 = (unsigned int)(v2 - 2);
    if ( (unsigned int)v9 < v4 )
    {
      v11 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v9);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v11 = &CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    }
    if ( v8[18] == 71 )
    {
      if ( v11[18] == 71 )
      {
        if ( *((_DWORD *)v6 + 18) == 18 )
        {
          v13 = *(_OWORD *)v11;
          v14 = *v6;
          v19 = *(_OWORD *)v8;
          v18 = v13;
          D3DXQuaternionLerp(
            (struct D2DQuaternion *)&v20,
            (const struct D2DQuaternion *)&v19,
            (const struct D2DQuaternion *)&v18,
            v14);
          v15 = v20;
          v8[18] = 71;
          *((_BYTE *)v8 + 76) = 1;
          *(_OWORD *)v8 = v15;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v17 = 7013;
      }
      else
      {
        v17 = 7012;
      }
    }
    else
    {
      v17 = 7011;
    }
  }
  else
  {
    v17 = 7004;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17);
  return v3;
}
