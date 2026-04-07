/*
 * XREFs of ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002D9A4
 * Callers:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000B294 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x1800305B0 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180031018 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18002D9E0 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002DA1C (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18002DB8C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 */

void __fastcall CAnimationScheduler::_CleanupTransition(CAnimationScheduler *this)
{
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  if ( !*((_DWORD *)this + 10) )
  {
    CTransitionVisualController::CleanupTransition(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 31));
    CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  }
}
