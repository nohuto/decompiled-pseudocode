/*
 * XREFs of ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C001598C
 * Callers:
 *     imp_WdfInterruptAcquireLock @ 0x1C0002960 (imp_WdfInterruptAcquireLock.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C0014EB4 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0015440 (-_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C001569C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00157D0 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005F710 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005F930 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C005FB00 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C007217C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C00732B4 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0073460 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C00740E0 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?PnpDisableInterfaces@FxPkgPnp@@IEAAXXZ @ 0x1C007D174 (-PnpDisableInterfaces@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x1C007D200 (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007EDD4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C007F830 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x1C0082BA0 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C0083CE0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0084258 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0085D94 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C008C3D0 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C008C58C (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C008CEF0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?TryToAcquireLock@FxInterrupt@@QEAAEXZ @ 0x1C008DBD0 (-TryToAcquireLock@FxInterrupt@@QEAAEXZ.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008E7CC (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008FCA0 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0090050 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWaitLockInternal::AcquireLock(
        FxWaitLockInternal *this,
        _FX_DRIVER_GLOBALS *Timeout,
        _LARGE_INTEGER *FxDriverGlobals)
{
  unsigned int v5; // ebx
  _LARGE_INTEGER li; // [rsp+48h] [rbp+10h] BYREF

  li.QuadPart = 0LL;
  if ( FxDriverGlobals )
    li = *FxDriverGlobals;
  KeEnterCriticalRegion();
  v5 = KeWaitForSingleObject(
         this,
         Executive,
         0,
         0,
         (PLARGE_INTEGER)((unsigned __int64)&li & -(__int64)(FxDriverGlobals != 0LL)));
  if ( v5 == 258 )
    KeLeaveCriticalRegion();
  else
    this->m_OwningThread = KeGetCurrentThread();
  return v5;
}
