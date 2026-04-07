/*
 * XREFs of ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x180003FA4
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180003F30 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x180003F80 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

void __fastcall CLauncherAnimationBase::RecordLauncherRect(CLauncherAnimationBase *this)
{
  __int64 v2; // rax
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rdx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)GetDesktopID(1LL, &v5) )
  {
    v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
    if ( *(_QWORD *)(v2 + 96) == -1LL || *(_QWORD *)(v2 + 96) == v5 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               v5);
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        if ( (HIDWORD(i[37].Blink) & 0xFFF) == 9 )
          *(struct _LIST_ENTRY *)((char *)this + 120) = i[3];
      }
    }
  }
}
