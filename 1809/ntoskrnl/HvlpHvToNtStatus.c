/*
 * XREFs of HvlpHvToNtStatus @ 0x140279480
 * Callers:
 *     HvlpReadPerfRegister @ 0x1401B3D34 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1401B3DEC (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1402730B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140273160 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140273290 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140273320 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140273390 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273470 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402736D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1402738E0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273A00 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402741E0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1402746C0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140274964 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140274DB0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140274F70 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1402756B0 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x140275750 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140275840 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1402758A0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140275920 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140275A30 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140275A80 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140275AF0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140275B40 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140275C00 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x140275EE0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140275F80 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x140276000 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1402760B0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x140276114 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1402761DC (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x14032BA10 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14032BB38 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14032BDA8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14032BF10 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14032C030 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x140817AA4 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817B10 (HvlpDynamicUpdateMicrocode.c)
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
