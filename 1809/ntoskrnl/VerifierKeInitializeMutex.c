/*
 * XREFs of VerifierKeInitializeMutex @ 0x14093AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x14093BE10 (ViKeInitializeMutexCommon.c)
 *     VfDeadlockInitializeResource @ 0x14093D0E0 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(int a1)
{
  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1);
}
