/*
 * XREFs of HvlIsCoreSharingPossible @ 0x140271088
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EF30 (KeOptimizeSpecCtrlSettings.c)
 *     VslConnectSwInterrupt @ 0x1409CD3E8 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

bool HvlIsCoreSharingPossible()
{
  unsigned __int64 CoreProcessorSet; // rcx
  bool result; // al

  result = 1;
  if ( (HvlpFlags & 0x400000) != 0 )
  {
    if ( (HvlpFlags & 2) == 0 )
      return 0;
    if ( HvlpSchedulerType != 2 )
    {
      if ( HvlpSchedulerType != 4 )
        return 0;
      CoreProcessorSet = KeGetCurrentPrcb()->CoreProcessorSet;
      if ( ((CoreProcessorSet - 1) & CoreProcessorSet) == 0 )
        return 0;
    }
  }
  return result;
}
