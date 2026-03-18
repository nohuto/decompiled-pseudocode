/*
 * XREFs of KeAreAllApcsDisabled @ 0x1400A1670
 * Callers:
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400EDFB0 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwpTraceImageUnloadApc @ 0x14012BD10 (EtwpTraceImageUnloadApc.c)
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     EtwpEnumerateAddressSpace @ 0x1405EA704 (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x1405EC0D0 (PsCallImageNotifyRoutines.c)
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 *     PerfLogImageUnload @ 0x14067E0E0 (PerfLogImageUnload.c)
 *     ViZwCheckApcRequirement @ 0x14098A014 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
