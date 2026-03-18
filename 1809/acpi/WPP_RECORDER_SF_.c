/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C001D030
 * Callers:
 *     ACPIStartNextGlobalLockRequest @ 0x1C000E6C4 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIEnableEnterACPIMode @ 0x1C000F940 (ACPIEnableEnterACPIMode.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0013188 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerDpc @ 0x1C001FAE0 (ACPIDevicePowerDpc.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0028878 (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0028A64 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0028B04 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIRangeValidatePciResources @ 0x1C002A7FC (ACPIRangeValidatePciResources.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C002AFA8 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIUnload @ 0x1C00511F0 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C0052F38 (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C0056C14 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0057068 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0057258 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C005B824 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005CC10 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C005D540 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C005E7E0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C005EAA0 (ACPIVectorDisconnect.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008E450 (PnpCmResourcesToBiosResources.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C008E858 (ACPIProcessorBuildBootApicIds.c)
 *     IrqArbAddAllocation @ 0x1C00901A0 (IrqArbAddAllocation.c)
 *     IcCheckIrqConflict @ 0x1C0093780 (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0093A44 (IrqArbpFindSuitableRangePci.c)
 *     ACPIInterruptInitialize @ 0x1C00950E8 (ACPIInterruptInitialize.c)
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C0095470 (ACPIPccLegacyInitialize.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0099A10 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009A0DC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     ACPIProcessHardwareInformation @ 0x1C009BB88 (ACPIProcessHardwareInformation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C009F444 (PnpiBiosAddressToIoDescriptor.c)
 *     ACPIEnumerateTables @ 0x1C009F9C4 (ACPIEnumerateTables.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AB48C (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIPccInitialize @ 0x1C00AC9D0 (ACPIPccInitialize.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00AF5C0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00AF9C0 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPIInitStartACPI @ 0x1C00B73F4 (ACPIInitStartACPI.c)
 *     ACPIGlobalInitialize @ 0x1C00B80EC (ACPIGlobalInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00B8204 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00B83AC (ACPIRegDumpAcpiTables.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00B9CA4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPILoadProcessRSDT @ 0x1C00BA420 (ACPILoadProcessRSDT.c)
 *     ACPIInitializeDDBs @ 0x1C00BA654 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessFACS @ 0x1C00BA7D4 (ACPILoadProcessFACS.c)
 *     ACPIDispatchAddDevice @ 0x1C00BA890 (ACPIDispatchAddDevice.c)
 *     ACPILoadProcessDSDT @ 0x1C00BAC18 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFADT @ 0x1C00BACDC (ACPILoadProcessFADT.c)
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, 0LL);
}
