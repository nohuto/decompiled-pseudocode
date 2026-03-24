/*
 * XREFs of PsIsProcessInSilo @ 0x1400CB108
 * Callers:
 *     PsIsThreadInSilo @ 0x1400CC270 (PsIsThreadInSilo.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PsLookupProcessByProcessId @ 0x140646C20 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406487A0 (PsLookupThreadByThreadId.c)
 *     NtGetNextProcess @ 0x140718D70 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402E965C (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1406CB46C (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
