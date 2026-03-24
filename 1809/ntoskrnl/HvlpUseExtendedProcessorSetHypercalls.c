/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1402795B4
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1402752A0 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x140276C6C (HvlParkedVirtualProcessors.c)
 *     HvlFlushAddressSpaceTb @ 0x1402795DC (HvlFlushAddressSpaceTb.c)
 *     HvlFlushRangeListTb @ 0x140279648 (HvlFlushRangeListTb.c)
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
