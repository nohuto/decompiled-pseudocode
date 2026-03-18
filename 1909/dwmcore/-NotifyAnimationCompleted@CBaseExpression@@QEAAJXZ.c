/*
 * XREFs of ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A8BC4
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A6A50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A761C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D51C0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801DA328 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1801DA498 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E398C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A7828 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800A85A8 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationCompleted(CBaseExpression *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = 0;
  if ( CNotificationResource::ShouldNotify(this)
    || ((v7 = *(_QWORD *)(v3 + 24), (v7 & 2) == 0)
      ? (v8 = *(_QWORD *)(v3 + 24) & 1LL)
      : (v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL)),
        v8) )
  {
    v4 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 240LL), 1, (int *)this);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x4ACu, 0LL);
  }
  *((_DWORD *)this + 66) = 1;
  return v2;
}
