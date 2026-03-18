/*
 * XREFs of DpiEnableD3Requests @ 0x1C000F734
 * Callers:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00E3F4C (DpiGetDxgAdapterSafe.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F5BEC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C013E690 (DpiPdoDispatchInternalIoctl.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C01415A4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01416F0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoHandleSystemPower @ 0x1C0142048 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C01427A0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoHandleDevicePower @ 0x1C01428E0 (DpiFdoHandleDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01438D4 (DxgkPowerOnOffMonitor.c)
 *     DxgkChangeD3RequestsState @ 0x1C0144790 (DxgkChangeD3RequestsState.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01448B0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStartDevice @ 0x1C0151AF0 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C015D420 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoDispatchPnp @ 0x1C015E820 (DpiFdoDispatchPnp.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C02628B0 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiPollDisplayChildren @ 0x1C02632B4 (DpiPollDisplayChildren.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C0263BD0 (DpiFdoDispatchCleanupAndClose.c)
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
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C026E7C0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C026FF04 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C027196C (DpiPdoHandleOpmIoctls.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C0272C00 (DpiLdaHandleQueryDeviceRelations.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C0272E10 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02735B4 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoDispatchPnp @ 0x1C0274F20 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C0276590 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiPdoHandleStartDevice @ 0x1C0276C70 (DpiPdoHandleStartDevice.c)
 *     DpiPdoHandleStopDevice @ 0x1C0276DA0 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C0277000 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiEnableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedDecrement((volatile signed __int32 *)(result + 3992));
  return result;
}
