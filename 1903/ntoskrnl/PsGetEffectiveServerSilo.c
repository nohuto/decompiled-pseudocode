/*
 * XREFs of PsGetEffectiveServerSilo @ 0x1400E5F40
 * Callers:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwTraceContextSwap @ 0x1401470B0 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x140306CF0 (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x140307BE0 (PsGetJobServerSilo.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     PspGetMemoryPartitionImplicit @ 0x140615C88 (PspGetMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x140618978 (PspEstimateNewProcessServerSilo.c)
 *     PspImplicitAssignProcessToJob @ 0x140694880 (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140696130 (PspValidateJobAssignmentSiloPolicy.c)
 *     ObpSetSiloDeviceMap @ 0x14074F7F8 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400E5F70 (PsIsServerSilo.c)
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
