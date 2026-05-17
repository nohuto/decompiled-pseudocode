/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EAED0
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x18009D2B0 (ZwPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return ZwPowerInformation();
}
