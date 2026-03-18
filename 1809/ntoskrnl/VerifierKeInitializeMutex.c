/*
 * XREFs of VerifierKeInitializeMutex @ 0x140939AD0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x14093AE10 (ViKeInitializeMutexCommon.c)
 *     VfDeadlockInitializeResource @ 0x14093C0E0 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(int a1)
{
  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1);
}
