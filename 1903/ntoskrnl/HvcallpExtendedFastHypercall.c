/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1401CD860
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400B8B90 (MiFlushEntireTbDueToAttributeChange.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1401CD8C0 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlpWritePerfRegister @ 0x140287100 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140287170 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140287210 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140287320 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1402873A0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140287510 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402877B0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1402879C0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140287AE0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x140289A10 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140289AF0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x140289B50 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140289BC0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140289C90 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140289CE0 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140289D50 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140289DA0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x14028A1A0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x14028A240 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x14028A380 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x14028A3E0 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x14028A48C (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14028A4F8 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x14028A548 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x14028A5E8 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x14028A688 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x14028C480 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14028DB58 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14028DBBC (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTb @ 0x14028DC70 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x14028DD5C (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x140343FE0 (HvcallFastExtended.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
