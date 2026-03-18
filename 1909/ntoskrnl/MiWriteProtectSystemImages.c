/*
 * XREFs of MiWriteProtectSystemImages @ 0x14074F13C
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiProtectSystemImage @ 0x14074F1C0 (MiProtectSystemImage.c)
 */

_QWORD *MiWriteProtectSystemImages()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = (__int64)i[14];
    if ( !v2 || !*(_QWORD *)(MiSectionControlArea(v2) + 144) || ((_DWORD)i[13] & 0x8000000) == 0 )
      MiProtectSystemImage(i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
