/*
 * XREFs of ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180005D48
 * Callers:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180004F90 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180005C7C (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000642C (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800090A8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180030AD4 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180040D20 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800A3E60 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A5384 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A579C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A5CCC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800A9034 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800AE0D8 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800AE17C (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800B0670 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800B0820 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CAnimationEngine *CDesktopManager::AcquireAnimationEngine(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rcx

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
  if ( v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 116));
    v0 = CDesktopManager::s_pDesktopManagerInstance;
  }
  return (struct CAnimationEngine *)*((_QWORD *)v0 + 25);
}
