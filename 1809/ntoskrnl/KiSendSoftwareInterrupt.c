/*
 * XREFs of KiSendSoftwareInterrupt @ 0x140003AE4
 * Callers:
 *     KiRequestTimer2Expiration @ 0x140003A70 (KiRequestTimer2Expiration.c)
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E4C (KiApplyForegroundBoostThread.c)
 *     KiSignalThreadForApc @ 0x1400F1F64 (KiSignalThreadForApc.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114D84 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14011545C (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14018CA14 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296980 (KeSetSelectedCpuSetsThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298BF0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 KiSendSoftwareInterrupt()
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  return HalSendSoftwareInterrupt();
}
