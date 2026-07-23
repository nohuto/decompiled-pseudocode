/*
 * XREFs of PdcPoSetPowerSettingValue @ 0x140870180
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoSetPowerSettingValue(const GUID *a1, __int64 a2, void *a3)
{
  return PopSetPowerSettingValueAcDc(a1, a2, a3);
}
