/*
 * XREFs of ExSystemExceptionFilter @ 0x140747FD0
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x140004514 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140004748 (ExpGetSystemBasicInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140044350 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140045BF0 (NtSetInformationWorkerFactory.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     NtShutdownWorkerFactory @ 0x140113BA0 (NtShutdownWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1401298B8 (ExpGetSystemEmulationBasicInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402B19AC (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14031E4BC (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140336BD8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x14033744C (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1403379AC (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x140337A14 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14033E9B0 (NtQueryInformationWorkerFactory.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     NtCreateEnclave @ 0x140894FB0 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
