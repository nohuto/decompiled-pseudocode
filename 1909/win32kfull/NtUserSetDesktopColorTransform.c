/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1C02340B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x1C02725B0 (DwmAsyncSetDesktopColorTransform.c)
 */

_BOOL8 __fastcall NtUserSetDesktopColorTransform(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  void *v6; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a1 + 100, a3);
  v6 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL), v4, v5);
  return (int)DwmAsyncSetDesktopColorTransform(v6) >= 0;
}
