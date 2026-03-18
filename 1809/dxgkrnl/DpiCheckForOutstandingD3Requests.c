/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C001DE80
 * Callers:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DE00 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiEnterSystemDisplay @ 0x1C001E470 (DpiEnterSystemDisplay.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     DpiPdoDispatchPower @ 0x1C0043F30 (DpiPdoDispatchPower.c)
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 *     DxgkInvalidateDeviceState @ 0x1C0045148 (DxgkInvalidateDeviceState.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00466D0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00471B8 (DpiMiracastTearDownAssociation.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C004A7C0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C004A980 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C013E690 (DpiPdoDispatchInternalIoctl.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C01415A4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFdoHandleSystemPower @ 0x1C0142048 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C01427A0 (DpiFdoStopMiracastSession.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01438D4 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01448B0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStartDevice @ 0x1C0151AF0 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C015D420 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoDispatchPnp @ 0x1C015E820 (DpiFdoDispatchPnp.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C02628B0 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiPollDisplayChildren @ 0x1C02632B4 (DpiPollDisplayChildren.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0264AA0 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C02655B0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02658B0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02660E0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C02685B0 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C026877C (DpiEnableMsBddFallbackDriver.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02692BC (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C026A648 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C026CD70 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C026CFF0 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C026D1A0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C026D370 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C026D580 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C026D880 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C026DA40 (DpiFdoThermalPassiveCooling.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C026FF04 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C027196C (DpiPdoHandleOpmIoctls.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C0272E10 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02735B4 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoDispatchPnp @ 0x1C0274F20 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C0276590 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiPdoHandleStartDevice @ 0x1C0276C70 (DpiPdoHandleStartDevice.c)
 *     DpiPdoHandleStopDevice @ 0x1C0276DA0 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C0277000 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C0043520 (DpiRequestDevicePowerState.c)
 *     DxgkReportCoreWakeupsDripsBlocker @ 0x1C0212B68 (DxgkReportCoreWakeupsDripsBlocker.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  int v2; // ebx
  __int64 CurrentProcess; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3984), &LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL) + 3992LL));
  v2 = *(_DWORD *)(a1 + 4048);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    CurrentProcess = PsGetCurrentProcess();
    DxgkReportCoreWakeupsDripsBlocker(*(_QWORD *)(a1 + 24), CurrentProcess);
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL) + 3992LL));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 4000), Executive, 0, 0, 0LL);
}
