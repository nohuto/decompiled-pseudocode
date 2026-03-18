/*
 * XREFs of ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470
 * Callers:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C000EE60 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000F974 (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C000FFF0 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010020 (-_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00100D0 (-_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PowerGotoDNotZero@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010680 (-PowerGotoDNotZero@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010A80 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010EF0 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?InDxIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0012FD0 (-InDxIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C001606C (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0018EC0 (-PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?PowerRequiredDx@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0018F10 (-PowerRequiredDx@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0019240 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?TimingOut@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C001A320 (-TimingOut@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D540 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedIoStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D5B0 (-PnpEventFailedIoStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D5F0 (-PnpEventFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D840 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueriedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DB40 (-PnpEventQueriedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007E230 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007E270 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007E350 (-PnpEventRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C0080BCC (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C00810FC (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0081964 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00819CC (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0081A64 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C0081A9C (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083A00 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DisablingTimerExpired@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0087860 (-DisablingTimerExpired@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0087B70 (-TimedOutIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C008CA30 (-_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_ST.c)
 *     ?_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C008CA70 (-_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEA.c)
 *     ?Waking@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C0090020 (-Waking@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C00909B0 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 *     ?DirectedPowerDownFailedUpArrived@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0091100 (-DirectedPowerDownFailedUpArrived@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementSta.c)
 *     ?DirectedPowerDownInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0091130 (-DirectedPowerDownInitiate@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PE.c)
 *     ?DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0091160 (-DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV.c)
 * Callees:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011710 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0085E30 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEvent(FxPkgPnp *this, FxPowerPolicyEvent Event, unsigned __int8 a3)
{
  KIRQL v5; // bp
  FxPowerPolicyMachine *p_m_PowerPolicyMachine; // rbx
  unsigned int m_QueueDepth; // r8d
  int v8; // ecx
  int v9; // ecx
  __int64 m_QueueTail; // r9
  int v11; // eax
  NTSTATUS v12; // ecx
  KIRQL v13; // bp
  unsigned __int8 m_QueueFlags; // al
  char v15; // si
  FxPkgPnp *v16; // rcx
  unsigned int m_SingularEventsPresent; // eax
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  FxDeviceBase *v20; // rdx
  const void *v21; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v23; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v25; // r8
  FxPostProcessInfo info; // [rsp+50h] [rbp-48h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+B8h] [rbp+20h] BYREF

  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x2002000) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0xCu,
        0x11u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        *(_DWORD *)&m_DeviceBase[1].m_Type,
        Event);
      KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
      return;
    }
    this->m_PowerPolicyMachine.m_SingularEventsPresent = Event | m_SingularEventsPresent;
  }
  p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
  m_QueueDepth = this->m_PowerPolicyMachine.m_QueueDepth;
  v8 = this->m_PowerPolicyMachine.m_QueueHead + m_QueueDepth - 1;
  if ( m_QueueDepth == 8 )
    v9 = v8 % 8;
  else
    v9 = v8 % (int)m_QueueDepth;
  m_QueueTail = this->m_PowerPolicyMachine.m_QueueTail;
  if ( v9 == this->m_PowerPolicyMachine.m_QueueTail % m_QueueDepth )
  {
LABEL_39:
    KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
    return;
  }
  if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
  {
    v20 = this->m_DeviceBase;
    v21 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v20->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0x12u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      v21,
      v20->m_DeviceObject.m_DeviceObject,
      *(_DWORD *)&v20[1].m_Type,
      Event);
    goto LABEL_39;
  }
  v11 = 977209328;
  if ( !this->m_PowerPolicyMachine.m_Owner )
    v11 = 393264;
  if ( (v11 & Event) != 0 )
  {
    p_m_PowerPolicyMachine->m_QueueHead = v9;
    this->m_PowerPolicyMachine.m_Queue[(unsigned __int8)v9] = Event;
  }
  else
  {
    this->m_PowerPolicyMachine.m_QueueTail = ((int)m_QueueTail + 1) % m_QueueDepth;
    this->m_PowerPolicyMachine.m_Queue[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
  if ( !v5 )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v12 = KeWaitForSingleObject(&this->m_PowerPolicyMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v12 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v12 >= 0 )
      {
        info.m_Event = 0LL;
        *(_WORD *)&info.m_DeleteObject = 0;
        info.m_FireAndForgetIrp = 0LL;
        FxPkgPnp::PowerPolicyProcessEventInner(this, &info);
        this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        if ( info.m_SetRemovedEvent )
        {
          KeSetEvent(&this->m_DeviceRemoveProcessed->m_Event, 0, 0);
        }
        else
        {
          if ( info.m_FireAndForgetIrp )
          {
            m_FireAndForgetIrp = info.m_FireAndForgetIrp;
            this->FireAndForgetIrp(this, (FxIrp *)&m_FireAndForgetIrp);
          }
          if ( info.m_DeleteObject )
            FxPkgPnp::ProcessDelayedDeletion(this);
          if ( info.m_Event )
            KeSetEvent(&info.m_Event->m_Event.m_Event, 0, 0);
        }
        return;
      }
    }
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
  if ( p_m_PowerPolicyMachine->m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail )
  {
    v15 = 0;
    m_PkgPnp = this->m_PowerPolicyMachine.m_PkgPnp;
    v23 = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v23->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, v25, v23->m_DeviceObject.m_DeviceObject);
  }
  else
  {
    m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      this->m_PowerPolicyMachine.m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v13);
  if ( v15 )
  {
    v16 = this->m_PowerPolicyMachine.m_PkgPnp;
    if ( v16->m_HasPowerThread )
      v16->m_PowerThreadInterface.PowerThreadEnqueue(
        v16->m_PowerThreadInterface.Interface.Context,
        &this->m_PowerPolicyMachine.m_EventWorkQueueItem);
    else
      IoQueueWorkItem(
        this->m_PowerPolicyMachine.m_WorkItem.m_WorkItem,
        FxThreadedEventQueue::_WorkItemCallback,
        DelayedWorkQueue,
        &this->m_PowerPolicyMachine);
  }
}
