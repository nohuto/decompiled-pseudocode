/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x1401BE0F0
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x140287170 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140287210 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140287510 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402877B0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x140288810 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140288FB0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x140289480 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x140289A10 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x140289B50 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140289BC0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x140289DA0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x14028A240 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x14028A3E0 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140851528 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  return a1 == 11 || a1 == 117;
}
