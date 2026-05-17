/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x18001D778
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180019B90 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1800140C4 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18001D6AC (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x180081018 (RtlpHpLfhSubsegmentSetOwner.c)
 */

signed __int64 __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 result; // rax
  char v5; // si
  __int64 *v6; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v5 = a4;
  v6 = (__int64 *)a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive(a2 + 16, a2, (unsigned __int64 *)a3, a4);
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *((_WORD *)v6 + 16) == *((_WORD *)v6 + 17) )
      v6[2] = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0);
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
  }
  if ( v6 )
    return RtlpHpLfhSubsegmentFree(a1, (__int64)v6, a2, v5 & 1);
  return result;
}
