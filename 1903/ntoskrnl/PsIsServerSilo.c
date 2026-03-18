/*
 * XREFs of PsIsServerSilo @ 0x1400E5F70
 * Callers:
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400E5F40 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x140306D0C (PspJobIsAppSilo.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     PspGetNextSilo @ 0x140613848 (PspGetNextSilo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406861CC (IopAllocateFoExtensionsOnCreate.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140696130 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspTerminateProcessesJobCallback @ 0x140696A70 (PspTerminateProcessesJobCallback.c)
 *     PsIsProcessInAppSilo @ 0x1408C4BA0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1408C4E30 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1408C571C (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x1408C82D0 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
