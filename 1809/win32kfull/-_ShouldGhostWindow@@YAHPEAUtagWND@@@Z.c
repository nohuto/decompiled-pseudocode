/*
 * XREFs of ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0007F84
 * Callers:
 *     ShouldProcessHungWindow @ 0x1C00F2D78 (ShouldProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01E3C90 (xxxRegisterGhostWindow.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall _ShouldGhostWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // r14
  __int64 v5; // rcx
  int v7; // eax

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = *(_QWORD **)(v1 + 424);
  if ( !(unsigned int)IsWindowBeingDestroyed()
    && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) != 0
    && (unsigned int)IsTopLevelWindow()
    && *(_QWORD *)(v1 + 456) == grpdeskRitInput
    && **(_WORD **)(*((_QWORD *)a1 + 14) + 8LL) != *(_WORD *)(gpsi + 900LL)
    && !GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)
    && (*(_DWORD *)(*(_QWORD *)(v1 + 424) + 12LL) & 0x8000000) == 0
    && *v4 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(*v4)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 424)) )
  {
    v7 = 0;
    if ( *(_DWORD *)(v1 + 632) <= 0x9900u )
      v7 = *(_DWORD *)(v1 + 648);
    if ( (v7 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow(a1) )
      return 1;
  }
  return v3;
}
