/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0018E60 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiEnterSystemDisplay @ 0x1C001E0D0 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C004C510 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1A0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C004D780 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DC70 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0051BC0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0051D60 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C013DD00 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiValidateDeviceName @ 0x1C013DED4 (DpiValidateDeviceName.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C015109C (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0153394 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C01546E0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 *     DpiInitializeEx @ 0x1C017A894 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C017DB10 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C017E798 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiControlEtwLogging @ 0x1C029C548 (DpiControlEtwLogging.c)
 *     DpiCleanup @ 0x1C029DD84 (DpiCleanup.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C02A0560 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02A08E0 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02A46D4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02A4A1C (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5A48 (DxgkHandleMiracastEscape.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02A84BC (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02AB258 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02AC494 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02ACAD8 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C00A2788, (__int64)KeGetCurrentThread());
}
