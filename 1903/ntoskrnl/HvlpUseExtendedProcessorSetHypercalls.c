/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x14028D8FC
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1402893E0 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x14028AEC8 (HvlParkedVirtualProcessors.c)
 *     HvlFlushAddressSpaceTb @ 0x14028D924 (HvlFlushAddressSpaceTb.c)
 *     HvlFlushRangeListTb @ 0x14028D990 (HvlFlushRangeListTb.c)
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
