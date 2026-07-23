/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1402797A4
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140275490 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x140276E5C (HvlParkedVirtualProcessors.c)
 *     HvlFlushAddressSpaceTb @ 0x1402797CC (HvlFlushAddressSpaceTb.c)
 *     HvlFlushRangeListTb @ 0x140279838 (HvlFlushRangeListTb.c)
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
