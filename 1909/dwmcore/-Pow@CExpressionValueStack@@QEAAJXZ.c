/*
 * XREFs of ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x180201C40
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     powf @ 0x1800E8E28 (powf.c)
 */

__int64 __fastcall CExpressionValueStack::Pow(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  CExpressionValueStack *v2; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  float v6; // xmm6_4
  unsigned int v8; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v8 = 4731;
LABEL_10:
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
  v3 = 0;
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
  this = (CExpressionValueStack *)*(unsigned int *)(v4 + 72);
  if ( (_DWORD)this != *(_DWORD *)(v5 + 72) )
  {
    v8 = 4754;
    goto LABEL_10;
  }
  if ( (_DWORD)this != 18 )
  {
    v8 = 4788;
    goto LABEL_10;
  }
  v6 = powf(*(float *)v4, *(float *)v5);
  if ( _isnan(v6) )
  {
    v8 = 4774;
    goto LABEL_10;
  }
  *(float *)v4 = v6;
  *(_DWORD *)(v4 + 72) = 18;
  *(_BYTE *)(v4 + 76) = 1;
  --*((_DWORD *)v2 + 4);
  return v3;
}
