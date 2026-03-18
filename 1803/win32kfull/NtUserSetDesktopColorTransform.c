/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1C01F4DE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x1C02418A0 (DwmAsyncSetDesktopColorTransform.c)
 */

_BOOL8 __fastcall NtUserSetDesktopColorTransform(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  void *v4; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a1 + 100);
  v4 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL), v2, v3);
  return (int)DwmAsyncSetDesktopColorTransform(v4) >= 0;
}
