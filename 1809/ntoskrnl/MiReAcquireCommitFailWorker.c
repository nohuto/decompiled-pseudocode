/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x1402A4AA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x1400F349C (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1406C98F4 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
