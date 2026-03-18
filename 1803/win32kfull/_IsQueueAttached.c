/*
 * XREFs of _IsQueueAttached @ 0x1C01A22E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

_BOOL8 __fastcall IsQueueAttached(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 424) + 392LL) > 1u;
}
