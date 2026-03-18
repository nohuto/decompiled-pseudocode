/*
 * XREFs of ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0015BAC
 * Callers:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C001569C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00157D0 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0015A90 (-_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007EDD4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008EE74 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008FCA0 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0085E30 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPostProcessInfo::Evaluate(FxPostProcessInfo *this, FxPkgPnp *PkgPnp)
{
  _IRP *m_FireAndForgetIrp; // rax
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)PkgPnp->m_DeviceRemoveProcessed;
LABEL_9:
    KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
    return;
  }
  m_FireAndForgetIrp = this->m_FireAndForgetIrp;
  if ( m_FireAndForgetIrp )
  {
    this->m_FireAndForgetIrp = 0LL;
    irp.m_Irp = m_FireAndForgetIrp;
    PkgPnp->FireAndForgetIrp(PkgPnp, &irp);
  }
  if ( this->m_DeleteObject )
    FxPkgPnp::ProcessDelayedDeletion(PkgPnp);
  m_DeviceRemoveProcessed = this->m_Event;
  if ( this->m_Event )
    goto LABEL_9;
}
