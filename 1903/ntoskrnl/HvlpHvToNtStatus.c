/*
 * XREFs of HvlpHvToNtStatus @ 0x14028D8C8
 * Callers:
 *     HvlpReadPerfRegister @ 0x1402863E8 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140287100 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140287170 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140287210 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140287320 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1402873A0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140287410 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140287510 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402877B0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1402879C0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140287AE0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402882A0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140288810 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140288AF0 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140288FB0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140289180 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x140289970 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x140289A10 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140289AF0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x140289B50 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140289BC0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140289C90 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140289CE0 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140289D50 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140289DA0 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140289E60 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x14028A1A0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x14028A240 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x14028A2C0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x14028A380 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x14028A3E0 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x14028A48C (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x14034D308 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14034D450 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14034D6E0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14034D86C (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14034D9C8 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x1408514B4 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140851528 (HvlpDynamicUpdateMicrocode.c)
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
