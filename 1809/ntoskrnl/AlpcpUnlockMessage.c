/*
 * XREFs of AlpcpUnlockMessage @ 0x140615E4C
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x140613400 (NtAlpcOpenSenderProcess.c)
 *     AlpcpProcessConnectionRequest @ 0x1406136BC (AlpcpProcessConnectionRequest.c)
 *     NtAlpcQueryInformationMessage @ 0x140614880 (NtAlpcQueryInformationMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x140614A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x14061506C (AlpcpCreateClientPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140615538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14061590C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140615EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpSendCloseMessage @ 0x140616910 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x1406194D8 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1406196F0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140619A3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140619CD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061A900 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReceiveMessagePort @ 0x140632980 (AlpcpReceiveMessagePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x140634290 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140634530 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140635340 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406356A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14069BA78 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCreateReserve @ 0x1406A3FB8 (AlpcpCreateReserve.c)
 *     NtSecureConnectPort @ 0x1406A5B20 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406A60CC (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcOpenSenderThread @ 0x1406B7480 (NtAlpcOpenSenderThread.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406BEE30 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1406C9420 (AlpcReserveDestroyProcedure.c)
 *     NtAlpcCancelMessage @ 0x1406CE090 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140849F20 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpCopyRequestData @ 0x14084A8B0 (AlpcpCopyRequestData.c)
 *     AlpcpPortQueryServerInfo @ 0x14084ACC8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x140637040 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084A598 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  return AlpcpUnlockBlob(BugCheckParameter2);
}
