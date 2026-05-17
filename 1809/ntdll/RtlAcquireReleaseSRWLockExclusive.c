/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x180082080
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180063B20 (RtlpHpHeapExtendContext.c)
 *     RtlCloneUserProcess @ 0x1800D8540 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D8820 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlAcquireReleaseSRWLockExclusive(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  signed __int64 result; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  result = *a1;
  if ( (*a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)a1, a2, a3, a4);
    return RtlReleaseSRWLockExclusive(a1);
  }
  return result;
}
