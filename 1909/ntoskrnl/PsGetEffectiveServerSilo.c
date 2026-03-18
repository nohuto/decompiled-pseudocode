/*
 * XREFs of PsGetEffectiveServerSilo @ 0x1400EAEE0
 * Callers:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     EtwTraceContextSwap @ 0x140147750 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x1403067A0 (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x140307690 (PsGetJobServerSilo.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     PspGetMemoryPartitionImplicit @ 0x140617798 (PspGetMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x14061A488 (PspEstimateNewProcessServerSilo.c)
 *     PspImplicitAssignProcessToJob @ 0x140687DF0 (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406896A0 (PspValidateJobAssignmentSiloPolicy.c)
 *     ObpSetSiloDeviceMap @ 0x140750288 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400EAF10 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PsIsServerSilo() )
    ;
  return v2;
}
