/*
 * XREFs of AlpcpUnlockMessage @ 0x1405E5210
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1710 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E19B0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1405E28A0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x140653770 (NtAlpcQueryInformationMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x14065930C (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140659944 (AlpcpFormatConnectionRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x14065A520 (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14065A7F0 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14065AE5C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14065B72C (AlpcpDispatchReplyToPort.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x14065CA48 (AlpcpCreateClientPort.c)
 *     AlpcpSendCloseMessage @ 0x14065D14C (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x14065D4DC (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14065D830 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x14065DC34 (AlpcpFlushQueue.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406BFED4 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCreateReserve @ 0x1406C67D8 (AlpcpCreateReserve.c)
 *     NtSecureConnectPort @ 0x1406CB7B0 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406CBD5C (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcOpenSenderThread @ 0x1406DA870 (NtAlpcOpenSenderThread.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406E168C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1406EB7E0 (AlpcReserveDestroyProcedure.c)
 *     NtAlpcCancelMessage @ 0x1406EEF00 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140884C00 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpCopyRequestData @ 0x140885590 (AlpcpCopyRequestData.c)
 *     AlpcpPortQueryServerInfo @ 0x140885A4C (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1405E4F60 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885278 (AlpcpEnterStateChangeEventMessageLog.c)
 */

char __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  return AlpcpUnlockBlob(BugCheckParameter2);
}
