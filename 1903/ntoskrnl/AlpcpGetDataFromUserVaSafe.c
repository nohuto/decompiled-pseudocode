/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1406CB4E8
 * Callers:
 *     AlpcpReceiveMessage @ 0x1405DF070 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0800 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1406454D8 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140645CD0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406CCF2C (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
