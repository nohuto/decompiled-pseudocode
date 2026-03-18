/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000C948
 * Callers:
 *     ACPIDevicePowerProcessPhase4 @ 0x1C000C388 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C000C45C (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerDpc @ 0x1C0016760 (ACPIDevicePowerDpc.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C001E160 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIEnableEnterACPIMode @ 0x1C0024224 (ACPIEnableEnterACPIMode.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0027D54 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0027DF4 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIRangeValidatePciResources @ 0x1C002A514 (ACPIRangeValidatePciResources.c)
 *     ACPIDispatchAddDevice @ 0x1C002CF60 (ACPIDispatchAddDevice.c)
 *     ACPIUnload @ 0x1C0052B80 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C00548E8 (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C00586F4 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058BA4 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0058DBC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C005D5D4 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005E9E0 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C005F340 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C00606B0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0060980 (ACPIVectorDisconnect.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C0090694 (ACPIProcessorBuildBootApicIds.c)
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C0090F88 (ACPIPccLegacyInitialize.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00964A4 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     IrqArbAddAllocation @ 0x1C0098B50 (IrqArbAddAllocation.c)
 *     IcCheckIrqConflict @ 0x1C009C040 (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009C72C (IrqArbpFindSuitableRangePci.c)
 *     ACPIProcessHardwareInformation @ 0x1C009CD70 (ACPIProcessHardwareInformation.c)
 *     ACPIInterruptInitialize @ 0x1C009D36C (ACPIInterruptInitialize.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A172C (PnpiBiosAddressToIoDescriptor.c)
 *     ACPIEnumerateTables @ 0x1C00A1EEC (ACPIEnumerateTables.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00A215C (PnpCmResourcesToBiosResources.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AEB4C (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIPccInitialize @ 0x1C00B00F0 (ACPIPccInitialize.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2E88 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B32E0 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPIGlobalInitialize @ 0x1C00BC094 (ACPIGlobalInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BD1D0 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00BD394 (ACPIRegDumpAcpiTables.c)
 *     ACPILoadProcessFACS @ 0x1C00BD728 (ACPILoadProcessFACS.c)
 *     ACPIInitializeDDBs @ 0x1C00BD808 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessRSDT @ 0x1C00BDC94 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessDSDT @ 0x1C00BDFB4 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFADT @ 0x1C00BE078 (ACPILoadProcessFADT.c)
 *     ACPIInitialize @ 0x1C00BE114 (ACPIInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE954 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitStartACPI @ 0x1C00BEF3C (ACPIInitStartACPI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
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
