/*
 * XREFs of AlpcpUnlockMessage @ 0x140616E4C
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x140614400 (NtAlpcOpenSenderProcess.c)
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 *     NtAlpcQueryInformationMessage @ 0x140615880 (NtAlpcQueryInformationMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x140615A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x14061606C (AlpcpCreateClientPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140616538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140616EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpSendCloseMessage @ 0x140617910 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x14061A4D8 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x14061A6F0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14061AA3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061B900 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReceiveMessagePort @ 0x1406339A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406352B0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140635550 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140636360 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406366C0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14069CC38 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCreateReserve @ 0x1406A5258 (AlpcpCreateReserve.c)
 *     NtSecureConnectPort @ 0x1406A6DC0 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406A736C (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcOpenSenderThread @ 0x1406B8720 (NtAlpcOpenSenderThread.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406C00D0 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1406CA6C0 (AlpcReserveDestroyProcedure.c)
 *     NtAlpcCancelMessage @ 0x1406CF330 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14084B180 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpCopyRequestData @ 0x14084BB10 (AlpcpCopyRequestData.c)
 *     AlpcpPortQueryServerInfo @ 0x14084BF28 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084B7F8 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  return AlpcpUnlockBlob(BugCheckParameter2);
}
