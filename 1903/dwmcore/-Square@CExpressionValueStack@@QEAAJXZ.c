/*
 * XREFs of ?Square@CExpressionValueStack@@QEAAJXZ @ 0x18020430C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Square(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  float v4; // xmm0_4
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 72) == 18 )
    {
      v2 = 0;
      v4 = *(float *)v3 * *(float *)v3;
      *(_DWORD *)(v3 + 72) = 18;
      *(_BYTE *)(v3 + 76) = 1;
      *(float *)v3 = v4;
      return v2;
    }
    v6 = 4844;
  }
  else
  {
    v6 = 4817;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v6,
    0LL);
  return v2;
}
