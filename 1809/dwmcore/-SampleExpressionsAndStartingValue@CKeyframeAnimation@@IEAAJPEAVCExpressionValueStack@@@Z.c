/*
 * XREFs of ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180053FA0
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800539BC (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180054AB4 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleExpressionsAndStartingValue(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  __int64 i; // rdi
  unsigned int v5; // edi
  int v7; // eax
  unsigned int v8; // ecx
  bool v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 524) & 8) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
      CBaseExpression::CalculateValue(
        *(CBaseExpression **)(*((_QWORD *)this + 43) + 8 * i),
        a2,
        *((_QWORD *)this + 20),
        &v9);
    if ( *((_QWORD *)this + 41) )
    {
      v7 = CKeyframeAnimation::SampleStartingValue(this);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x8B5u);
        return v5;
      }
    }
    *((_BYTE *)this + 524) |= 8u;
  }
  return 0;
}
