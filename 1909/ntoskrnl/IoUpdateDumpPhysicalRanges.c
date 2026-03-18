/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x1402954E8
 * Callers:
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     IopGetPhysicalMemoryBlock @ 0x14019A9B8 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     IopConstructInMemoryDumpHeader @ 0x1402964B4 (IopConstructInMemoryDumpHeader.c)
 */

_QWORD *IoUpdateDumpPhysicalRanges()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry && CrashdmpInitialized == 1 && ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
    IopGetPhysicalMemoryBlock();
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
