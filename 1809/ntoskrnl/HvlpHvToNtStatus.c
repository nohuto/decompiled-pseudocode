/*
 * XREFs of HvlpHvToNtStatus @ 0x140279770
 * Callers:
 *     HvlpReadPerfRegister @ 0x1401B3BF4 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1401B3CAC (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1402733A0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273450 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140273580 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140273610 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140273680 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273760 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402739C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140273BD0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273CF0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402744D0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1402749B0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140274C54 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1402750A0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140275260 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1402759A0 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x140275A40 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140275B30 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x140275B90 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275C10 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140275D20 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140275D70 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140275DE0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140275E30 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140275EF0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1402761D0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140276270 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1402762F0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1402763A0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x140276404 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1402764CC (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x14032BD00 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14032BE28 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14032C098 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14032C200 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14032C320 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x140818C84 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140818CF0 (HvlpDynamicUpdateMicrocode.c)
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
