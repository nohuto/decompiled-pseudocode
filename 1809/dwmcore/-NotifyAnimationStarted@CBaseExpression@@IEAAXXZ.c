/*
 * XREFs of ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180051448
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800539BC (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x18018AFB4 (-LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18018C3B8 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

void __fastcall CBaseExpression::NotifyAnimationStarted(CBaseExpression *this)
{
  bool v1; // zf
  CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v3; // rdx
  struct CResource *v4; // r8
  unsigned int v5; // r9d

  v1 = (*((_BYTE *)this + 208) & 0x20) == 0;
  *((_DWORD *)this + 66) = 4;
  if ( !v1 )
  {
    AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
    CAnimationLoggingManager::LogAnimationStarted(
      AnimationLoggingManagerNoRef,
      *(_QWORD *)(v3 + 160),
      v4,
      v5,
      *(_DWORD *)(v3 + 184));
  }
}
