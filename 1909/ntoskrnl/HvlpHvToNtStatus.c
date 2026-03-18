/*
 * XREFs of HvlpHvToNtStatus @ 0x14028D628
 * Callers:
 *     HvlpReadPerfRegister @ 0x140286148 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140286E60 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140286ED0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140286F70 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140287080 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140287100 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140287170 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140287270 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140287510 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140287720 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140287840 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x140288000 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140288570 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140288850 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140288D10 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140288EE0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1402896D0 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x140289770 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140289850 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1402898B0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140289920 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1402899F0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140289A40 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140289AB0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140289B00 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140289BC0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x140289F00 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140289FA0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x14028A020 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x14028A0E0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x14028A140 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x14028A1EC (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x14034CD68 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14034CEB0 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14034D140 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14034D2CC (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14034D428 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x140850BB4 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140850C28 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return a1 | 0xC0350000;
}
