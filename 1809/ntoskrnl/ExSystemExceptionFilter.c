/*
 * XREFs of ExSystemExceptionFilter @ 0x1406E3A10
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     ExpGetSystemProcessorInformation @ 0x1400A5D50 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400A608C (ExpGetSystemBasicInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400F5458 (PsWow64GetSupportedArchitectures.c)
 *     NtShutdownWorkerFactory @ 0x1400F9A60 (NtShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140106180 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140129058 (ExpGetSystemEmulationBasicInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A89C (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140300480 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140318368 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140318C00 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x140319168 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1403191D0 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14031F150 (NtQueryInformationWorkerFactory.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 *     NtCreateEnclave @ 0x14085BB20 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
