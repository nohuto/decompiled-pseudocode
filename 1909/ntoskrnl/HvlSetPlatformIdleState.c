/*
 * XREFs of HvlSetPlatformIdleState @ 0x14028B02C
 * Callers:
 *     PpmIdleGuestComplete @ 0x140303C20 (PpmIdleGuestComplete.c)
 *     PpmIdleGuestPreExecute @ 0x140303CC0 (PpmIdleGuestPreExecute.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x140285CC8 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x14028B474 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlSetPlatformIdleState(int a1)
{
  unsigned int Number; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD v6[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v6, 0, 0x198uLL);
  Number = KeGetPcr()->Prcb.Number;
  v6[0] = 3;
  v6[2] = HvlpGetLpIndexFromProcessorIndex(Number);
  v6[4] = a1;
  return HvlpSetPowerProperty(v6, v3, v4);
}
