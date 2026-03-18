/*
 * XREFs of ?Sqrt@CExpressionValueStack@@QEAAJXZ @ 0x18020426C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Sqrt(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rbx
  float v3; // xmm0_4
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v6 = 4663;
LABEL_8:
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v6,
      0LL);
    return v4;
  }
  v2 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v2 + 72) != 18 )
  {
    v6 = 4700;
    goto LABEL_8;
  }
  v3 = *(float *)v2;
  if ( *(float *)v2 < 0.0 )
  {
    v6 = 4685;
    goto LABEL_8;
  }
  *(_DWORD *)(v2 + 72) = 18;
  *(float *)v2 = sqrtf_0(v3);
  *(_BYTE *)(v2 + 76) = 1;
  return 0;
}
