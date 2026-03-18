/*
 * XREFs of ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C001D1D4
 * Callers:
 *     GetMonitorRectForWindow @ 0x1C001CCB8 (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     GetMaxTrackSizeForWindow @ 0x1C007AAB4 (GetMaxTrackSizeForWindow.c)
 *     IsSmallerThanScreen @ 0x1C00A5C9C (IsSmallerThanScreen.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     SelectWindowRgn @ 0x1C010A774 (SelectWindowRgn.c)
 *     GetMonitorMenuRectForWindow @ 0x1C0240FF8 (GetMonitorMenuRectForWindow.c)
 *     GetScreenRectForWindow @ 0x1C0241034 (GetScreenRectForWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCompositedDpi(const struct tagWND *a1)
{
  unsigned __int16 v1; // r8
  __int64 v2; // rax

  v1 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
  if ( v2 && (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 )
    return (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF;
  return v1;
}
