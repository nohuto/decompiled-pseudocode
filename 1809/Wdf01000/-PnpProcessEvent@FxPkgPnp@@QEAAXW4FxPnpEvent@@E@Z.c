/*
 * XREFs of ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007E428
 * Callers:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049A8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F704 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C000FE70 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?PowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0018910 (-PowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C001A6A8 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003DB3C (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007BF60 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007CD70 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0080CCC (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C0080D9C (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C0082658 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C0082D10 (-FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00846D8 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085B70 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085BB0 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085C10 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085C50 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085C80 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085DF0 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085E20 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0086EF0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0087790 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089530 (-PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089740 (-PowerPolRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRestartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00897D0 (-PowerPolRestartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00898C0 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089DB0 (-PowerPolStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089EA0 (-PowerPolStartingSucceeded@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A220 (-PowerPolStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008F2E0 (-NotPowerPolOwnerRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008F300 (-NotPowerPolOwnerStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008F340 (-NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008F390 (-NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008F3B0 (-NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C00155C4 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C001563C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C001585C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007E62C (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?QueueWorkItem@FxWorkItemEventQueue@@IEAAXXZ @ 0x1C008D944 (-QueueWorkItem@FxWorkItemEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpProcessEvent(FxPkgPnp *this, FxPnpEvent Event, unsigned __int8 a3)
{
  unsigned __int64 *p_m_Lock; // r15
  KIRQL v6; // r14
  __int64 m_QueueTail; // rcx
  int v8; // r8d
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  FxDeviceBase *v11; // rdx
  const void *v12; // rcx
  _FX_DRIVER_GLOBALS *v13; // rdx
  int v14; // eax
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  __int64 timeout; // [rsp+90h] [rbp+8h] BYREF

  p_m_Lock = &this->m_PnpMachine.m_QueueLock.m_Lock;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
  m_QueueTail = this->m_PnpMachine.m_QueueTail;
  v8 = (this->m_PnpMachine.m_QueueDepth + this->m_PnpMachine.m_QueueHead - 1) % this->m_PnpMachine.m_QueueDepth;
  if ( v8 == this->m_PnpMachine.m_QueueTail % (unsigned int)this->m_PnpMachine.m_QueueDepth )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xAu,
      WPP_PnpStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable,
      Event);
LABEL_5:
    KeReleaseSpinLock(p_m_Lock, v6);
    return;
  }
  if ( (this->m_PnpMachine.m_QueueFlags & 2) != 0 )
  {
    v11 = this->m_DeviceBase;
    v12 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      v12 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PnpStateMachine_cpp_Traceguids,
      v12,
      v11->m_DeviceObject.m_DeviceObject,
      (unsigned int)v11[1].FxNonPagedObject::FxObject::__vftable,
      Event);
    goto LABEL_5;
  }
  if ( (Event & 0x3C3000) != 0 )
  {
    this->m_PnpMachine.m_QueueHead = v8;
    this->m_PnpMachine.m_Queue[(unsigned __int8)v8] = Event;
  }
  else
  {
    this->m_PnpMachine.m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_PnpMachine.m_QueueDepth;
    this->m_PnpMachine.m_Queue[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(p_m_Lock, v6);
  if ( v6
    || (timeout = 0LL,
        v14 = FxWaitLockInternal::AcquireLock(&this->m_PnpMachine.m_StateMachineLock, v13, (_LARGE_INTEGER *)&timeout),
        v14 < 0)
    || v14 == 258 )
  {
    if ( FxEventQueue::QueueToThreadWorker(&this->m_PnpMachine) )
      FxWorkItemEventQueue::QueueWorkItem(&this->m_PnpMachine);
  }
  else
  {
    info.m_Event = 0LL;
    *(_WORD *)&info.m_DeleteObject = 0;
    info.m_FireAndForgetIrp = 0LL;
    FxPkgPnp::PnpProcessEventInner(this, &info);
    this->m_PnpMachine.m_StateMachineLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_PnpMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPostProcessInfo::Evaluate(&info, this);
  }
}
