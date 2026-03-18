/*
 * XREFs of KeAreAllApcsDisabled @ 0x1400CAA70
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400065D8 (PnpIsSafeToExamineUserModeTeb.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     NtSetInformationWorkerFactory @ 0x1401060E0 (NtSetInformationWorkerFactory.c)
 *     EtwpTraceImageUnloadApc @ 0x14012B770 (EtwpTraceImageUnloadApc.c)
 *     sub_1401A1720 @ 0x1401A1720 (sub_1401A1720.c)
 *     PsCallImageNotifyRoutines @ 0x1405F50F0 (PsCallImageNotifyRoutines.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F5E18 (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageUnload @ 0x14067752C (PerfLogImageUnload.c)
 *     MmFlushVirtualMemory @ 0x1406B6C3C (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x14094A634 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
