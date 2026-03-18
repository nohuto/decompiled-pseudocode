/*
 * XREFs of ShouldProcessHungWindow @ 0x1C01162F4
 * Callers:
 *     NtUserQueryWindow @ 0x1C00523E0 (NtUserQueryWindow.c)
 *     ProcessHungWindow @ 0x1C01514D4 (ProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0151524 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C004F680 (IsHungWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01526E0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
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
    && !(unsigned int)GetWindowCloakState(v3) )
  {
    return v3;
  }
  return (struct tagWND *)v1;
}
