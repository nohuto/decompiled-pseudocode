/*
 * XREFs of IopAllocateBootResources @ 0x140752DC0
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x1409F47C0 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x1409F4F30 (IopReportBootResources.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     IopAllocateBootResourcesInternal @ 0x140752E50 (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int BootResourcesInternal; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  BootResourcesInternal = IopAllocateBootResourcesInternal(a1, a2);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return BootResourcesInternal;
}
