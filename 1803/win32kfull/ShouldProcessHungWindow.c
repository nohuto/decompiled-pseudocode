/*
 * XREFs of ShouldProcessHungWindow @ 0x1C00C0BD4
 * Callers:
 *     NtUserQueryWindow @ 0x1C0070EC0 (NtUserQueryWindow.c)
 *     ProcessHungWindow @ 0x1C00BC598 (ProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00BFE0C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00C0C4C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall ShouldProcessHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 TopLevelWindow; // rax
  __int64 v3; // rdi

  v1 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = TopLevelWindow;
  if ( TopLevelWindow
    && (unsigned int)IsHungWindow(TopLevelWindow)
    && (unsigned int)_ShouldGhostWindow((struct tagWND *)v3)
    && !RealGetProp(*(_QWORD *)(v3 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL)
    && !(unsigned int)GetWindowCloakState((_QWORD *)v3) )
  {
    return v3;
  }
  return v1;
}
