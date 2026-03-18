/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x1401B3A9C
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1402730B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273160 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273470 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402736D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273A00 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1402746C0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140274DB0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x140275240 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x140275750 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1402758A0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275920 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x140275B40 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140275F80 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x140276114 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817B10 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x140271AA0 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1 == 117;
  return HvlpDepositPages(0LL, a2, a3);
}
