/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x1401B395C
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1402733A0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273450 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273760 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402739C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273CF0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1402749B0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1402750A0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x140275530 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x140275A40 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x140275B90 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275C10 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x140275E30 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140276270 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x140276404 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140818CF0 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x140271D90 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1 == 117;
  return HvlpDepositPages(0LL, a2, a3);
}
