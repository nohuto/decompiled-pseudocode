/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x18007D7D0
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1800505C0 (RtlpHpHeapExtendContext.c)
 *     RtlCompleteProcessCloning @ 0x18009BF80 (RtlCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
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
