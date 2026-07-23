/*
 * XREFs of IopAllocateBootResources @ 0x14072F720
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x1409C19B8 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x1409C1FA0 (IopReportBootResources.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     IopAllocateBootResourcesInternal @ 0x14072F7B0 (IopAllocateBootResourcesInternal.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return BootResourcesInternal;
}
