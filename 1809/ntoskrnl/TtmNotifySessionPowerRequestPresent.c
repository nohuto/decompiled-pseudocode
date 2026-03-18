/*
 * XREFs of TtmNotifySessionPowerRequestPresent @ 0x14087FF80
 * Callers:
 *     PopNotifySessionUserPowerRequestAttributed @ 0x140866470 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x140866534 (PopNotifySessionUserPowerRequestsPresent.c)
 * Callees:
 *     TtmpInsertPowerRequestToSession @ 0x140880BB8 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408815BC (TtmpUpdatePowerRequestAttribute.c)
 *     TtmiLogSessionPowerRequestAcknowledged @ 0x1408851C0 (TtmiLogSessionPowerRequestAcknowledged.c)
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
