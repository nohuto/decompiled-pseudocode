/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x14028DA10
 * Callers:
 *     KiAttachProcess @ 0x14003A440 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapProcess @ 0x1400908B0 (KiSwapProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14018E9F0 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1401CAB40 (SwapContext.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallCodeVa();
}
