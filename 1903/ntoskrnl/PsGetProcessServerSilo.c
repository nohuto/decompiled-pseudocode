/*
 * XREFs of PsGetProcessServerSilo @ 0x140006520
 * Callers:
 *     CmpDoesProcessBelongToServiceSession @ 0x1405BBD30 (CmpDoesProcessBelongToServiceSession.c)
 *     ObpReferenceDeviceMap @ 0x1405D0BD0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1405D0D60 (ObQueryDeviceMapInformation.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x140618978 (PspEstimateNewProcessServerSilo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140634D1C (EtwpWriteAppStateChangeSummary.c)
 *     ObpDecrementHandleCount @ 0x14063C254 (ObpDecrementHandleCount.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     ObDereferenceDeviceMap @ 0x140671E58 (ObDereferenceDeviceMap.c)
 *     PspTerminateAllThreads @ 0x140674ACC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140678480 (PspTerminateThreadByPointer.c)
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x140679EF4 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679F2C (MmMapApiSetView.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     EtwpWriteProcessEvent @ 0x140690504 (EtwpWriteProcessEvent.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140696130 (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwTraceThread @ 0x1406C4A70 (EtwTraceThread.c)
 *     DbgkFlushErrorPort @ 0x1406E404C (DbgkFlushErrorPort.c)
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 *     DbgkRegisterErrorPort @ 0x1407287E4 (DbgkRegisterErrorPort.c)
 *     SepRmLsaConnectRequest @ 0x140763B3C (SepRmLsaConnectRequest.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x1408A0934 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408F4F00 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408F5C58 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1408F5CE8 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FFFE4 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1776);
}
