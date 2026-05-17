/*
 * XREFs of sub_1801043F4 @ 0x1801043F4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009D2B0 (ZwPowerInformation.c)
 */

__int64 sub_1801043F4()
{
  ZwPowerInformation();
  return ZwClose();
}
