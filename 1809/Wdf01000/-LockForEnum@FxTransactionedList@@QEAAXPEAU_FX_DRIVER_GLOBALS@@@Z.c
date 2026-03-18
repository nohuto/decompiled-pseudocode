/*
 * XREFs of ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0013B08
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010900 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0012AE0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C004AC60 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C00545E8 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C007B68C (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D6A0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C007DB80 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C008000C (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0082F5C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0083BB4 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C008B084 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C008B178 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C008DFA8 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1C008E028 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTransactionedList::LockForEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxTransactionedList_vtbl *v4; // rax
  __int64 v5; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  this->AcquireLock(this, FxDriverGlobals, &irql);
  v4 = this->__vftable;
  ++this->m_ListLockedRecursionCount;
  LOBYTE(v5) = irql;
  v4->ReleaseLock(this, FxDriverGlobals, v5);
}
