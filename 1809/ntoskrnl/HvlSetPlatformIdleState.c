/*
 * XREFs of HvlSetPlatformIdleState @ 0x140276EBC
 * Callers:
 *     PpmIdleGuestComplete @ 0x1402E71B0 (PpmIdleGuestComplete.c)
 *     PpmIdleGuestPreExecute @ 0x1402E7250 (PpmIdleGuestPreExecute.c)
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x140271E3C (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1402772A4 (HvlpSetPowerProperty.c)
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
