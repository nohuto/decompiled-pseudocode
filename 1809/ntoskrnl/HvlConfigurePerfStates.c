/*
 * XREFs of HvlConfigurePerfStates @ 0x1402768C8
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x14087B620 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140272D48 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePerfStates(int a1, const void *a2)
{
  _BYTE v4[3272]; // [rsp+20h] [rbp-CC8h] BYREF

  memmove(v4, a2, 0xC28uLL);
  return HvlpSetLogicalProcessorProperty(a1, 0, v4);
}
