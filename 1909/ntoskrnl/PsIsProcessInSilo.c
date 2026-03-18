/*
 * XREFs of PsIsProcessInSilo @ 0x140006528
 * Callers:
 *     PsIsThreadInSilo @ 0x140006544 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     NtGetNextProcess @ 0x140743DC0 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x1403066EC (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1406ECB38 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
