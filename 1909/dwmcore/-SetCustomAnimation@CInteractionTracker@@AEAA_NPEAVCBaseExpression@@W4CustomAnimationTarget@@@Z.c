/*
 * XREFs of ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DB49C
 * Callers:
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801DA328 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1801DA498 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800ED1E8 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D8334 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DC604 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 */

char __fastcall CInteractionTracker::SetCustomAnimation(CInteractionTracker *a1, __int64 a2, unsigned int a3)
{
  char v3; // di

  v3 = 0;
  if ( a2 )
    return CInteractionTracker::TransitionToCustomAnimation();
  if ( *((_DWORD *)a1 + 42) == 3 )
  {
    CInteractionTracker::StopCustomAnimation(a1, a3, 0);
    CInteractionTracker::CheckForIdle(a1);
  }
  return v3;
}
