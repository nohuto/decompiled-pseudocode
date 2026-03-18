/*
 * XREFs of KiSendSoftwareInterrupt @ 0x14012C798
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiSignalThreadForApc @ 0x1400AF130 (KiSignalThreadForApc.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x1400F7E40 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRequestTimer2Expiration @ 0x14012C6D0 (KiRequestTimer2Expiration.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1401966B4 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFCD4 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSendSoftwareInterrupt(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  return HalSendSoftwareInterrupt(a1, a2);
}
