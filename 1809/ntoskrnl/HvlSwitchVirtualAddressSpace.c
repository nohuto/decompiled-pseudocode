/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1402795C0
 * Callers:
 *     KiAttachProcess @ 0x140016BD0 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiSwapProcess @ 0x1400173C0 (KiSwapProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D580 (MiTrimOrAgeWorkingSet.c)
 *     KiDetachProcess @ 0x1400B9C80 (KiDetachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14015DD30 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1401C42A0 (SwapContext.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallCodeVa();
}
