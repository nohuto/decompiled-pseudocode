/*
 * XREFs of DpiEnableD3Requests @ 0x1C0008B54
 * Callers:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00D0908 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00D192C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00D35C0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 *     DpiGetDxgAdapterSafe @ 0x1C0100428 (DpiGetDxgAdapterSafe.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012629C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     DpiPdoDispatchPnp @ 0x1C0148F60 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C014FB70 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0154F5C (DpiPdoHandleOpmIoctls.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C0157120 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0157254 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01577C0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiFdoHandleSystemPower @ 0x1C0158078 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C01585A0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoHandleDevicePower @ 0x1C01586C0 (DpiFdoHandleDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01591A4 (DxgkPowerOnOffMonitor.c)
 *     DxgkChangeD3RequestsState @ 0x1C015AAC0 (DxgkChangeD3RequestsState.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C015ACA0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStartAdapterThread @ 0x1C0161010 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStartDevice @ 0x1C017D850 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0181900 (DpiLdaValidateSystemChainStatus.c)
 *     DpiPdoHandleStartDevice @ 0x1C0183870 (DpiPdoHandleStartDevice.c)
 *     DpiFdoDispatchPnp @ 0x1C0183D10 (DpiFdoDispatchPnp.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C029C760 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiPollDisplayChildren @ 0x1C029D1F0 (DpiPollDisplayChildren.c)
 *     DpiPollSingleDisplayChild @ 0x1C029D378 (DpiPollSingleDisplayChild.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C029E630 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C029E7DC (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C029F4C0 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C02A0380 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C02A0970 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A1110 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02A15D0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02A1D90 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02A4AE4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5E58 (DxgkHandleMiracastEscape.c)
 *     DpiKsrStopAdapters @ 0x1C02A9AF8 (DpiKsrStopAdapters.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02A9DC0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C02AA010 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02AA1C0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C02AA370 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C02AA560 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C02AA830 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C02AA9D0 (DpiFdoThermalPassiveCooling.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02AB0D0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02AC8A4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C02AE440 (DpiLdaHandleQueryDeviceRelations.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C02AE634 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02AEDD0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoHandleStopDevice @ 0x1C02AF9B0 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C02AFBF0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiEnableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedDecrement((volatile signed __int32 *)(result + 4096));
  return result;
}
