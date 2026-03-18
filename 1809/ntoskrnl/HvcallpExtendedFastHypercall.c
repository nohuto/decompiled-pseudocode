/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1401C7270
 * Callers:
 *     HvlpWritePerfRegister @ 0x1401B3DEC (HvlpWritePerfRegister.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1401C72D0 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1402730B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273160 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140273290 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140273320 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273470 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402736D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1402738E0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273A00 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x140275750 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140275840 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1402758A0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275920 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140275A30 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140275A80 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140275AF0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140275B40 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x140275EE0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140275F80 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x1402760B0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x140276114 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1402761DC (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14027624C (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x14027629C (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140276340 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1402763E0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x140278140 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140279708 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14027976C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTb @ 0x140279820 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1402798F8 (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x140322400 (HvcallFastExtended.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
