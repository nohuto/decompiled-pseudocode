/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1401C73F0
 * Callers:
 *     HvlpWritePerfRegister @ 0x1401B3CAC (HvlpWritePerfRegister.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1401C7450 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1402733A0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273450 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140273580 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140273610 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273760 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402739C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140273BD0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273CF0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x140275A40 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140275B30 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x140275B90 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275C10 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140275D20 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140275D70 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140275DE0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140275E30 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1402761D0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140276270 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x1402763A0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x140276404 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1402764CC (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14027653C (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x14027658C (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140276630 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1402766D0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x140278430 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1402799F8 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x140279A5C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTb @ 0x140279B10 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x140279BE8 (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x1403226F0 (HvcallFastExtended.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
