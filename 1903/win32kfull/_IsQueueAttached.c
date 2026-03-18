/*
 * XREFs of _IsQueueAttached @ 0x1C01D6F30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

_BOOL8 __fastcall IsQueueAttached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 424) + 400LL) > 1u;
}
