/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x1402795DC
 * Callers:
 *     KeFlushProcessTb @ 0x140091B94 (KeFlushProcessTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173E00 (KeFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x140293CFC (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1402795B4 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140279808 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14027986C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140279D00 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140279DA0 (HvlpSlowFlushAddressSpaceTbEx.c)
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
