/*
 * XREFs of PsIsServerSilo @ 0x1400EAF10
 * Callers:
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400EAEE0 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x1403067BC (PspJobIsAppSilo.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     PspGetNextSilo @ 0x140615358 (PspGetNextSilo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14064C13C (IopAllocateFoExtensionsOnCreate.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406896A0 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspTerminateProcessesJobCallback @ 0x140689FE0 (PspTerminateProcessesJobCallback.c)
 *     PsIsProcessInAppSilo @ 0x1408C4470 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1408C4700 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1408C4AA4 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1408C4FFC (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x1408C7BB0 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
