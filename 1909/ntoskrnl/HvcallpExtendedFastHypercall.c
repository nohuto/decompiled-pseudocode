/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1401CE3E0
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x140098A00 (MiFlushEntireTbDueToAttributeChange.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1401CE440 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlpWritePerfRegister @ 0x140286E60 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140286ED0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140286F70 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140287080 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140287100 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140287270 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140287510 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140287720 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140287840 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x140289770 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140289850 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1402898B0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140289920 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1402899F0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140289A40 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140289AB0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140289B00 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x140289F00 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140289FA0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x14028A0E0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x14028A140 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x14028A1EC (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14028A258 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x14028A2A8 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x14028A348 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x14028A3E8 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x14028C1E0 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14028D8B8 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14028D91C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTb @ 0x14028D9D0 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x14028DABC (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x140343A40 (HvcallFastExtended.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
