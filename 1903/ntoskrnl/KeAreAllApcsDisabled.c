/*
 * XREFs of KeAreAllApcsDisabled @ 0x1400C17F0
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x140099F60 (PnpIsSafeToExamineUserModeTeb.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     EtwpTraceImageUnloadApc @ 0x14012B2F0 (EtwpTraceImageUnloadApc.c)
 *     sub_1401AC160 @ 0x1401AC160 (sub_1401AC160.c)
 *     EtwpEnumerateAddressSpace @ 0x1405E9F34 (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x1405EB900 (PsCallImageNotifyRoutines.c)
 *     PerfLogImageUnload @ 0x140678768 (PerfLogImageUnload.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x14098A014 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
