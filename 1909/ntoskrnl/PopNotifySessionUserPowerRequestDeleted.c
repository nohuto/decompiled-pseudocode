/*
 * XREFs of PopNotifySessionUserPowerRequestDeleted @ 0x1406EFA50
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 * Callees:
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408BD250 (TtmNotifySessionPowerRequestDeleted.c)
 */

__int64 PopNotifySessionUserPowerRequestDeleted()
{
  __int64 result; // rax

  if ( TtmpEnabled == 1 )
    return TtmNotifySessionPowerRequestDeleted();
  return result;
}
