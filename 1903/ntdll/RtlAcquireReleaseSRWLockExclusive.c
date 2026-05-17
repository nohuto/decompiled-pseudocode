/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x18007D130
 * Callers:
 *     sub_180050520 @ 0x180050520 (sub_180050520.c)
 *     RtlCompleteProcessCloning @ 0x18009B8E0 (RtlCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlAcquireReleaseSRWLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v3, 0);
  result = *a1;
  if ( (*a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(a1);
    return RtlReleaseSRWLockExclusive(a1);
  }
  return result;
}
