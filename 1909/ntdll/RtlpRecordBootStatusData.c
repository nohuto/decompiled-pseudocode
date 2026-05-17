/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800EB34C
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800EAED0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EB21C (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x18009DA60 (NtPowerInformation.c)
 */

__int64 RtlpRecordBootStatusData()
{
  return NtPowerInformation();
}
