/*
 * XREFs of PopUpdateWakeOnVoiceState @ 0x1408B6460
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopUpdateWakeOnVoiceState(char a1)
{
  char v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_WAKE_ON_VOICE_STATE, (__int64)&v2, 1LL);
}
