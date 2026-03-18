/*
 * XREFs of PopUpdateInputControllerState @ 0x1408B62CC
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PopUpdateInputControllerState(int a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4LL, &v2);
}
