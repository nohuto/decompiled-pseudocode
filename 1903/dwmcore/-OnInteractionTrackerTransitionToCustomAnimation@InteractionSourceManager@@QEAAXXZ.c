/*
 * XREFs of ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x18021F0A0
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DD744 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801DAB20 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021E968 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation(
        InteractionSourceManager *this)
{
  InteractionSourceManager *v1; // r10

  if ( InteractionSourceManager::HasActiveManipulation(this) )
    InteractionSourceManager::ClearActiveManipulations(v1);
}
