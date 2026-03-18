/*
 * XREFs of ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151920
 * Callers:
 *     ShouldProcessHungWindow @ 0x1C013CAD4 (ShouldProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01509A0 (xxxRegisterGhostWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 */

__int64 __fastcall _ShouldGhostWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // r14
  __int64 v5; // rcx
  int v6; // eax

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = *(_QWORD **)(v1 + 416);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) != 0
    && (unsigned int)IsTopLevelWindow(v5)
    && *(_QWORD *)(v1 + 448) == grpdeskRitInput
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL)
    && !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)
    && (*(_DWORD *)(*(_QWORD *)(v1 + 416) + 12LL) & 0x8000000) == 0
    && *v4 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(*v4)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 416)) )
  {
    v6 = 0;
    if ( *(_DWORD *)(v1 + 624) <= 0x9900u )
      v6 = *(_DWORD *)(v1 + 640);
    if ( (v6 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      return 1;
  }
  return v3;
}
