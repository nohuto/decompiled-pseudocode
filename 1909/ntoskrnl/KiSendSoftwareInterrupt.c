/*
 * XREFs of KiSendSoftwareInterrupt @ 0x14012D268
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiSignalThreadForApc @ 0x1400E5680 (KiSignalThreadForApc.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F1E0 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRequestTimer2Expiration @ 0x14012D1A0 (KiRequestTimer2Expiration.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x140196E94 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402ACFE0 (KeSetSelectedCpuSetsThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFA34 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
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
