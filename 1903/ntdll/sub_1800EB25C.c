/*
 * XREFs of sub_1800EB25C @ 0x1800EB25C
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800EADE0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800EB12C @ 0x1800EB12C (sub_1800EB12C.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009D2B0 (ZwPowerInformation.c)
 */

__int64 sub_1800EB25C()
{
  return ZwPowerInformation();
}
