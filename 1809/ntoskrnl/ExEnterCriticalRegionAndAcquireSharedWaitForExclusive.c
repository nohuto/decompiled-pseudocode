/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14031B8C0
 * Callers:
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140930C30 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x140165E60 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
