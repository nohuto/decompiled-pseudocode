/*
 * XREFs of CleanupW32ThreadLocks @ 0x1C00F96B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall CleanupW32ThreadLocks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( !v4 )
      break;
    result = PopAndFreeW32ThreadLock(v4, a2, a3);
  }
  return result;
}
