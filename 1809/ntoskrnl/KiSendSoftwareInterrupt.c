/*
 * XREFs of KiSendSoftwareInterrupt @ 0x140003AE4
 * Callers:
 *     KiRequestTimer2Expiration @ 0x140003A70 (KiRequestTimer2Expiration.c)
 *     KeSetPriorityBoost @ 0x1400CEEE0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF640 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E6C (KiApplyForegroundBoostThread.c)
 *     KiSignalThreadForApc @ 0x1400F1F84 (KiSignalThreadForApc.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114DA4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14011547C (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14018CA34 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296A80 (KeSetSelectedCpuSetsThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298CF0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14029905C (KiSetHeteroPolicyThread.c)
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
