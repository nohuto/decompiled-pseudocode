/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x1402EAB80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x1402EA344 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 760LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 760LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
