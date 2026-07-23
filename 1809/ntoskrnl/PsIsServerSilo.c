/*
 * XREFs of PsIsServerSilo @ 0x14008FCA0
 * Callers:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x14008FC70 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x1402E991C (PspJobIsAppSilo.c)
 *     PspCloseSilo @ 0x140583738 (PspCloseSilo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405FA484 (IopAllocateFoExtensionsOnCreate.c)
 *     PspGetNextSilo @ 0x140601968 (PspGetNextSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140606B68 (PspValidateJobAssignmentSiloPolicy.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     PspTerminateProcessesJobCallback @ 0x14068E5B0 (PspTerminateProcessesJobCallback.c)
 *     PsIsProcessInAppSilo @ 0x140887A40 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140887CD0 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1408885FC (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x14088B5E0 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
