/*
 * XREFs of ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800C0D04
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800C0230 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800C0CB0 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801E6580 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007DF14 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800C0D60 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x4FBu, 0LL);
  }
  *((_DWORD *)this + 66) = 8;
  return v2;
}
