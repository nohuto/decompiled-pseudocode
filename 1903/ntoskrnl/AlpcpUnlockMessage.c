/*
 * XREFs of AlpcpUnlockMessage @ 0x1405E4A40
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0800 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1020 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E1230 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1405E20D0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x14063FC20 (NtAlpcQueryInformationMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1406454D8 (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1406467C0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140646A90 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1406470B4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140647304 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140647BC8 (AlpcpDispatchReplyToPort.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     AlpcpSendCloseMessage @ 0x1406494DC (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x14064986C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140649BC0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140649FC4 (AlpcpFlushQueue.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406C1074 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCreateReserve @ 0x1406C84A8 (AlpcpCreateReserve.c)
 *     NtSecureConnectPort @ 0x1406CC980 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406CCF2C (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcOpenSenderThread @ 0x1406D9F70 (NtAlpcOpenSenderThread.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406DFF58 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1406EA5F0 (AlpcReserveDestroyProcedure.c)
 *     NtAlpcCancelMessage @ 0x1406EDB90 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140885460 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpCopyRequestData @ 0x140885DF0 (AlpcpCopyRequestData.c)
 *     AlpcpPortQueryServerInfo @ 0x140886240 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885AD8 (AlpcpEnterStateChangeEventMessageLog.c)
 */

char __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  return AlpcpUnlockBlob(BugCheckParameter2);
}
