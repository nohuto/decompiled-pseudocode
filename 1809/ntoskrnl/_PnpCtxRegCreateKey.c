/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1406E6484
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181D80 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x14059AA2C (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406D2E58 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpSetPropertyWorker @ 0x1406E61F0 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406E7CA0 (_CmCreateOrdinalInstanceKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406E8194 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140704B20 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D808 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083DDAC (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x1408FB234 (_CmAddPanelDeviceWorker.c)
 *     PipMigratePnpState @ 0x1409C8678 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F5A60 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F5C70 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1406D37DC (_RegRtlCreateKeyTransacted.c)
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
