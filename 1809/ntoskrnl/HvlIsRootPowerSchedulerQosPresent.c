/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1402710E4
 * Callers:
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
