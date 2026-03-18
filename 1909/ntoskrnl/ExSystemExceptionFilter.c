/*
 * XREFs of ExSystemExceptionFilter @ 0x140749ED0
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1400045A4 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400047D8 (ExpGetSystemBasicInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400443F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140045C90 (NtSetInformationWorkerFactory.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     NtShutdownWorkerFactory @ 0x140113430 (NtShutdownWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14012A2D8 (ExpGetSystemEmulationBasicInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402B170C (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14031DF0C (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140336638 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140336EAC (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x14033740C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x140337474 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14033E410 (NtQueryInformationWorkerFactory.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     NtCreateEnclave @ 0x1408947D0 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
