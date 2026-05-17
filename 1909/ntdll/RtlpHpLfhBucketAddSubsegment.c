/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x180050E38
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18003E150 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180050EA8 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180071F54 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x18007C45C (RtlpHpLfhSubsegmentSetOwner.c)
 */

signed __int64 __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  signed __int64 result; // rax
  __int64 v6; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0LL);
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
  }
  if ( v6 )
    return RtlpHpLfhSubsegmentFree(a1, v6, a2, a4 & 1);
  return result;
}
