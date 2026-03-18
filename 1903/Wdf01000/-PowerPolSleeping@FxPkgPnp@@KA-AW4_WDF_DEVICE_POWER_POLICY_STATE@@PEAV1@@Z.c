/*
 * XREFs of ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00151C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0015380 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C001569C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008A3B0 (-FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleeping(FxPkgPnp *This)
{
  FxPoxInterface *p_m_PoxInterface; // rdi
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int v4; // edx
  int v5; // ecx
  __int64 result; // rax
  KIRQL v7; // bp
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx

  if ( !This->m_SpecialFileCount[1] && This->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount )
  {
    m_DeviceBase = This->m_DeviceBase;
    m_Globals = This->m_Globals;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x1Du, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    FxVerifierBreakOnDeviceStateError(This->m_DeviceBase->m_Globals);
  }
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    FxPoxInterface::PowerNotRequiredCallbackWorker(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface, 0);
  p_m_PoxInterface = &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface;
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequiredLock.m_Lock);
    if ( !p_m_PoxInterface->m_DevicePowerRequired )
      FxDevicePwrRequirementMachine::ProcessEvent(
        p_m_PoxInterface->m_DevicePowerRequirementMachine,
        DprEventDeviceGoingToDx);
    KeReleaseSpinLock(&p_m_PoxInterface->m_DevicePowerRequiredLock.m_Lock, v7);
  }
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner )
    return 1319LL;
  v4 = 0;
  if ( m_Owner->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake && m_Owner->m_ChildrenArmedCount > 0 )
    v4 = 2;
  v5 = v4 | 1;
  if ( !m_Owner->m_WakeSettings.Enabled )
    v5 = v4;
  if ( !v5 )
    return 1319LL;
  result = 1322LL;
  if ( ((This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) > This->m_SystemWake )
    return 1319LL;
  return result;
}
