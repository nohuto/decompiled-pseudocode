/*
 * XREFs of HvlRegisterLogicalProcessorFrequency @ 0x14028B1CC
 * Callers:
 *     PpmScaleIdleStateValues @ 0x140176108 (PpmScaleIdleStateValues.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x140285F68 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x14028B714 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlRegisterLogicalProcessorFrequency(__int64 a1, int a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD v8[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v8, 0, 0x198uLL);
  v4 = *(_DWORD *)(a1 + 36);
  v8[0] = 2;
  v8[2] = HvlpGetLpIndexFromProcessorIndex(v4);
  v8[4] = a2;
  return HvlpSetPowerProperty(v8, v5, v6);
}
