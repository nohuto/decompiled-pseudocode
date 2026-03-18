/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0019410 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiEnterSystemDisplay @ 0x1C001E120 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C004C550 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C004D7C0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DCB0 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E6D8 (DxgkMiracastStartMiracastSession.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0051C00 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0051DA0 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0140D00 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiValidateDeviceName @ 0x1C01411AC (DpiValidateDeviceName.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0154F5C (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0157254 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C01585A0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoStartAdapterThread @ 0x1C0161010 (DpiFdoStartAdapterThread.c)
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 *     DpiInitializeEx @ 0x1C017E684 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0181900 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0182588 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiControlEtwLogging @ 0x1C029C958 (DpiControlEtwLogging.c)
 *     DpiCleanup @ 0x1C029E194 (DpiCleanup.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C02A0970 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02A0CF0 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A1110 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02A2A90 (DpiFdoStopAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02A4AE4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02A4E2C (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5E58 (DxgkHandleMiracastEscape.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02A88CC (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02AB668 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02AC8A4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02ACEE8 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C00A2788, (__int64)KeGetCurrentThread());
}
