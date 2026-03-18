/*
 * XREFs of ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000F974
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000FA40 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C00838BC (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

int __fastcall FxPkgPdo::DispatchSystemSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 v5; // r8
  _IRP *m_Irp; // rbx
  KIRQL v8; // bl
  unsigned __int8 v9; // r8

  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  this->m_SystemPowerState = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart;
  PoSetPowerState(
    m_DeviceObject,
    SystemPowerState,
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State);
  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    if ( this->m_SystemPowerState == 1 )
    {
      v8 = KfRaiseIrql(2u);
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolS0, v9);
      KeLowerIrql(v8);
      return FxPkgPnp::CompletePowerRequest(this, Irp, 0);
    }
    else
    {
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      this->m_PendingSystemPowerIrp = Irp->m_Irp;
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolSx, v5);
      return 259;
    }
  }
  else
  {
    m_Irp = Irp->m_Irp;
    Irp->m_Irp->IoStatus.Status = 0;
    PoStartNextPowerIrp(Irp->m_Irp);
    IofCompleteRequest(Irp->m_Irp, 0);
    Irp->m_Irp = 0LL;
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
    return 0;
  }
}
