/*
 * XREFs of FreeW32Thread @ 0x1C0123510
 * Callers:
 *     W32pThreadCallout @ 0x1C0123880 (W32pThreadCallout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DereferenceW32Thread @ 0x1C0123550 (DereferenceW32Thread.c)
 */

__int64 __fastcall FreeW32Thread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1, a2, a3);
  vMarkFreeW32Thread(ThreadWin32Thread);
  v7 = W32GetThreadWin32Thread(a1, v5, v6);
  return DereferenceW32Thread(v7);
}
