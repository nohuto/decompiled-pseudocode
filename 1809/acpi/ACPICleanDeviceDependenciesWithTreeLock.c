/*
 * XREFs of ACPICleanDeviceDependenciesWithTreeLock @ 0x1C00102BC
 * Callers:
 *     ACPIInitRemoveDeviceExtension @ 0x1C00101D4 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00545E8 (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0011590 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 */

__int64 __fastcall ACPICleanDeviceDependenciesWithTreeLock(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 600);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4F706341u);
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  ACPIBuildProcessDelayedDependencyExternalTrigger(a1);
  return 0LL;
}
