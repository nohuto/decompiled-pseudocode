/*
 * XREFs of ?Cos@CExpressionValueStack@@QEAAJXZ @ 0x180095768
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     cosf_0 @ 0x1800F0193 (cosf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Cos(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rbx
  float v3; // xmm0_4
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v6 = 4183;
LABEL_7:
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
    v6 = 4211;
    goto LABEL_7;
  }
  v3 = *(float *)v2;
  *(_DWORD *)(v2 + 72) = 18;
  *(float *)v2 = cosf_0(v3);
  *(_BYTE *)(v2 + 76) = 1;
  return 0;
}
