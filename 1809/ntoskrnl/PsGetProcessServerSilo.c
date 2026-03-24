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
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     EtwpWriteProcessEvent @ 0x14066C6C4 (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x140671540 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x140671AB0 (ObpReferenceDeviceMap.c)
 *     PspTerminateAllThreads @ 0x1406761E4 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140676590 (PspTerminateThreadByPointer.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F6C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x14067840C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140678444 (MmMapApiSetView.c)
 *     DbgkRegisterErrorPort @ 0x1407024A0 (DbgkRegisterErrorPort.c)
 *     EtwpProcessEnumCallback @ 0x140726520 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x1407403F4 (SepRmLsaConnectRequest.c)
 *     DbgkpSendErrorMessage @ 0x140810DCC (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x140863E30 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408B83EC (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408B9100 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1408B9190 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C2DE0 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1728);
}
