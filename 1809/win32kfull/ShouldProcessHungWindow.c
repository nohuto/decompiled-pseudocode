/*
 * XREFs of ShouldProcessHungWindow @ 0x1C00F2D78
 * Callers:
 *     ProcessHungWindow @ 0x1C0008600 (ProcessHungWindow.c)
 *     NtUserQueryWindow @ 0x1C00F2B90 (NtUserQueryWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C01E2788 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0007F84 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsHungWindow @ 0x1C0017040 (IsHungWindow.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rdi

  v1 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow
    && (unsigned int)IsHungWindow(TopLevelWindow)
    && (unsigned int)_ShouldGhostWindow(v3)
    && !GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 900LL), 1LL)
    && !(unsigned int)GetWindowCloakState((__int64)v3) )
  {
    return v3;
  }
  return (struct tagWND *)v1;
}
