/*
 * XREFs of PopUpdateInputControllerState @ 0x1408B5B9C
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PopUpdateInputControllerState(int a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4LL, &v2);
}
