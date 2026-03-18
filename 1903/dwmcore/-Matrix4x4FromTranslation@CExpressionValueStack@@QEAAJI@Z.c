/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x18008592C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // r11d
  char v3; // di
  __int64 v4; // r8
  int v5; // xmm1_4
  unsigned int v6; // xmm0_4
  unsigned int v7; // ebx
  int *v9; // rbx
  unsigned int *v10; // rax
  unsigned int v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+60h] [rbp-20h]
  __int128 v13; // [rsp+70h] [rbp-10h]

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( v2 < a2 )
  {
    v11 = 5735;
LABEL_11:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v11,
      0LL);
    return v7;
  }
  if ( a2 == 1 )
  {
    v4 = *((_QWORD *)this + 3) + 80LL * (v2 - 1);
    if ( *(_DWORD *)(v4 + 72) != 52 )
      goto LABEL_6;
    v5 = HIDWORD(*(_QWORD *)v4);
    LODWORD(v13) = *(_QWORD *)v4;
    v6 = *(_DWORD *)(v4 + 8);
    goto LABEL_5;
  }
  if ( a2 == 3 )
  {
    v4 = *((_QWORD *)this + 3) + 80LL * (v2 - 3);
    v9 = (int *)(*((_QWORD *)this + 3) + 80LL * (v2 - 2));
    v10 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v2 - 1));
    if ( *(_DWORD *)(v4 + 72) == 18 && v9[18] == 18 && v10[18] == 18 )
    {
      v5 = *v9;
      LODWORD(v13) = *(_DWORD *)v4;
      v6 = *v10;
LABEL_5:
      v3 = 1;
      *(_QWORD *)&v12 = 0LL;
      *((_QWORD *)&v13 + 1) = v6 | 0x3F80000000000000LL;
      DWORD1(v13) = v5;
      *(_OWORD *)v4 = 0x3F800000uLL;
      *(_OWORD *)(v4 + 16) = 0x3F80000000000000uLL;
      *((_QWORD *)&v12 + 1) = 1065353216LL;
      *(_OWORD *)(v4 + 32) = v12;
      *(_BYTE *)(v4 + 76) = 1;
      *(_OWORD *)(v4 + 48) = v13;
      *(_DWORD *)(v4 + 72) = 265;
    }
  }
LABEL_6:
  v7 = 0;
  if ( !v3 )
  {
    v11 = 5785;
    goto LABEL_11;
  }
  *((_DWORD *)this + 4) += 1 - a2;
  return v7;
}
