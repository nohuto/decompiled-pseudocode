/*
 * XREFs of ?Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ @ 0x1801D0340
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x180218F10 (-D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveFieldOfView(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // edx
  __int64 v5; // rax
  float *v6; // rdi
  CExpressionValue *v7; // rax
  float *v8; // rsi
  __int64 v9; // rax
  CExpressionValue *v10; // rax
  float *v11; // r15
  __int64 v12; // rax
  CExpressionValue *v13; // rax
  float *v14; // r14
  CExpressionValue *v15; // rax
  struct D2DMatrix *v16; // rax
  __int128 v17; // xmm0
  unsigned int v19; // [rsp+20h] [rbp-60h]
  _OWORD v20[5]; // [rsp+30h] [rbp-50h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 4 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 4);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v9 = (unsigned int)(v2 - 3);
    if ( (unsigned int)v9 < v4 )
    {
      v11 = (float *)(*((_QWORD *)this + 3) + 80 * v9);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v11 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v12 = (unsigned int)(v2 - 2);
    if ( (unsigned int)v12 < v4 )
    {
      v14 = (float *)(*((_QWORD *)this + 3) + 80 * v12);
    }
    else
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v14 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    }
    if ( *((_DWORD *)v8 + 18) == 18 )
    {
      if ( *((_DWORD *)v11 + 18) == 18 )
      {
        if ( *((_DWORD *)v14 + 18) == 18 )
        {
          if ( *((_DWORD *)v6 + 18) == 18 )
          {
            v16 = D2DMatrixPerspectiveFieldOfView((struct D2DMatrix *)v20, *v8, *v11, *v14, *v6);
            v3 = 0;
            if ( v16 )
            {
              v17 = v20[0];
              *((_DWORD *)v8 + 18) = 265;
              *(_OWORD *)v8 = v17;
              *((_OWORD *)v8 + 1) = v20[1];
              *((_OWORD *)v8 + 2) = v20[2];
              *((_OWORD *)v8 + 3) = v20[3];
              *((_BYTE *)v8 + 76) = 1;
              *((_DWORD *)this + 4) -= 3;
              return v3;
            }
            v19 = 6720;
          }
          else
          {
            v19 = 6695;
          }
        }
        else
        {
          v19 = 6694;
        }
      }
      else
      {
        v19 = 6693;
      }
    }
    else
    {
      v19 = 6692;
    }
  }
  else
  {
    v19 = 6684;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v19);
  return v3;
}
