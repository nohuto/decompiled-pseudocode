/*
 * XREFs of ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0066C3C
 * Callers:
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     GetMonitorMenuRect @ 0x1C022B034 (GetMonitorMenuRect.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int16 v3; // bx
  __int64 v5; // rdx

  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2) >> 8) & 0x1FF;
  if ( v3
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2) + 448)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 448) + 8LL)
                   + 52LL) & 1) == 0) )
  {
    return 0;
  }
  return v3;
}
