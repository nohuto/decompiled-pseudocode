/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801A3020
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801E5F80 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F2D8 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18019F3A8 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801A2D98 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801E57E8 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 42);
  if ( !v1 || (unsigned int)(v1 - 2) <= 1 )
  {
    CInteractionTracker::StopCustomAnimations(this);
    CInteractionTracker::DestroyDefaultAnimations(this);
    *((_DWORD *)this + 45) = 0;
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
    InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
      (char *)this + 192,
      *((unsigned int *)this + 42));
    *((_DWORD *)this + 130) = *((_DWORD *)this + 32);
    CInteractionTracker::SetState((__int64)this, 1);
  }
}
