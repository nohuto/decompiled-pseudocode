/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1402794B4
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1402751A0 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x140276B6C (HvlParkedVirtualProcessors.c)
 *     HvlFlushAddressSpaceTb @ 0x1402794DC (HvlFlushAddressSpaceTb.c)
 *     HvlFlushRangeListTb @ 0x140279548 (HvlFlushRangeListTb.c)
 * Callees:
 *     <none>
 */

bool HvlpUseExtendedProcessorSetHypercalls()
{
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x80u) != 0 )
    return (unsigned __int16)KiActiveGroups > 1u;
  return result;
}
