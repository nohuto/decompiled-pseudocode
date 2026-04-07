/*
 * XREFs of ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x18009FA40
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18000ADDC (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002DA1C (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800308F0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030FEC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     McTemplateU0d @ 0x1800779F8 (McTemplateU0d.c)
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
