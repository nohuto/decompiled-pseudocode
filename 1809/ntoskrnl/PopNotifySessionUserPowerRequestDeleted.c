/*
 * XREFs of PopNotifySessionUserPowerRequestDeleted @ 0x1405896DC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 * Callees:
 *     TtmNotifySessionPowerRequestDeleted @ 0x140881028 (TtmNotifySessionPowerRequestDeleted.c)
 */

__int64 PopNotifySessionUserPowerRequestDeleted()
{
  __int64 result; // rax

  if ( TtmpEnabled == 1 )
    return TtmNotifySessionPowerRequestDeleted();
  return result;
}
