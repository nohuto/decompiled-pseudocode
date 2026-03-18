/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x140270D44
 * Callers:
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlInvokeHypervisorDebugger()
{
  __int64 result; // rax

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = (unsigned int)HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallCodeVa();
  }
  return result;
}
