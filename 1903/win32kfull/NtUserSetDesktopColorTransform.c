/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1C02346D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x1C0272CC0 (DwmAsyncSetDesktopColorTransform.c)
 */

_BOOL8 __fastcall NtUserSetDesktopColorTransform(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  void *v7; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a1 + 100, a3, a4);
  v7 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL), v5, v6);
  return (int)DwmAsyncSetDesktopColorTransform(v7) >= 0;
}
