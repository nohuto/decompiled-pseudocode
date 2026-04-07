/*
 * XREFs of ?IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType@1@@Z @ 0x18000EFC0
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18001077C (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z @ 0x1800240E4 (-IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

bool __fastcall CTopLevelWindow3D::IsTransitionEnabledForWindowGroup(const struct CWindowData *a1, int a2)
{
  char v2; // bl
  int v4; // edx
  int v6; // ebp
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *Blink; // rdi
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v2 = 1;
  v4 = a2 - 1;
  if ( (!v4 || v4 == 5) && IsWindowTabEligible(a1) )
  {
    v6 = 1;
    if ( (unsigned int)GetWindowGroupId(*((_QWORD *)a1 + 5), &v9) )
    {
      if ( v9 )
      {
        if ( (unsigned int)GetDesktopID(1LL, &v11) )
        {
          WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                   v11);
          Blink = WindowListForDesktop->Blink;
          if ( Blink != WindowListForDesktop )
          {
            do
            {
              if ( Blink != (struct _LIST_ENTRY *)a1
                && Blink[24].Blink
                && (unsigned int)GetWindowGroupId(Blink[2].Blink, &v10)
                && v10 == v9 )
              {
                ++v6;
              }
              Blink = Blink->Blink;
            }
            while ( Blink != WindowListForDesktop );
            return v6 <= 1;
          }
        }
      }
    }
  }
  return v2;
}
