/*
 * XREFs of CleanupW32ThreadLocks @ 0x1C011EAD0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall CleanupW32ThreadLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( !v5 )
      break;
    result = PopAndFreeW32ThreadLock(v5, a2, a3, a4);
  }
  return result;
}
