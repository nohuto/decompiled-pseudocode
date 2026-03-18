/*
 * XREFs of ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C001531C
 * Callers:
 *     ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0014E30 (-PowerPolSleeping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0014F9C (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0015004 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C00156CC (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C0016F3C (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C008F51C (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C008F5A8 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     ?UninitializeComponents@FxPoxInterface@@QEAAXXZ @ 0x1C008F770 (-UninitializeComponents@FxPoxInterface@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C001506C (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0015134 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C001585C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::ProcessEvent(
        FxDevicePwrRequirementMachine *this,
        FxDevicePwrRequirementEvents Event)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v5; // al
  KIRQL v6; // si
  __int64 m_QueueTail; // rcx
  NTSTATUS v8; // ecx
  FxDeviceBase *m_DeviceBase; // r10
  const void *_a1; // r8
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF

  p_m_Lock = &this->m_QueueLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  v6 = v5;
  m_QueueTail = this->m_QueueTail;
  if ( (this->m_QueueDepth + this->m_QueueHead - 1) % this->m_QueueDepth == this->m_QueueTail
                                                                          % (unsigned int)this->m_QueueDepth )
  {
LABEL_11:
    KeReleaseSpinLock(p_m_Lock, v6);
    return;
  }
  if ( (this->m_QueueFlags & 2) != 0 )
  {
    m_DeviceBase = this->m_PoxInterface->m_PkgPnp->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_PkgPnp->m_Globals,
      4u,
      0xCu,
      0xAu,
      WPP_DevicePwrReqStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      this->m_CurrentState,
      Event);
    goto LABEL_11;
  }
  this->m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_QueueDepth;
  this->m_Queue[m_QueueTail] = Event;
  KeReleaseSpinLock(p_m_Lock, v5);
  if ( !v6 )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v8 = KeWaitForSingleObject(&this->m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v8 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v8 >= 0 )
      {
        info.m_Event = 0LL;
        *(_WORD *)&info.m_DeleteObject = 0;
        info.m_FireAndForgetIrp = 0LL;
        FxDevicePwrRequirementMachine::ProcessEventInner(this, &info);
        this->m_StateMachineLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_StateMachineLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        FxPostProcessInfo::Evaluate(&info, this->m_PkgPnp);
        return;
      }
    }
  }
  FxThreadedEventQueue::QueueToThread(this);
}
