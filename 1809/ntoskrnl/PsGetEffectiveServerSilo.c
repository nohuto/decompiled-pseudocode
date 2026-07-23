/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14008FC70
 * Callers:
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwTraceContextSwap @ 0x14017CA40 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x1402E9900 (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x1402EA2E0 (PsGetJobServerSilo.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PspGetMemoryPartitionImplicit @ 0x1406044D0 (PspGetMemoryPartitionImplicit.c)
 *     PspImplicitAssignProcessToJob @ 0x1406057A0 (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140606B68 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060EB18 (PspEstimateNewProcessServerSilo.c)
 *     ObpSetSiloDeviceMap @ 0x14072D4A8 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FCA0 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PsIsServerSilo(a1) )
    a1 = *(_QWORD *)(v2 + 1072);
  return v2;
}
