/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1406CA318
 * Callers:
 *     AlpcpReceiveMessage @ 0x1405DF870 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x14065930C (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140659D10 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406CBD5C (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
