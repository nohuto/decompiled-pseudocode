/*
 * XREFs of PsGetProcessServerSilo @ 0x14004D260
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140596B0C (CmpDoesProcessBelongToServiceSession.c)
 *     ObpDecrementHandleCount @ 0x1405A9584 (ObpDecrementHandleCount.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B2694 (EtwpWriteAppStateChangeSummary.c)
 *     ObpIncrementHandleCountEx @ 0x1405E35F0 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1405E6360 (ObCloseHandleTableEntry.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140605B68 (PspValidateJobAssignmentSiloPolicy.c)
 *     DbgkFlushErrorPort @ 0x140607444 (DbgkFlushErrorPort.c)
 *     ObDereferenceDeviceMap @ 0x140608F0C (ObDereferenceDeviceMap.c)
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060DB18 (PspEstimateNewProcessServerSilo.c)
 *     EtwTraceThread @ 0x1406237EC (EtwTraceThread.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     EtwpWriteProcessEvent @ 0x14066C6E4 (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x140671560 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x140671AD0 (ObpReferenceDeviceMap.c)
 *     PspTerminateAllThreads @ 0x140676204 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1406765B0 (PspTerminateThreadByPointer.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F8C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x14067842C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140678464 (MmMapApiSetView.c)
 *     DbgkRegisterErrorPort @ 0x1407024C0 (DbgkRegisterErrorPort.c)
 *     EtwpProcessEnumCallback @ 0x140726540 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x140740414 (SepRmLsaConnectRequest.c)
 *     DbgkpSendErrorMessage @ 0x140810DEC (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x140863E50 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408B840C (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408B9120 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1408B91B0 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C2E00 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1728);
}
