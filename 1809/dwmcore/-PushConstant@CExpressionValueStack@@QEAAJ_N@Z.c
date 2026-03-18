/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x1801D213C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x1800544FC (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, char a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx

  v4 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v4, 0x1BCu);
  }
  else
  {
    v7 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(*((_DWORD *)this + 4))++;
    *(_DWORD *)(v7 + 72) = 17;
    *(_BYTE *)v7 = a2;
    *(_BYTE *)(v7 + 76) = 1;
  }
  return v6;
}
