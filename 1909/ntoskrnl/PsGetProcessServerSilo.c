/*
 * XREFs of PsGetProcessServerSilo @ 0x1400065B0
 * Callers:
 *     CmpDoesProcessBelongToServiceSession @ 0x1405BC110 (CmpDoesProcessBelongToServiceSession.c)
 *     ObpReferenceDeviceMap @ 0x1405D10D0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1405D1260 (ObQueryDeviceMapInformation.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14061A488 (PspEstimateNewProcessServerSilo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140637AD4 (EtwpWriteAppStateChangeSummary.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObDereferenceDeviceMap @ 0x140652C88 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x140652D10 (DbgkFlushErrorPort.c)
 *     PspTerminateAllThreads @ 0x14067A1DC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14067DB90 (PspTerminateThreadByPointer.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067FB08 (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x14067FFA8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14067FFE0 (MmMapApiSetView.c)
 *     EtwpWriteProcessEvent @ 0x140683A74 (EtwpWriteProcessEvent.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406896A0 (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwTraceThread @ 0x1406C3C30 (EtwTraceThread.c)
 *     EtwpProcessEnumCallback @ 0x140709B90 (EtwpProcessEnumCallback.c)
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 *     SepRmLsaConnectRequest @ 0x14076854C (SepRmLsaConnectRequest.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x1408A0174 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408F4870 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408F55C8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1408F5658 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FF944 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1776);
}
