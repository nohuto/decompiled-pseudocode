/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EAFC0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18009DA60 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}
