/*
 * XREFs of PsGetProcessServerSilo @ 0x14004D260
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140597B0C (CmpDoesProcessBelongToServiceSession.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B3694 (EtwpWriteAppStateChangeSummary.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140606B68 (PspValidateJobAssignmentSiloPolicy.c)
 *     DbgkFlushErrorPort @ 0x140608444 (DbgkFlushErrorPort.c)
 *     ObDereferenceDeviceMap @ 0x140609F0C (ObDereferenceDeviceMap.c)
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060EB18 (PspEstimateNewProcessServerSilo.c)
 *     EtwTraceThread @ 0x1406247EC (EtwTraceThread.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpWriteProcessEvent @ 0x14066D884 (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x140672700 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x140672C70 (ObpReferenceDeviceMap.c)
 *     PspTerminateAllThreads @ 0x1406773A4 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1406795CC (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679604 (MmMapApiSetView.c)
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 *     EtwpProcessEnumCallback @ 0x1407277C0 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x1407415E4 (SepRmLsaConnectRequest.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x140865090 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408B96AC (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408BA3C0 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1408BA450 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C40A0 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1728);
}
