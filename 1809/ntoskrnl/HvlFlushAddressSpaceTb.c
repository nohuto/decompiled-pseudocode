/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x1402797CC
 * Callers:
 *     KeFlushProcessTb @ 0x140091AD4 (KeFlushProcessTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x140293EEC (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1402797A4 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1402799F8 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x140279A5C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140279EF0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140279F90 (HvlpSlowFlushAddressSpaceTbEx.c)
 */

__int64 __fastcall HvlFlushAddressSpaceTb(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = a1;
  if ( a2 && HvlpUseExtendedProcessorSetHypercalls() )
  {
    if ( (((unsigned int)HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTbEx(v2);
    else
      return HvlpFastFlushAddressSpaceTbEx(v2);
  }
  else if ( (HvlEnlightenments & 0x80u) == 0 )
  {
    return HvlpSlowFlushAddressSpaceTb(v2);
  }
  else
  {
    return HvlpFastFlushAddressSpaceTb(v2);
  }
}
