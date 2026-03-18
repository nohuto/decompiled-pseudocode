/*
 * XREFs of TtmNotifySessionPowerRequestPresent @ 0x1408BD3CC
 * Callers:
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408A21B0 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408A2274 (PopNotifySessionUserPowerRequestsPresent.c)
 * Callees:
 *     TtmpInsertPowerRequestToSession @ 0x1408BE244 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408BEBFC (TtmpUpdatePowerRequestAttribute.c)
 *     TtmiLogSessionPowerRequestAcknowledged @ 0x1408C2974 (TtmiLogSessionPowerRequestAcknowledged.c)
 */

__int64 __fastcall TtmNotifySessionPowerRequestPresent(int a1, int a2, int a3, int a4, __int64 a5, int a6, char a7)
{
  char updated; // al

  if ( a7 )
    updated = TtmpUpdatePowerRequestAttribute(a1, a2, a3, a4, a5, a6);
  else
    updated = TtmpInsertPowerRequestToSession(a1, a2, a3, a4, a5, a6);
  return TtmiLogSessionPowerRequestAcknowledged(a1, a2, a3, a4, a5, a6, a7, updated);
}
