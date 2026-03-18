/*
 * XREFs of HvlConfigureThrottleStates @ 0x140276800
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x14087B640 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140272C48 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigureThrottleStates(int a1, const void *a2)
{
  _BYTE v4[3272]; // [rsp+20h] [rbp-CC8h] BYREF

  memmove(v4, a2, 0xCB8uLL);
  return HvlpSetLogicalProcessorProperty(a1, 1, v4);
}
