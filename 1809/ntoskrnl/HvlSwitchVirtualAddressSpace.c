/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1402796C0
 * Callers:
 *     KiAttachProcess @ 0x140016BD0 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiSwapProcess @ 0x1400173C0 (KiSwapProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D580 (MiTrimOrAgeWorkingSet.c)
 *     KiDetachProcess @ 0x1400B9CA0 (KiDetachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14015DD50 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1401C42C0 (SwapContext.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E6A0 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallCodeVa();
}
