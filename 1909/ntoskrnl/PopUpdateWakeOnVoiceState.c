/*
 * XREFs of PopUpdateWakeOnVoiceState @ 0x1408B5D30
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopUpdateWakeOnVoiceState(char a1)
{
  char v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_WAKE_ON_VOICE_STATE, (__int64)&v2, 1LL);
}
