/*
 * XREFs of ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801E1714
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180081C20 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1802098E4 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180082060 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800993F0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessInnerExpression(
        CKeyframeAnimation *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        struct CExpressionValue *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  signed int v7; // eax
  __int64 v8; // rcx
  bool v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 < *((_DWORD *)this + 98) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * a2);
    v7 = CBaseExpression::CalculateValue((CBaseExpression *)v6, a3, *((_QWORD *)this + 20), &v10);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x686u, 0LL);
    }
    else
    {
      CExpressionValue::CopyFrom(a4, (const struct CExpressionValue *)(v6 + 64));
      return 0;
    }
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80004005, 0x67Fu, 0LL);
  }
  return v5;
}
