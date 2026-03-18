/*
 * XREFs of ?And@CExpressionValueStack@@QEAAJXZ @ 0x1801FE818
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::And(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  CExpressionValueStack *v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rdx
  bool v5; // al
  __int64 v6; // r9
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v8 = 2065;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v8,
      0LL);
    return v3;
  }
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = 0;
  v6 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
  v3 = 0;
  this = (CExpressionValueStack *)*(unsigned int *)(v4 + 72);
  if ( (_DWORD)this != *(_DWORD *)(v6 + 72) )
  {
    v8 = 2093;
    goto LABEL_3;
  }
  if ( (_DWORD)this != 17 )
  {
    v8 = 2112;
    goto LABEL_3;
  }
  if ( *(_BYTE *)v4 )
    v5 = *(_BYTE *)v6 != 0;
  *(_DWORD *)(v4 + 72) = 17;
  *(_BYTE *)v4 = v5;
  *(_BYTE *)(v4 + 76) = 1;
  --*((_DWORD *)v2 + 4);
  return v3;
}
