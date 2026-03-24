/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x14061C390
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14058999C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x1405C0D9C (EtwpReleaseQueueEntry.c)
 *     AlpcpCancelMessage @ 0x14061590C (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140619A3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140619CD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     AlpcMessageCleanupProcedure @ 0x140696E40 (AlpcMessageCleanupProcedure.c)
 *     PspCloseActivityReference @ 0x1406D6D70 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x14086636C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x140866600 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x140636C70 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
