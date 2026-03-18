/*
 * XREFs of ?Vector2@CExpressionValueStack@@QEAAJXZ @ 0x180084FA4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  __int64 v2; // r8
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v6 = 5115;
LABEL_8:
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v6,
      0LL);
    return v4;
  }
  v2 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v3 = (_DWORD *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
  if ( *(_DWORD *)(v2 + 72) != 18 || (v4 = 0, v3[18] != 18) )
  {
    v6 = 5129;
    goto LABEL_8;
  }
  *(_DWORD *)(v2 + 4) = *v3;
  *(_DWORD *)(v2 + 72) = 35;
  *(_BYTE *)(v2 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v4;
}
