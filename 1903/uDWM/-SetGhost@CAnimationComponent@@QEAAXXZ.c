/*
 * XREFs of ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800AE8C8
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002BC04 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180033980 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800AE87C (-Morph@CAnimationComponent@@QEAAXXZ.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000BB14 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::SetGhost(CAnimationComponent *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 65) )
  {
    CAnimationComponent::_LogEvent((__int64)this, 3);
    v2 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 65) = 1;
    *(_BYTE *)(v2 + 970) = 1;
  }
}
