/*
 * XREFs of FreeW32Thread @ 0x1C00F9158
 * Callers:
 *     W32pThreadCallout @ 0x1C00F8FE0 (W32pThreadCallout.c)
 * Callees:
 *     DereferenceW32Thread @ 0x1C00F91E0 (DereferenceW32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall FreeW32Thread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rax

  v2 = 0LL;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  vMarkFreeW32Thread(v4);
  if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
  {
    v8 = (__int64 *)PsGetThreadWin32Thread(a1);
    if ( v8 )
      v2 = *v8;
  }
  return DereferenceW32Thread(v2);
}
