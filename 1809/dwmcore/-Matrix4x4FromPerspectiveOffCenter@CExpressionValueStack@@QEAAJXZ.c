/*
 * XREFs of ?Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ @ 0x1801D0554
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z @ 0x180218FF4 (-D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveOffCenter(CExpressionValueStack *this)
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
  float *v14; // r12
  __int64 v15; // rax
  CExpressionValue *v16; // rax
  float *v17; // r13
  __int64 v18; // rax
  CExpressionValue *v19; // rax
  float *v20; // r14
  CExpressionValue *v21; // rax
  struct D2DMatrix *v22; // rax
  __int128 v23; // xmm0
  unsigned int v25; // [rsp+28h] [rbp-39h]
  _OWORD v26[5]; // [rsp+48h] [rbp-19h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 6 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 6);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v9 = (unsigned int)(v2 - 5);
    if ( (unsigned int)v9 < v4 )
    {
      v11 = (float *)(*((_QWORD *)this + 3) + 80 * v9);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v11 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v12 = (unsigned int)(v2 - 4);
    if ( (unsigned int)v12 < v4 )
    {
      v14 = (float *)(*((_QWORD *)this + 3) + 80 * v12);
    }
    else
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v14 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v15 = (unsigned int)(v2 - 3);
    if ( (unsigned int)v15 < v4 )
    {
      v17 = (float *)(*((_QWORD *)this + 3) + 80 * v15);
    }
    else
    {
      v16 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v16);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v17 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v18 = (unsigned int)(v2 - 2);
    if ( (unsigned int)v18 < v4 )
    {
      v20 = (float *)(*((_QWORD *)this + 3) + 80 * v18);
    }
    else
    {
      v19 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v19);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v20 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v21 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v21);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
    }
    if ( *((_DWORD *)v8 + 18) == 18 )
    {
      if ( *((_DWORD *)v11 + 18) == 18 )
      {
        if ( *((_DWORD *)v14 + 18) == 18 )
        {
          if ( *((_DWORD *)v17 + 18) == 18 )
          {
            if ( *((_DWORD *)v20 + 18) == 18 )
            {
              if ( *((_DWORD *)v6 + 18) == 18 )
              {
                v22 = D2DMatrixPerspectiveOffCenter((struct D2DMatrix *)v26, *v8, *v11, *v14, *v17, *v20, *v6);
                v3 = 0;
                if ( v22 )
                {
                  v23 = v26[0];
                  *((_DWORD *)v8 + 18) = 265;
                  *(_OWORD *)v8 = v23;
                  *((_OWORD *)v8 + 1) = v26[1];
                  *((_OWORD *)v8 + 2) = v26[2];
                  *((_OWORD *)v8 + 3) = v26[3];
                  *((_BYTE *)v8 + 76) = 1;
                  *((_DWORD *)this + 4) -= 5;
                  return v3;
                }
                v25 = 6801;
              }
              else
              {
                v25 = 6773;
              }
            }
            else
            {
              v25 = 6772;
            }
          }
          else
          {
            v25 = 6771;
          }
        }
        else
        {
          v25 = 6770;
        }
      }
      else
      {
        v25 = 6769;
      }
    }
    else
    {
      v25 = 6768;
    }
  }
  else
  {
    v25 = 6758;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v25);
  return v3;
}
