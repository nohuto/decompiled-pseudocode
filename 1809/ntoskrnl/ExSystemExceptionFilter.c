/*
 * XREFs of ExSystemExceptionFilter @ 0x1406E2770
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     ExpGetSystemProcessorInformation @ 0x1400A5E10 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400A614C (ExpGetSystemBasicInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400F53D8 (PsWow64GetSupportedArchitectures.c)
 *     NtShutdownWorkerFactory @ 0x1400F99E0 (NtShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140106100 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140128F88 (ExpGetSystemEmulationBasicInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A6AC (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140300290 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140318178 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140318A10 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x140318F78 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x140318FE0 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14031EF60 (NtQueryInformationWorkerFactory.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     sub_1406901D0 @ 0x1406901D0 (sub_1406901D0.c)
 *     NtCreateEnclave @ 0x14085A8C0 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
