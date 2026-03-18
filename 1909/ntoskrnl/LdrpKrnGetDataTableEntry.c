/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x1400DF574
 * Callers:
 *     LdrpGetImageSize @ 0x1400DF4E8 (LdrpGetImageSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DFAA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x140676720 (LdrpResGetMappingSize.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

PVOID *__fastcall LdrpKrnGetDataTableEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *v2; // rbx
  PVOID *v4; // rcx
  PVOID v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !CurrentThread )
    return 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = (PVOID *)PsLoadedModuleList;
  if ( !PsLoadedModuleList )
    return 0LL;
  while ( 1 )
  {
    v5 = v4[6];
    if ( a1 >= (unsigned __int64)v5 && a1 < (unsigned __int64)v5 + *((unsigned int *)v4 + 16) )
      break;
    v4 = (PVOID *)*v4;
    if ( v4 == &PsLoadedModuleList )
      goto LABEL_5;
  }
  v2 = v4;
LABEL_5:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
