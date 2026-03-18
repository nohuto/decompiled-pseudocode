/*
 * XREFs of PopTracePowerSettingChange @ 0x1406E7550
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTracePowerSetting @ 0x1406E7570 (PopDiagTracePowerSetting.c)
 */

__int64 __fastcall PopTracePowerSettingChange(LPCGUID SettingGuid, PVOID Value, __int64 ValueLength, PVOID Context)
{
  PopDiagTracePowerSetting(0LL, SettingGuid, ValueLength, Value);
  return 0LL;
}
