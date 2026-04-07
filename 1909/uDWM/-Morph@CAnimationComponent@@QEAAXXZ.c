/*
 * XREFs of ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800AE51C
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800059F4 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000A3E4 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 *     McTemplateU0p @ 0x18008E088 (McTemplateU0p.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800AE568 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

void __fastcall CAnimationComponent::Morph(CAnimationComponent *this)
{
  __int64 v2; // rcx

  if ( !*((_BYTE *)this + 66) )
  {
    CAnimationComponent::SetGhost(this);
    CAnimationComponent::_LogEvent((__int64)this, 2);
    *((_BYTE *)this + 66) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p(v2, (int)&UdwmSystemAnimation_Morph, *((_QWORD *)this + 2));
  }
}
