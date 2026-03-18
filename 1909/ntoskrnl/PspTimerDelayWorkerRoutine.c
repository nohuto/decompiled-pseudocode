/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x140307F60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     PspApplyTimerDelayProcess @ 0x1403076F4 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  __int64 v2; // r8

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 768LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL, v2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 768LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
