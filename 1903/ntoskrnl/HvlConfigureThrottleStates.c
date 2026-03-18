/*
 * XREFs of HvlConfigureThrottleStates @ 0x14028AB4C
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x1408B7BA0 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140286C4C (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigureThrottleStates(int a1, const void *a2)
{
  _BYTE v4[3272]; // [rsp+20h] [rbp-CC8h] BYREF

  memmove(v4, a2, 0xCB8uLL);
  return HvlpSetLogicalProcessorProperty(a1, 1, v4);
}
