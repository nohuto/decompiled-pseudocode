/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x14061D390
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14058A99C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x1405C1D9C (EtwpReleaseQueueEntry.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14061AA3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     AlpcMessageCleanupProcedure @ 0x140698000 (AlpcMessageCleanupProcedure.c)
 *     PspCloseActivityReference @ 0x1406D8010 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1408675CC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x140867860 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x140637C90 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
