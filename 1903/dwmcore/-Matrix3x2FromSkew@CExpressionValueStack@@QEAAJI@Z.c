/*
 * XREFs of ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJI@Z @ 0x180201CA8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(CExpressionValueStack *this, unsigned int a2)
{
  char v3; // r14
  unsigned int v4; // edx
  unsigned int v6; // ebp
  __int64 v7; // rbp
  __int64 v8; // rax
  float v9; // xmm1_4
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __int64 v12; // r8
  unsigned int *v13; // rax
  __int64 v14; // xmm1_8
  unsigned int v16; // [rsp+20h] [rbp-48h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)this + 4);
  if ( v4 < a2 )
  {
    v16 = 5949;
    goto LABEL_3;
  }
  if ( a2 == 2 )
  {
    v7 = *((_QWORD *)this + 3) + 80LL * (v4 - 2);
    v8 = *((_QWORD *)this + 3) + 80LL * (v4 - 1);
    if ( *(_DWORD *)(v7 + 72) != 18 || *(_DWORD *)(v8 + 72) != 18 )
      goto LABEL_14;
    v9 = *(float *)v8;
    v10 = 0LL;
    v11 = 0LL;
  }
  else
  {
    if ( a2 != 3 )
      goto LABEL_14;
    v7 = *((_QWORD *)this + 3) + 80LL * (v4 - 3);
    v12 = *((_QWORD *)this + 3) + 80LL * (v4 - 2);
    v13 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v4 - 1));
    if ( *(_DWORD *)(v7 + 72) != 18 || *(_DWORD *)(v12 + 72) != 18 || v13[18] != 35 )
      goto LABEL_14;
    v10 = (__m128)v13[1];
    v9 = *(float *)v12;
    v11 = (__m128)*v13;
  }
  v3 = 1;
  D2D1MakeSkewMatrix(
    *(float *)v7 * 57.295776,
    v9 * 57.295776,
    (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v11, v10),
    &matrix);
  v14 = *(_QWORD *)&matrix.m[2][0];
  *(_OWORD *)v7 = *(_OWORD *)&matrix.m11;
  *(_BYTE *)(v7 + 76) = 1;
  *(_QWORD *)(v7 + 16) = v14;
  *(_DWORD *)(v7 + 72) = 104;
LABEL_14:
  v6 = 0;
  if ( v3 )
  {
    *((_DWORD *)this + 4) += 1 - a2;
    return v6;
  }
  v16 = 6011;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v16,
    0LL);
  return v6;
}
