/*
 * XREFs of PsIsProcessInSilo @ 0x1400CB1E8
 * Callers:
 *     PsIsThreadInSilo @ 0x1400CC350 (PsIsThreadInSilo.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x140649960 (PsLookupThreadByThreadId.c)
 *     NtGetNextProcess @ 0x14071A010 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402E984C (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1406CC70C (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
