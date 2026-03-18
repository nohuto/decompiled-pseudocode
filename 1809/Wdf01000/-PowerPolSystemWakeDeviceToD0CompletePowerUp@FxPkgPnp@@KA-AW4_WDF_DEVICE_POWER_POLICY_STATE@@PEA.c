/*
 * XREFs of ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0015480
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00116B0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C00155C4 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C001563C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C00156CC (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0015704 (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C001585C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceToD0CompletePowerUp(FxPkgPnp *This)
{
  KIRQL v2; // bp
  int v3; // ecx
  _FX_DRIVER_GLOBALS *v4; // rdx
  int v5; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rcx
  FxPostProcessInfo Info; // [rsp+50h] [rbp-38h] BYREF
  __int64 FxDriverGlobals; // [rsp+90h] [rbp+8h] BYREF

  FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  v2 = KeAcquireSpinLockRaiseToDpc(&This->m_PowerMachine.m_QueueLock.m_Lock);
  v3 = (This->m_PowerMachine.m_QueueDepth + This->m_PowerMachine.m_QueueHead - 1) % This->m_PowerMachine.m_QueueDepth;
  if ( v3 == This->m_PowerMachine.m_QueueTail % (unsigned int)This->m_PowerMachine.m_QueueDepth )
  {
LABEL_14:
    KeReleaseSpinLock(&This->m_PowerMachine.m_QueueLock.m_Lock, v2);
    return 1433LL;
  }
  if ( (This->m_PowerMachine.m_QueueFlags & 2) != 0 )
  {
    m_DeviceBase = This->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      This->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable),
      0x800u);
    goto LABEL_14;
  }
  This->m_PowerMachine.m_QueueHead = v3;
  This->m_PowerMachine.m_Queue.Events[(unsigned __int8)v3] = 2048;
  KeReleaseSpinLock(&This->m_PowerMachine.m_QueueLock.m_Lock, v2);
  if ( v2
    || (FxDriverGlobals = 0LL,
        v5 = FxWaitLockInternal::AcquireLock(&This->m_PowerMachine.m_StateMachineLock, v4, &FxDriverGlobals),
        v5 < 0)
    || v5 == 258 )
  {
    if ( FxEventQueue::QueueToThreadWorker(&This->m_PowerMachine) )
    {
      m_PkgPnp = This->m_PowerMachine.m_PkgPnp;
      if ( m_PkgPnp->m_HasPowerThread )
        m_PkgPnp->m_PowerThreadInterface.PowerThreadEnqueue(
          m_PkgPnp->m_PowerThreadInterface.Interface.Context,
          &This->m_PowerMachine.m_EventWorkQueueItem);
      else
        IoQueueWorkItem(
          This->m_PowerMachine.m_WorkItem.m_WorkItem,
          FxThreadedEventQueue::_WorkItemCallback,
          DelayedWorkQueue,
          &This->m_PowerMachine);
    }
  }
  else
  {
    Info.m_Event = 0LL;
    *(_WORD *)&Info.m_DeleteObject = 0;
    Info.m_FireAndForgetIrp = 0LL;
    FxPkgPnp::PowerProcessEventInner(This, &Info);
    This->m_PowerMachine.m_StateMachineLock.m_OwningThread = 0LL;
    KeSetEvent(&This->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPostProcessInfo::Evaluate(&Info, This);
  }
  return 1433LL;
}
