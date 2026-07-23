/*
 * XREFs of HvlSetPlatformIdleState @ 0x1402771AC
 * Callers:
 *     PpmIdleGuestComplete @ 0x1402E74A0 (PpmIdleGuestComplete.c)
 *     PpmIdleGuestPreExecute @ 0x1402E7540 (PpmIdleGuestPreExecute.c)
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x14027212C (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x140277594 (HvlpSetPowerProperty.c)
 */

__int64 HvlSetPlatformIdleState()
{
  int v0; // r9d
  _DWORD v2[106]; // [rsp+20h] [rbp-1A8h] BYREF

  v2[0] = 3;
  v2[2] = HvlpGetLpIndexFromProcessorIndex(KeGetPcr()->Prcb.Number);
  v2[4] = v0;
  return HvlpSetPowerProperty(v2);
}
