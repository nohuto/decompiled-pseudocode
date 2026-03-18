/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x1C0020560
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000CAD0 (ACPICMButtonStartWorker.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000CF7C (ACPIInternalSetDeviceInterface.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0014AC0 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014CC0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014EA0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015120 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00152A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015480 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015CA4 (ACPIBuildProcessorExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C00166A4 (ACPIInitDosDeviceName.c)
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0019890 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019BE0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0019D80 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0019F80 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001A070 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A1A0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIDetectDockDevices @ 0x1C001A3C0 (ACPIDetectDockDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001A6A0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001E480 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EB30 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F190 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F460 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F750 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001F930 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0028200 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C002A290 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C002B1F8 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002B600 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C002D1F0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002E854 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002EC0C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002EE60 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002F1B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002FF10 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C002FFF0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildDockExtension @ 0x1C0049AA4 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004A3C0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C004A600 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004A6C0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004A9D0 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004B530 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C004CF80 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMLidWorker @ 0x1C004D3E0 (ACPICMLidWorker.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C004E7F0 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     OSNotifyDeviceWake @ 0x1C0056E10 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0057068 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x1C005F618 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C005FB00 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C008ED70 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009B9E8 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C009DE10 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPISystemPowerProcessSxD @ 0x1C009E900 (ACPISystemPowerProcessSxD.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C009F0F0 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00A7D30 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00A9CDC (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C00AA070 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPIDispatchAddDevice @ 0x1C00BA890 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rsi
  __int64 v12; // rdi
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  char *v19; // r10
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-78h]

  v10 = a9;
  v12 = a8;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v19 = (char *)WPP_GLOBAL_Control + 80 * v14;
    if ( (unsigned __int8)v19[41] >= a2 )
    {
      if ( a9 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( *(_BYTE *)(a9 + v20) );
      }
      if ( a8 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *(_BYTE *)(a8 + v21) );
      }
      pfnWppTraceMessage(*((_QWORD *)v19 + 3), 43LL, a5, a4, &a6, 4LL, &a7);
    }
  }
  if ( v10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v10 + v17) );
  }
  if ( v12 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v12 + v15) );
  }
  LOWORD(v22) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v22, &a6);
}
