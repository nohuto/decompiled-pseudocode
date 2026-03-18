/*
 * XREFs of ?Ceil@CExpressionValueStack@@QEAAJXZ @ 0x1802000F8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Ceil(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rbx
  float v4; // xmm0_4
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 72) == 18 )
    {
      v4 = *(float *)v3;
      *(_DWORD *)(v3 + 72) = 18;
      *(float *)v3 = ceilf_0(v4);
      *(_BYTE *)(v3 + 76) = 1;
      return 0;
    }
    v6 = 4488;
  }
  else
  {
    v6 = 4460;
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
