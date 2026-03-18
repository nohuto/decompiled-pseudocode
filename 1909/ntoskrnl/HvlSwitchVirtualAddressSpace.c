/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x14028D770
 * Callers:
 *     KiAttachProcess @ 0x140043560 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiSwapProcess @ 0x1400CDFE0 (KiSwapProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14018F300 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1401CB6C0 (SwapContext.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallCodeVa();
}
