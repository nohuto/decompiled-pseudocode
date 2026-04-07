/*
 * XREFs of ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002C2F4
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002C1BC (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002C490 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180091384 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800925CC (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800A5A60 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800A5EF4 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800A5FBC (-Start@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18000AB50 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A769C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

void __fastcall CAnimationScheduler::AbortAllAnimations(CAnimationScheduler *this)
{
  __int64 i; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    CStoryboard::Abandon(*(CStoryboard **)(*((_QWORD *)this + 2) + 8 * i));
  CAnimationScheduler::_CleanupTransition(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}
