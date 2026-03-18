/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C006A4A0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C006AB70 (IsThreadDesktopComposed.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall UserIsCurrentThreadDesktopComposed(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  return IsThreadDesktopComposed(v4);
}
