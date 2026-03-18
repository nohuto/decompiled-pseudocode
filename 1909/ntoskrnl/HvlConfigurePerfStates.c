/*
 * XREFs of HvlConfigurePerfStates @ 0x14028A84C
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x1408B7470 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1402869AC (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePerfStates(int a1, const void *a2)
{
  _BYTE v5[3272]; // [rsp+20h] [rbp-CC8h] BYREF

  memset(&v5[3112], 0, 0x90uLL);
  memmove(v5, a2, 0xC28uLL);
  return HvlpSetLogicalProcessorProperty(a1, 0, v5);
}
