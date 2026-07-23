/*
 * XREFs of TtmpExitProximity @ 0x1408803DC
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x14087FFE4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x140880098 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x140881480 (TtmiScheduleSessionWorker.c)
 *     TtmiLogExitProximity @ 0x14088515C (TtmiLogExitProximity.c)
 */

__int64 __fastcall TtmpExitProximity(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = a2[9];
  if ( (result & 8) != 0 )
  {
    v5 = a2[67];
    a2[9] = result & 0xFFFFFFB7 | 0x40;
    TtmiLogExitProximity(v5, a2[68]);
    a2[9] |= 4u;
    return TtmiScheduleSessionWorker(a1, 2LL);
  }
  return result;
}
