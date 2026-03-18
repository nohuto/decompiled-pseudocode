/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1406D4A60
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406136BC (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140613E70 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x1406322B0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406356A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406A60EC (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
