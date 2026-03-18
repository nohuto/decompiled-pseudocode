/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801D3484
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18021AAE8 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(
        CExpressionValueStack *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // edx
  __int64 v8; // rax
  float *v9; // rbx
  CExpressionValue *v10; // rax
  float *v11; // rdi
  CExpressionValue *v12; // rax
  __int128 v13; // xmm0
  float v14; // xmm3_4
  unsigned int v16; // [rsp+20h] [rbp-98h]
  unsigned int v17; // [rsp+28h] [rbp-90h]
  _BYTE v18[80]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v19; // [rsp+80h] [rbp-38h] BYREF
  __int128 v20; // [rsp+90h] [rbp-28h] BYREF

  v5 = *((unsigned int *)this + 4);
  if ( (unsigned int)v5 >= 2 )
  {
    v7 = *((_DWORD *)this + 12);
    v8 = (unsigned int)(v5 - 2);
    v9 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v8 < v7 )
    {
      v11 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
      LODWORD(v5) = *((_DWORD *)this + 4);
      v11 = (float *)&CExpressionValueStack::s_emptyValue;
      v7 = *((_DWORD *)this + 12);
    }
    v5 = (unsigned int)(v5 - 1);
    if ( (unsigned int)v5 < v7 )
    {
      v9 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
    }
    if ( *((_DWORD *)v11 + 18) == 35 )
    {
      if ( *((_DWORD *)v9 + 18) != 104 )
      {
        v16 = 2843;
        goto LABEL_3;
      }
      v14 = (float)((float)(v11[1] * v9[3]) + (float)(*v11 * v9[1])) + v9[5];
      *v11 = (float)((float)(v11[1] * v9[2]) + (float)(*v11 * *v9)) + v9[4];
      *((_DWORD *)v11 + 18) = 35;
      v11[1] = v14;
    }
    else
    {
      if ( *((_DWORD *)v11 + 18) != 69 )
      {
LABEL_19:
        --*((_DWORD *)this + 4);
        return 0;
      }
      if ( *((_DWORD *)v9 + 18) != 265 )
      {
        v16 = 2812;
        goto LABEL_3;
      }
      v19 = *(_OWORD *)v11;
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v20,
        v7,
        (const struct D2DVector4 *)&v19,
        a4,
        (const struct D2DMatrix *)v9,
        v17);
      v13 = v20;
      *((_DWORD *)v11 + 18) = 69;
      *(_OWORD *)v11 = v13;
    }
    *((_BYTE *)v11 + 76) = 1;
    goto LABEL_19;
  }
  v16 = 2786;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v5,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v16);
  return v6;
}
