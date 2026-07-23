/*
 * XREFs of PopUpdateWakeOnVoiceState @ 0x1408B6460
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopUpdateWakeOnVoiceState(char a1)
{
  char Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = a1;
  return ZwUpdateWnfStateData(&WNF_PO_WAKE_ON_VOICE_STATE, &Buffer, 1u, 0LL, 0LL, 0, 0);
}
