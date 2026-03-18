/*
 * XREFs of UserIsCurrentThreadGdiScaled @ 0x1C00BCE40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 */

__int64 UserIsCurrentThreadGdiScaled()
{
  int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v1; // ebx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v1 = 1;
  if ( (!W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
     || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448)
     || (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL) + 52LL) & 1) == 0
     || (CurrentThreadDpiAwarenessContext & 0x4000000F) != 0x40000000)
    && (!W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
     || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL)
                   + 52LL) & 1) == 0
     || (CurrentThreadDpiAwarenessContext & 0xF) != 0
     || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 0x40) == 0) )
  {
    return 0;
  }
  return v1;
}
