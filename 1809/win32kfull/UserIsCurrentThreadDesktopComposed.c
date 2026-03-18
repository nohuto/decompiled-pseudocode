/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C0043AC0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0043B10 (IsThreadDesktopComposed.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall UserIsCurrentThreadDesktopComposed(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  return IsThreadDesktopComposed(v3);
}
