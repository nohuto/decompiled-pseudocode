/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1406E7704
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x14059BA2C (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406D40D8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpSetPropertyWorker @ 0x1406E7470 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406E8F20 (_CmCreateOrdinalInstanceKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406E9414 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140705DA0 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083EFEC (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x1408FC4D4 (_CmAddPanelDeviceWorker.c)
 *     PipMigratePnpState @ 0x1409C9678 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F6A70 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F6C80 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1406D4A5C (_RegRtlCreateKeyTransacted.c)
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
