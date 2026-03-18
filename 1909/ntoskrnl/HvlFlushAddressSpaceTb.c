/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x14028D684
 * Callers:
 *     KeFlushProcessTb @ 0x14008EF60 (KeFlushProcessTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017A8A0 (KeFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x1402AA43C (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14028D65C (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14028D8B8 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14028D91C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14028DDF8 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14028DEA8 (HvlpSlowFlushAddressSpaceTbEx.c)
 */

__int64 __fastcall HvlFlushAddressSpaceTb(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = a1;
  if ( a2 && HvlpUseExtendedProcessorSetHypercalls() )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
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
