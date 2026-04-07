/*
 * XREFs of ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x1800A4620
 * Callers:
 *     <none>
 * Callees:
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800064F4 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180032140 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 */

__int64 __fastcall CDialogSwitch::OnEndTransitionRequest(CStoryboard **this)
{
  unsigned int v1; // ebx

  v1 = CStoryboard::OnEndTransitionRequest(this);
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30), 18);
  return v1;
}
