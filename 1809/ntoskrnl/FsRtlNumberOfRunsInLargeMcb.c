/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x14026EDC0
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x14026EE00 (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  ULONG PairCount; // ebx

  ExAcquireFastMutex(Mcb->GuardedMutex);
  PairCount = Mcb->BaseMcb.PairCount;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return PairCount;
}
