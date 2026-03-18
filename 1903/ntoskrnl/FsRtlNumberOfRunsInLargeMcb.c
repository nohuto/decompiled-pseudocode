/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x140282680
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x1402826C0 (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  ULONG PairCount; // ebx

  ExAcquireFastMutex(Mcb->GuardedMutex);
  PairCount = Mcb->BaseMcb.PairCount;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return PairCount;
}
