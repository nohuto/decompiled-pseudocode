/*
 * XREFs of PdcPoSetPowerSettingValue @ 0x1408ABAD0
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoSetPowerSettingValue(const GUID *a1, __int64 a2, void *a3)
{
  return PopSetPowerSettingValueAcDc(a1, a2, a3);
}
