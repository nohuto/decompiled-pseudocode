/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x140270DF4
 * Callers:
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
