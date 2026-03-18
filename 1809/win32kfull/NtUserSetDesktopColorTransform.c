/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1C021C5F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x1C0259340 (DwmAsyncSetDesktopColorTransform.c)
 */

_BOOL8 __fastcall NtUserSetDesktopColorTransform(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rdx
  void *v3; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a1 + 100);
  v3 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL), v2);
  return (int)DwmAsyncSetDesktopColorTransform(v3) >= 0;
}
