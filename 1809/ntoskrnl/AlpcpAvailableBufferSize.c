/*
 * XREFs of AlpcpAvailableBufferSize @ 0x140582068
 * Callers:
 *     AlpcpReadMessageData @ 0x140614164 (AlpcpReadMessageData.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140615538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14061A884 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061A900 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1406322B0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406361D0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1406A4228 (AlpcpCaptureMessageData.c)
 *     AlpcpCopyRequestData @ 0x14084A8D0 (AlpcpCopyRequestData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpAvailableBufferSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 )
    return *(_QWORD *)(v1 + 32) - 40LL;
  else
    return 512LL;
}
