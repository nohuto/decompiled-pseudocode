/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800C0990
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180082278 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800C06EC (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800C07A8 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007DF14 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800C0A64 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x1800C0AD0 (-IsWaiting@CKeyframeAnimation@@QEBA_NXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800C0C50 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800C0D60 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800CE1E8 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2, struct CExpressionValueStack *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ebx
  CKeyframeAnimation *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r9d
  signed int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 540) & 0x20) != 0 )
    return 0;
  v5 = a2 - 1;
  if ( !v5 )
  {
    v11 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)a1);
    v8 = v11;
    if ( v11 >= 0 )
      return 0;
    v16 = 1805;
    goto LABEL_29;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = 0;
    if ( *(_DWORD *)(a1 + 264) == 4 && (*(_BYTE *)(a1 + 208) & 2) != 0 )
    {
      *(_DWORD *)(a1 + 264) = 2;
      if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1)
        || ((v12 = *(_QWORD *)(a1 + 24), (v12 & 2) != 0)
          ? (v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL))
          : (v13 = *(_QWORD *)(a1 + 24) & 1LL),
            v13) )
      {
        v15 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL), 2LL, a1);
        v8 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v15, 0x4CDu, 0LL);
      }
    }
    if ( v8 >= 0 )
      return 0;
    v16 = 1809;
    goto LABEL_26;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( *(_DWORD *)(a1 + 264) != 4 )
      CBaseExpression::NotifyAnimationStarted((CBaseExpression *)a1);
    if ( CKeyframeAnimation::IsWaiting((CKeyframeAnimation *)a1) )
      return 0;
    v11 = CKeyframeAnimation::SampleExpressionsAndStartingValue(v10, a3);
    v8 = v11;
    if ( v11 >= 0 )
      return 0;
    v16 = 1826;
LABEL_29:
    v14 = v11;
    goto LABEL_30;
  }
  if ( v7 != 28 )
  {
    v8 = -2147024809;
    v16 = 1836;
LABEL_26:
    v14 = v8;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v14, v16, 0LL);
    return (unsigned int)v8;
  }
  return 0;
}
