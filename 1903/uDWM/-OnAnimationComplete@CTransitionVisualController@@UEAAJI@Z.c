/*
 * XREFs of ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800A41C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180004ED4 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800073E8 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180007CB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000ABC8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     McTemplateU0d @ 0x18007E318 (McTemplateU0d.c)
 */

__int64 __fastcall CTransitionVisualController::OnAnimationComplete(CTransitionVisualController *this, int a2)
{
  CAnimationEngine *v3; // rax
  __int64 v4; // rcx
  CAnimationEngine *v5; // rdi

  if ( *((_DWORD *)this + 22) == a2 )
  {
    v3 = CDesktopManager::AcquireAnimationEngine();
    v5 = v3;
    if ( v3 )
    {
      CAnimationEngine::UnregisterForAnimationCompleteNotification(v3, this);
      CAnimationEngine::Release(v5);
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0d(v4, (int)&UdwmTransitionVisualController_NotifyComplete, *((_DWORD *)this + 26));
    CTransitionVisualController::CleanupTransition(this);
  }
  return 0LL;
}
