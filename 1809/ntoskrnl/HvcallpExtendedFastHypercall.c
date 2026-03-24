/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1401C7290
 * Callers:
 *     HvlpWritePerfRegister @ 0x1401B3E0C (HvlpWritePerfRegister.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1401C72F0 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1402731B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273260 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140273390 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140273420 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273570 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402737D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1402739E0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273B00 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x140275850 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140275940 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1402759A0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275A20 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140275B30 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140275B80 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140275BF0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140275C40 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x140275FE0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140276080 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x1402761B0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x140276214 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1402762DC (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14027634C (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x14027639C (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140276440 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1402764E0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x140278240 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140279808 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14027986C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTb @ 0x140279920 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1402799F8 (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x140322500 (HvcallFastExtended.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E6A0 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
