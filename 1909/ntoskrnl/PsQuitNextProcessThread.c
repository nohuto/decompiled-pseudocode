/*
 * XREFs of PsQuitNextProcessThread @ 0x140720C30
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140847D84 (DbgkpPostFakeThreadMessages.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
