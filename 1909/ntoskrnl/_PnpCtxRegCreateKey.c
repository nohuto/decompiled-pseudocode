/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1407091F8
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x1405C1624 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406F3B48 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140705668 (_CmCreateOrdinalInstanceKey.c)
 *     _PnpSetPropertyWorker @ 0x140708F64 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x14070CC1C (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x14072D3B0 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14087833C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408788D4 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x140938970 (_CmAddPanelDeviceWorker.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140A212F4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3AE40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B050 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1406F4448 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        char *a2,
        const WCHAR *a3,
        ULONG a4,
        ACCESS_MASK a5,
        void *a6,
        HANDLE *a7,
        ULONG *a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a1 && (v8 = *(_QWORD *)(a1 + 224)) != 0 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, 0, a7, a8, v9);
}
