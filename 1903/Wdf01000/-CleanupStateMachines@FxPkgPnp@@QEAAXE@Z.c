/*
 * XREFs of ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00834BC
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C005334C (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C007C7E0 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0085E30 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C00883D0 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0040A6C (--0FxCREvent@@QEAA@E@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C0086220 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x1C008A17C (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     ?SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z @ 0x1C008F03C (-SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z.c)
 */

void __fastcall FxPkgPnp::CleanupStateMachines(FxPkgPnp *this, unsigned __int8 CleanupPnp)
{
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rcx
  FxDeviceBase *v6; // rdx
  const void *v7; // rcx
  FxDeviceBase *v8; // rdx
  const void *v9; // rcx
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx
  FxDeviceBase *v11; // r10
  const void *v12; // rcx
  FxCREvent eventOnStack; // [rsp+40h] [rbp-20h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, CleanupPnp);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( CleanupPnp && !FxEventQueue::SetFinished(&this->m_PnpMachine, &eventOnStack) )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xCu,
      0x25u,
      WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerPolicyMachine, &eventOnStack) )
  {
    v6 = this->m_DeviceBase;
    v7 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6->m_ObjectSize )
      v7 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x26u, WPP_FxPkgPnp_cpp_Traceguids, v7, v6->m_DeviceObject.m_DeviceObject);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerMachine, &eventOnStack) )
  {
    v8 = this->m_DeviceBase;
    v9 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v8->m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x27u, WPP_FxPkgPnp_cpp_Traceguids, v9, v8->m_DeviceObject.m_DeviceObject);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    KeClearEvent(&eventOnStack.m_Event.m_Event);
    m_DevicePowerRequirementMachine = this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
    if ( m_DevicePowerRequirementMachine && !FxEventQueue::SetFinished(m_DevicePowerRequirementMachine, &eventOnStack) )
    {
      v11 = this->m_DeviceBase;
      v12 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v11->m_ObjectSize )
        v12 = 0LL;
      WPP_IFR_SF_qq(
        this->m_Globals,
        4u,
        0xCu,
        0x28u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v12,
        v11->m_DeviceObject.m_DeviceObject);
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    FxPowerPolicyOwnerSettings::CleanupPowerCallback(this->m_PowerPolicyMachine.m_Owner);
  }
  FxPkgPnp::ReleasePowerThread(this);
  this->ReleaseReenumerationInterface(this);
}
