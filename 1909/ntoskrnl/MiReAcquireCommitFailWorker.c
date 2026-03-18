/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x1402BBC90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x1400F1960 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1406E90D0 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
