/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1406451F0
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140649BC0 (AlpcpCancelMessagesByRequestor.c)
 *     EtwpReleaseQueueEntry @ 0x140666EC8 (EtwpReleaseQueueEntry.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A0280 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     AlpcMessageCleanupProcedure @ 0x1406BB600 (AlpcMessageCleanupProcedure.c)
 *     PspCloseActivityReference @ 0x1406F8350 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1408A28AC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408A2B20 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1405E3900 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // r8d
  int v5; // edx

  v2 = a1 & 7;
  v4 = 0;
  if ( v2 != 7 )
    v4 = a1 & 7;
  v5 = 2;
  if ( v2 != 7 )
    v5 = 0;
  return PspChargeProcessWakeCounter(a1 & 0xFFFFFFFFFFFFFFF8uLL, v5, v4, a2, -1, 1, 0LL);
}
