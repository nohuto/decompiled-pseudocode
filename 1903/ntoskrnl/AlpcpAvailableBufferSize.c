/*
 * XREFs of AlpcpAvailableBufferSize @ 0x1405B0AF4
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E2E80 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReadMessageData @ 0x140645FCC (AlpcpReadMessageData.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140646A90 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140647304 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140648944 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureMessageData @ 0x1406C86F8 (AlpcpCaptureMessageData.c)
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
