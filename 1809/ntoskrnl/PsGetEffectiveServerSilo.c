/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14008FD30
 * Callers:
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C20 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 *     EtwTraceContextSwap @ 0x14017C900 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x1402E9710 (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x1402EA0F0 (PsGetJobServerSilo.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspGetMemoryPartitionImplicit @ 0x1406034D0 (PspGetMemoryPartitionImplicit.c)
 *     PspImplicitAssignProcessToJob @ 0x1406047A0 (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140605B68 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060DB18 (PspEstimateNewProcessServerSilo.c)
 *     ObpSetSiloDeviceMap @ 0x14072C2B8 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FD60 (PsIsServerSilo.c)
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
