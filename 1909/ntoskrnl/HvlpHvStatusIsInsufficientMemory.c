/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x1401BEAA0
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x140286ED0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140286F70 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140287270 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140287510 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x140288570 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140288D10 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1402891E0 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x140289770 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1402898B0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140289920 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x140289B00 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140289FA0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x14028A140 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140850C28 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  return a1 == 11 || a1 == 117;
}
