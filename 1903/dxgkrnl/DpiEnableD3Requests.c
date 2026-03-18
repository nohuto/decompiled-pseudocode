/*
 * XREFs of DpiEnableD3Requests @ 0x1C0008924
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00FB758 (DpiGetDxgAdapterSafe.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012015C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0124280 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPdoDispatchPnp @ 0x1C0145440 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C014BD60 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C015109C (DpiPdoHandleOpmIoctls.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C0153260 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0153394 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0153900 (DpiPdoDispatchInternalIoctl.c)
 *     DpiFdoHandleSystemPower @ 0x1C01541B8 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C01546E0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoHandleDevicePower @ 0x1C0154800 (DpiFdoHandleDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01552E4 (DxgkPowerOnOffMonitor.c)
 *     DxgkChangeD3RequestsState @ 0x1C0156C00 (DxgkChangeD3RequestsState.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C0156DE0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStartDevice @ 0x1C0179A60 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C017DB10 (DpiLdaValidateSystemChainStatus.c)
 *     DpiPdoHandleStartDevice @ 0x1C017FA80 (DpiPdoHandleStartDevice.c)
 *     DpiFdoDispatchPnp @ 0x1C017FF20 (DpiFdoDispatchPnp.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C029C350 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiPollDisplayChildren @ 0x1C029CDE0 (DpiPollDisplayChildren.c)
 *     DpiPollSingleDisplayChild @ 0x1C029CF68 (DpiPollSingleDisplayChild.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C029E220 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C029E3CC (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C029F0B0 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C029FF70 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C02A0560 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02A11C0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02A1980 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02A46D4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5A48 (DxgkHandleMiracastEscape.c)
 *     DpiKsrStopAdapters @ 0x1C02A96E8 (DpiKsrStopAdapters.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02A99B0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C02A9C00 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02A9DB0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C02A9F60 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C02AA150 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C02AA420 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C02AA5C0 (DpiFdoThermalPassiveCooling.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02AACC0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02AC494 (DpiAcpiHandleAcpiEvent.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C02AE030 (DpiLdaHandleQueryDeviceRelations.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C02AE224 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02AE9C0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoHandleStopDevice @ 0x1C02AF5A0 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C02AF7E0 (DpiPdoPollingWorkItem.c)
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
