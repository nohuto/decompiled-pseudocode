/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x14062C430
 * Callers:
 *     PfpPrefetchSharedStart @ 0x14062A0E8 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x14062A234 (PfpPrefetchSharedCleanup.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14062BE80 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14062BF40 (PfSnPopulateReadList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
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
