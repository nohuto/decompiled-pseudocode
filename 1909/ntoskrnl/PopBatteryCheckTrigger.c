/*
 * XREFs of PopBatteryCheckTrigger @ 0x14073AB38
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x1408A9F88 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x1408A9114 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_1404431E0 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
