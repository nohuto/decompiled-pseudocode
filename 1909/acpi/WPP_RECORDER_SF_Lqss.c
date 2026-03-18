/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x1C00170E0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0007290 (ACPICMButtonStartWorker.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C00075FC (ACPIInternalSetDeviceInterface.c)
 *     ACPIInitDosDeviceName @ 0x1C000B17C (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D28C (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000DAA0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000F4D0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000F6E0 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000F7E0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F920 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000FAB0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000FC40 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000FE30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00117F0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIDetectDockDevices @ 0x1C0011CE0 (ACPIDetectDockDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0012560 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0015700 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0015C50 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C0015F30 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0016260 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C0016450 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C00268E0 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0027000 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0027800 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0027A10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00294D0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0029D20 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C002AEA8 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002B140 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessorExtension @ 0x1C002C704 (ACPIBuildProcessorExtension.c)
 *     ACPIDispatchAddDevice @ 0x1C002CF60 (ACPIDispatchAddDevice.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C002DD00 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F19C (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002F77C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002FA40 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FDA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030BF0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0030CE0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildDockExtension @ 0x1C004B10C (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004BAA0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C004BD00 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004BDD0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004C100 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CCA0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C004E7D0 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMLidWorker @ 0x1C004ECA0 (ACPICMLidWorker.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0050110 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     OSNotifyDeviceWake @ 0x1C005891C (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058BA4 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x1C0061528 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061A50 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIFanStartDevice @ 0x1C0091220 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0097C44 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C009F7F0 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPISystemPowerProcessSxD @ 0x1C00A01F4 (ACPISystemPowerProcessSxD.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C00A1240 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB1F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AD35C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C00AD730 (ACPIBusIrpQueryBusInformationEIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
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
