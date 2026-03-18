/*
 * XREFs of ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A1ED4
 * Callers:
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801A0CB4 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1801A0E64 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTE.c)
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18019EDCC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1801A2D2C (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A2E54 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 */

char __fastcall CInteractionTracker::SetCustomAnimation(CInteractionTracker *a1, __int64 a2, int a3)
{
  char v3; // di

  v3 = 0;
  if ( a2 )
    return CInteractionTracker::TransitionToCustomAnimation();
  if ( *((_DWORD *)a1 + 42) == 3 )
  {
    CInteractionTracker::StopCustomAnimation(a1, a3);
    CInteractionTracker::CheckForIdle(a1);
  }
  return v3;
}
