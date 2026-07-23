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
 *     RtlpHpLfhSubsegmentSetOwner @ 0x180081028 (RtlpHpLfhSubsegmentSetOwner.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 *v5; // rbx

  v5 = (__int64 *)a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    RtlpHpLfhSubsegmentSetOwner(v5, a2);
    if ( *((_WORD *)v5 + 16) == *((_WORD *)v5 + 17) )
      v5[2] = 0LL;
    else
      v5 = RtlpHpLfhOwnerMoveSubsegment((__int64)a2, v5, 0);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
    RtlpHpLfhSubsegmentFree(a1, (__int64)v5, (__int64)a2, a4 & 1);
}
