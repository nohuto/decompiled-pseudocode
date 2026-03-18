/*
 * XREFs of ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x1801FF6B4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1802264D4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Inverse(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rbx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // xmm1_8
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-29h]
  float v12[4]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-9h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+80h] [rbp+37h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v11 = 2883;
LABEL_13:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v11,
      0LL);
    return v9;
  }
  v2 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v2 + 72) == 104 )
  {
    v6 = *(_QWORD *)(v2 + 16);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)v2;
    *(_QWORD *)&matrix.m[2][0] = v6;
    if ( !D2D1InvertMatrix(&matrix) )
    {
      v11 = 2909;
      goto LABEL_13;
    }
    v7 = *(_OWORD *)&matrix.m11;
    *(_DWORD *)(v2 + 72) = 104;
    v8 = *(_QWORD *)&matrix.m[2][0];
    *(_OWORD *)v2 = v7;
    *(_QWORD *)(v2 + 16) = v8;
  }
  else
  {
    if ( *(_DWORD *)(v2 + 72) != 265 )
    {
      v11 = 2948;
      goto LABEL_13;
    }
    v12[0] = 0.0;
    D2DMatrixInverse((struct D2DMatrix *)v13, v12, (const struct D2DMatrix *)v2);
    if ( v12[0] == 0.0 )
    {
      v11 = 2933;
      goto LABEL_13;
    }
    v3 = v13[1];
    *(_OWORD *)v2 = v13[0];
    *(_DWORD *)(v2 + 72) = 265;
    v4 = v13[2];
    *(_OWORD *)(v2 + 16) = v3;
    v5 = v13[3];
    *(_OWORD *)(v2 + 32) = v4;
    *(_OWORD *)(v2 + 48) = v5;
  }
  *(_BYTE *)(v2 + 76) = 1;
  return 0;
}
