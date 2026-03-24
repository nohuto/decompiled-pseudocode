/*
 * XREFs of HvlSetPlatformIdleState @ 0x140276FBC
 * Callers:
 *     PpmIdleGuestComplete @ 0x1402E72B0 (PpmIdleGuestComplete.c)
 *     PpmIdleGuestPreExecute @ 0x1402E7350 (PpmIdleGuestPreExecute.c)
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x140271F3C (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1402773A4 (HvlpSetPowerProperty.c)
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
