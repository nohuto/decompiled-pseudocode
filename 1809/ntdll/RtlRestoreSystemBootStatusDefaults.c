/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EDDD0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A0EB0 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}
