/*
 * XREFs of PopNotifySessionUserPowerRequestDeleted @ 0x1405886DC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 * Callees:
 *     TtmNotifySessionPowerRequestDeleted @ 0x14087FDE8 (TtmNotifySessionPowerRequestDeleted.c)
 */

__int64 PopNotifySessionUserPowerRequestDeleted()
{
  __int64 result; // rax

  if ( TtmpEnabled == 1 )
    return TtmNotifySessionPowerRequestDeleted();
  return result;
}
