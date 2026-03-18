/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x14028D924
 * Callers:
 *     KeFlushProcessTb @ 0x1400AD650 (KeFlushProcessTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017A1B0 (KeFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x1402AA6DC (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14028D8FC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14028DB58 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14028DBBC (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14028E098 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14028E148 (HvlpSlowFlushAddressSpaceTbEx.c)
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
