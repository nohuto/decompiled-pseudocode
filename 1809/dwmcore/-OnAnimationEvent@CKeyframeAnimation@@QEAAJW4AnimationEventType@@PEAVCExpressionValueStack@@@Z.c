/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800539BC
 * Callers:
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180053DB8 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18005427C (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800E6E2C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180051448 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800518CC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18005388C (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180053FA0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x18005400C (-IsWaiting@CKeyframeAnimation@@QEBA_NXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800545C0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 524) & 0x20) != 0 )
    return 0;
  v5 = a2 - 1;
  if ( !v5 )
  {
    v11 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)a1);
    v8 = v11;
    if ( v11 >= 0 )
      return 0;
    v16 = 1818;
    goto LABEL_28;
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
        v14 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 224LL), 2, (int *)a1);
        v8 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v14, 0x4A2u);
      }
    }
    if ( v8 >= 0 )
      return 0;
    v16 = 1822;
    goto LABEL_27;
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
    v16 = 1839;
LABEL_28:
    v15 = v11;
    goto LABEL_29;
  }
  if ( v7 != 28 )
  {
    v8 = -2147024809;
    v16 = 1849;
LABEL_27:
    v15 = v8;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v15, v16);
    return (unsigned int)v8;
  }
  return 0;
}
