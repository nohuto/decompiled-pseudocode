/*
 * XREFs of ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18000AB50
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000731C (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x180007CF0 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002C2F4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 * Callees:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18000AB8C (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000ABC8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18000AD30 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
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
