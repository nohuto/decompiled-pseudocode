/*
 * XREFs of PsIsServerSilo @ 0x14008FD60
 * Callers:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x14008FD30 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x1402E972C (PspJobIsAppSilo.c)
 *     PspCloseSilo @ 0x140582738 (PspCloseSilo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405F9484 (IopAllocateFoExtensionsOnCreate.c)
 *     PspGetNextSilo @ 0x140600968 (PspGetNextSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140605B68 (PspValidateJobAssignmentSiloPolicy.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     PspTerminateProcessesJobCallback @ 0x14068D3F0 (PspTerminateProcessesJobCallback.c)
 *     PsIsProcessInAppSilo @ 0x1408867E0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140886A70 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140886E04 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x14088739C (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x14088A380 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
