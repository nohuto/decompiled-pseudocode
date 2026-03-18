/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140658D40
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14065D830 (AlpcpCancelMessagesByRequestor.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x140671CA0 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x1406942E8 (EtwpReleaseQueueEntry.c)
 *     AlpcMessageCleanupProcedure @ 0x1406B6CB0 (AlpcMessageCleanupProcedure.c)
 *     PspCloseActivityReference @ 0x1406FA110 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1408A20EC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408A2360 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1405E40D0 (PspChargeProcessWakeCounter.c)
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
