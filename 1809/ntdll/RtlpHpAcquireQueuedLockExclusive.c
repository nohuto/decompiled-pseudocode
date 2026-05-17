/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x18009F724
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x18001FE60 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpHeapLock @ 0x18006D704 (RtlpHpHeapLock.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpHpAcquireQueuedLockExclusive(
        unsigned __int64 UniqueThread,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  *a3 = 0LL;
  a3[2] = 0LL;
  a3[1] = UniqueThread;
  return RtlAcquireSRWLockExclusive(UniqueThread, a2, a3, a4);
}
