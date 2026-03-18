/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801DDF10
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021F9CC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800EAFBC (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801DA0B0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DD744 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 42);
  if ( !v1 || (unsigned int)(v1 - 2) <= 1 )
  {
    CInteractionTracker::StopCustomAndDefaultAnimations(this, 0);
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
    CInteractionTracker::SetState((__int64)this, 1, 0);
  }
}
