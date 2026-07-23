/*
 * XREFs of HvlConfigurePerfStates @ 0x140276AB8
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x14087C880 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140272F38 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePerfStates(int a1, const void *a2)
{
  _BYTE v4[3272]; // [rsp+20h] [rbp-CC8h] BYREF

  memmove(v4, a2, 0xC28uLL);
  return HvlpSetLogicalProcessorProperty(a1, 0, v4);
}
