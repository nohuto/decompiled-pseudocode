/*
 * XREFs of ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x18002EF74
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000E704 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18002EFE4 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002EA44 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 */

__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequest(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct _GUID *a4)
{
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  LODWORD(a4) = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(this, a2, a3, 0LL, a4);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return (unsigned int)a4;
}
