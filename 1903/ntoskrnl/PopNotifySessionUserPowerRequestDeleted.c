/*
 * XREFs of PopNotifySessionUserPowerRequestDeleted @ 0x14069DF50
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 * Callees:
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408BD980 (TtmNotifySessionPowerRequestDeleted.c)
 */

__int64 PopNotifySessionUserPowerRequestDeleted()
{
  __int64 result; // rax

  if ( TtmpEnabled == 1 )
    return TtmNotifySessionPowerRequestDeleted();
  return result;
}
