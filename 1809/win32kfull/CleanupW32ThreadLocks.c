/*
 * XREFs of CleanupW32ThreadLocks @ 0x1C0112EA0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall CleanupW32ThreadLocks(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( !v3 )
      break;
    result = PopAndFreeW32ThreadLock(v3, a2);
  }
  return result;
}
