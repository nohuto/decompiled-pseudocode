/*
 * XREFs of VerifierKeInitializeMutex @ 0x140978100
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x140979440 (ViKeInitializeMutexCommon.c)
 *     VfDeadlockInitializeResource @ 0x14097B508 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(int a1)
{
  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1);
}
