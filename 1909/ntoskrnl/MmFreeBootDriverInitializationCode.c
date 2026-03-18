/*
 * XREFs of MmFreeBootDriverInitializationCode @ 0x1407689EC
 * Callers:
 *     Phase1Initialization @ 0x140768980 (Phase1Initialization.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MiFreeDriverInitialization @ 0x140712878 (MiFreeDriverInitialization.c)
 */

_QWORD *MmFreeBootDriverInitializationCode()
{
  struct _KTHREAD *Lock; // rdi
  PVOID *i; // rbx

  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( ((_DWORD)i[13] & 0x40000000) == 0 )
      MiFreeDriverInitialization((__int64)i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  return MmReleaseLoadLock((__int64)Lock);
}
