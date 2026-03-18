/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x14075AF40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopBatteryUpdateAlarms @ 0x14075AF6C (PopBatteryUpdateAlarms.c)
 */

__int64 __fastcall PopBatteryAlarmPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v4; // ebx
  unsigned int updated; // ebx

  v4 = (unsigned int)Context;
  PopAcquirePolicyLock();
  updated = PopBatteryUpdateAlarms(0LL, v4);
  PopReleasePolicyLock();
  return updated;
}
