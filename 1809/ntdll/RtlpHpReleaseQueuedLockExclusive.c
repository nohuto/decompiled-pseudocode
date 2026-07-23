/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x18009F7A8
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18001E414 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x18001FE60 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180021964 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpHeapUnlock @ 0x18006D7DC (RtlpHpHeapUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpReleaseQueuedLockExclusive(__int64 a1, __int64 a2)
{
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a2 + 8));
  *(_QWORD *)(a2 + 8) = 0LL;
}
