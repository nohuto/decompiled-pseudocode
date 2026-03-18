/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C0090E9C
 * Callers:
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0090E5C (GetMonitorWorkRect.c)
 *     GetMonitorMenuRect @ 0x1C0259D74 (GetMonitorMenuRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 GetCurrentThreadCompositedDpiContext(void)
{
  __int64 v0; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0, v2, v3) + 448)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7) + 448)
                                 + 8LL)
                   + 64LL) & 1) == 0) )
  {
    return 18;
  }
  return CurrentThreadDpiAwarenessContext;
}
