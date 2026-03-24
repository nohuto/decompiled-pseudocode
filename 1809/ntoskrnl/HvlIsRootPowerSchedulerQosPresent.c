/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x140270EF4
 * Callers:
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
