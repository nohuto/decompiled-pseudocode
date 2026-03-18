/*
 * XREFs of AlpcpAvailableBufferSize @ 0x1405B0AF4
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E3650 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReadMessageData @ 0x14065A00C (AlpcpReadMessageData.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14065A7F0 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14065AE5C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14065C5B4 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureMessageData @ 0x1406C6A28 (AlpcpCaptureMessageData.c)
 *     AlpcpCopyRequestData @ 0x140885590 (AlpcpCopyRequestData.c)
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
