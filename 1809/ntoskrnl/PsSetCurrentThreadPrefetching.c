/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x14065FC70
 * Callers:
 *     PfpPrefetchSharedStart @ 0x14065CDD8 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x14065CF24 (PfpPrefetchSharedCleanup.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14065F6A0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14065F760 (PfSnPopulateReadList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rcx
  char Queue; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Queue = (char)CurrentThread[1].Queue;
  LOBYTE(CurrentThread[1].Queue) = Queue ^ (Queue ^ (Prefetching << 6)) & 0x40;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (Queue & 0x40) != 0;
}
