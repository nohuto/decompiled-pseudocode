/*
 * XREFs of MiUnlockBootPageSections @ 0x1409F14EC
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     MiLockPagableSections @ 0x1409F15C8 (MiLockPagableSections.c)
 */

_QWORD *MiUnlockBootPageSections()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  int v2; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = *((_DWORD *)i + 26);
    if ( (v2 & 0x400000) != 0 )
    {
      *((_DWORD *)i + 26) = v2 & 0xFFBFFFFF;
      MiLockPagableSections(i, 0LL);
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
