/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14033A8D0
 * Callers:
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14096F4B0 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x14016A810 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
