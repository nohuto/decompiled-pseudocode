/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801DC7F8
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021E2BC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED1C4 (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801D89A0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DC02C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
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
