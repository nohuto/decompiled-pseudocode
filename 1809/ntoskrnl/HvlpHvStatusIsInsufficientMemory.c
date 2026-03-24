/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x1401B3ED4
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1402731B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273260 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273570 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402737D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273B00 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1402747C0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140274EB0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x140275340 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x140275850 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1402759A0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275A20 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x140275C40 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140276080 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x140276214 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817AF0 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  return a1 == 11 || a1 == 117;
}
