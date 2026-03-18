/*
 * XREFs of ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00B70E0
 * Callers:
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     GetScreenRect @ 0x1C00B9150 (GetScreenRect.c)
 *     GetMonitorMenuRect @ 0x1C0240FB4 (GetMonitorMenuRect.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int16 v3; // bx
  __int64 v5; // rdx

  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2) >> 8) & 0x1FF;
  if ( v3
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2) + 456)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 456) + 8LL)
                   + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v3;
}
