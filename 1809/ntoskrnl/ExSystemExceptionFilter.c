/*
 * XREFs of ExSystemExceptionFilter @ 0x1406E2790
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     ExpGetSystemProcessorInformation @ 0x1400A5DF0 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400A612C (ExpGetSystemBasicInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400F53B8 (PsWow64GetSupportedArchitectures.c)
 *     NtShutdownWorkerFactory @ 0x1400F99C0 (NtShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1401060E0 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140128F68 (ExpGetSystemEmulationBasicInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A5AC (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140300190 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140318078 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140318910 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x140318E78 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x140318EE0 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14031EE60 (NtQueryInformationWorkerFactory.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 *     NtCreateEnclave @ 0x14085A8E0 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
