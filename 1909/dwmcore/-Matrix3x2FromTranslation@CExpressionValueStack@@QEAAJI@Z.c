/*
 * XREFs of ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x18009430C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // r11d
  char v3; // di
  CExpressionValueStack *v4; // r8
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  unsigned int v7; // ebx
  unsigned int *v9; // r10
  unsigned int *v10; // rax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v4 = this;
  if ( v2 < a2 )
  {
    v13 = 5660;
LABEL_11:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v13,
      0LL);
    return v7;
  }
  if ( a2 == 1 )
  {
    this = (CExpressionValueStack *)*((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 20 * v2 - 2) != 35 )
      goto LABEL_6;
    v5 = (__m128)*((unsigned int *)this + 20 * v2 - 20);
    v6 = (__m128)*((unsigned int *)this + 20 * v2 - 19);
    *((_OWORD *)this + 5 * v2 - 5) = _xmm;
    *((_DWORD *)this + 20 * v2 - 2) = 104;
    *((_BYTE *)this + 80 * v2 - 4) = 1;
    *((_QWORD *)this + 10 * v2 - 8) = _mm_unpacklo_ps(v5, v6).m128_u64[0];
    goto LABEL_5;
  }
  if ( a2 == 2 )
  {
    v9 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v2 - 2));
    v10 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v2 - 1));
    if ( v9[18] == 18 && v10[18] == 18 )
    {
      v11 = (__m128)*v9;
      v12 = (__m128)*v10;
      *(_OWORD *)v9 = _xmm;
      v9[18] = 104;
      *((_BYTE *)v9 + 76) = 1;
      *((_QWORD *)v9 + 2) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
LABEL_5:
      v3 = 1;
    }
  }
LABEL_6:
  v7 = 0;
  if ( !v3 )
  {
    v13 = 5701;
    goto LABEL_11;
  }
  *((_DWORD *)v4 + 4) += 1 - a2;
  return v7;
}
