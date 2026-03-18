/*
 * XREFs of ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800A854C
 * Callers:
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A8640 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800D6BC0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801E4E10 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A7828 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800A85A8 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationDisconnected(CBaseExpression *this)
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
    v4 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 240LL), 8LL, this);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x4FDu, 0LL);
  }
  *((_DWORD *)this + 66) = 8;
  return v2;
}
