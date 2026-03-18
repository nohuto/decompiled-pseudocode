/*
 * XREFs of PopBatteryCheckTrigger @ 0x1407388D8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x1408AA728 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x1408A98B4 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140443260 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
