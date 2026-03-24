/*
 * XREFs of HvlpHvToNtStatus @ 0x140279580
 * Callers:
 *     HvlpReadPerfRegister @ 0x1401B3D54 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1401B3E0C (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1402731B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273260 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140273390 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140273420 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140273490 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273570 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402737D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1402739E0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273B00 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402742E0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1402747C0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140274A64 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140274EB0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140275070 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1402757B0 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x140275850 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140275940 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1402759A0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275A20 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140275B30 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140275B80 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140275BF0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140275C40 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140275D00 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x140275FE0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140276080 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x140276100 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1402761B0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x140276214 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1402762DC (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x14032BB10 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14032BC38 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14032BEA8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14032C010 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14032C130 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x140817A84 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817AF0 (HvlpDynamicUpdateMicrocode.c)
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
