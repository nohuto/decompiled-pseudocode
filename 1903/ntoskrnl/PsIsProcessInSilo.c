/*
 * XREFs of PsIsProcessInSilo @ 0x140006498
 * Callers:
 *     PsIsThreadInSilo @ 0x1400064B4 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x1405D05D0 (PsLookupProcessByProcessId.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     NtGetNextProcess @ 0x140741EC0 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x140306C3C (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1406EB878 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
