/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x140284C54
 * Callers:
 *     PpmHvEnableQosEnlightenment @ 0x14077369C (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
