/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C00C8DD0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C00C94A0 (IsThreadDesktopComposed.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall UserIsCurrentThreadDesktopComposed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  return IsThreadDesktopComposed(v5);
}
