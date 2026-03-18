/*
 * XREFs of ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801D441C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021A454 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18021A554 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z @ 0x18021A6D4 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z @ 0x18021A764 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z @ 0x18021A890 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z @ 0x18021A968 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4Transform(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rdi
  CExpressionValue *v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+28h] [rbp-39h]
  __int128 v25; // [rsp+38h] [rbp-29h] BYREF
  __int128 v26; // [rsp+48h] [rbp-19h] BYREF
  __int128 v27; // [rsp+58h] [rbp-9h] BYREF
  __int128 v28; // [rsp+68h] [rbp+7h] BYREF
  __int128 v29; // [rsp+78h] [rbp+17h]
  __int128 v30; // [rsp+88h] [rbp+27h]
  __int128 v31; // [rsp+98h] [rbp+37h]
  __int64 v32; // [rsp+C8h] [rbp+67h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 2 )
  {
    v24 = 7710;
LABEL_28:
    v22 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v24);
    return v22;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 2);
  v5 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)&v28);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v28);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)&v28);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v28);
  }
  v9 = v7[18];
  v10 = (unsigned int)(v9 - 35);
  if ( (unsigned int)v10 > 0x22 || (v2 = 0x400020001LL, !_bittest64(&v2, v10)) )
  {
    v24 = 7724;
    goto LABEL_28;
  }
  v2 = v5[18];
  if ( (_DWORD)v2 != 71 && (_DWORD)v2 != 265 )
  {
    v24 = 7733;
    goto LABEL_28;
  }
  switch ( v9 )
  {
    case '#':
      v32 = *(_QWORD *)v7;
      if ( (_DWORD)v2 == 265 )
      {
        v11 = *((_OWORD *)v5 + 1);
        v28 = *(_OWORD *)v5;
        v12 = *((_OWORD *)v5 + 2);
        v29 = v11;
        v13 = *((_OWORD *)v5 + 3);
        v30 = v12;
        v31 = v13;
        D3DXVec4Transform((struct D2DVector4 *)&v26, (const struct D2DVector2 *)&v32, (const struct D2DMatrix *)&v28);
      }
      else
      {
        v25 = *(_OWORD *)v5;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v26,
          (const struct D2DVector2 *)&v32,
          (const struct D2DQuaternion *)&v25);
      }
      break;
    case '4':
      v14 = v7[2];
      *(_QWORD *)&v25 = *(_QWORD *)v7;
      DWORD2(v25) = v14;
      if ( (_DWORD)v2 == 265 )
      {
        v15 = *((_OWORD *)v5 + 1);
        v28 = *(_OWORD *)v5;
        v16 = *((_OWORD *)v5 + 2);
        v29 = v15;
        v17 = *((_OWORD *)v5 + 3);
        v30 = v16;
        v31 = v17;
        D3DXVec4Transform((struct D2DVector4 *)&v26, (const struct D2DVector3 *)&v25, (const struct D2DMatrix *)&v28);
      }
      else
      {
        v27 = *(_OWORD *)v5;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v26,
          (const struct D2DVector3 *)&v25,
          (const struct D2DQuaternion *)&v27);
      }
      break;
    case 'E':
      v25 = *(_OWORD *)v7;
      if ( (_DWORD)v2 == 265 )
      {
        v18 = *((_OWORD *)v5 + 1);
        v28 = *(_OWORD *)v5;
        v19 = *((_OWORD *)v5 + 2);
        v29 = v18;
        v20 = *((_OWORD *)v5 + 3);
        v30 = v19;
        v31 = v20;
        D3DXVec4Transform((struct D2DVector4 *)&v26, (const struct D2DVector4 *)&v25, (const struct D2DMatrix *)&v28);
      }
      else
      {
        v27 = *(_OWORD *)v5;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v26,
          (const struct D2DVector4 *)&v25,
          (const struct D2DQuaternion *)&v27);
      }
      break;
  }
  v21 = v26;
  v7[18] = 69;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v21;
  --*((_DWORD *)this + 4);
  return 0;
}
