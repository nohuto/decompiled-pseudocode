/*
 * XREFs of PopRecordPowerWatchdogStage @ 0x1408A1EBC
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordPowerWatchdogStage(int a1, unsigned __int8 a2)
{
  __int64 result; // rax

  result = a2;
  PopBsdPowerWatchdogArmed = a2;
  if ( a2 )
    PopBsdLastPowerWatchdogStage = a1;
  return result;
}
