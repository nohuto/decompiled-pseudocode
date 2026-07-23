/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x18009F744
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x18001FE60 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpHeapLock @ 0x18006D704 (RtlpHpHeapLock.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpHpAcquireQueuedLockExclusive(PRTL_SRWLOCK SRWLock, __int64 a2, _QWORD *a3)
{
  *a3 = 0LL;
  a3[2] = 0LL;
  a3[1] = SRWLock;
  RtlAcquireSRWLockExclusive(SRWLock);
}
