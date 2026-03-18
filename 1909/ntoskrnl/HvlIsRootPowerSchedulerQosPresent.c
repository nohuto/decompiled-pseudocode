/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1402849B4
 * Callers:
 *     PpmHvEnableQosEnlightenment @ 0x140776C7C (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
