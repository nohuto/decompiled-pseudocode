/*
 * XREFs of FreeW32Thread @ 0x1C00E794C
 * Callers:
 *     W32pThreadCallout @ 0x1C00E7CC0 (W32pThreadCallout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DereferenceW32Thread @ 0x1C00E7990 (DereferenceW32Thread.c)
 */

__int64 __fastcall FreeW32Thread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1, a2, a3, a4);
  vMarkFreeW32Thread(ThreadWin32Thread);
  v9 = W32GetThreadWin32Thread(a1, v6, v7, v8);
  return DereferenceW32Thread(v9);
}
