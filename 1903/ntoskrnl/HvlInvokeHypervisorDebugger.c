/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x140284B8C
 * Callers:
 *     KeAccumulateTicks @ 0x140033360 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlInvokeHypervisorDebugger()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallCodeVa();
  }
  return result;
}
