/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x140280428
 * Callers:
 *     MiAddPhysicalMemory @ 0x14084C8B4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084D56C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     IopGetPhysicalMemoryBlock @ 0x140190088 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     IopConstructInMemoryDumpHeader @ 0x140280FDC (IopConstructInMemoryDumpHeader.c)
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
