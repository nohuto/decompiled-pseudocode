/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000FA6C
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000FA40 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011100 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0033E3C (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxPkgPdo::DispatchDeviceSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int v3; // ebx
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxPowerPolicyOwnerSettings *v9; // r8
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a2; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v3 = 0;
  if ( m_Owner )
  {
    v9 = this->m_PowerPolicyMachine.m_Owner;
    if ( !*(_WORD *)&m_Owner->m_RequestedPowerUpIrp )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqq(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        WPP_PdoPower_cpp_Traceguids,
        Irp->m_Irp,
        _a2,
        m_DeviceBase->m_DeviceObject.m_DeviceObject);
      v9 = this->m_PowerPolicyMachine.m_Owner;
    }
    if ( v9->m_RequestedPowerUpIrp )
      v9->m_RequestedPowerUpIrp = 0;
    else
      v9->m_RequestedPowerDownIrp = 0;
  }
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingDevicePowerIrp = Irp->m_Irp;
  m_Irp = Irp->m_Irp;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart > 1 )
  {
    this->m_SystemPowerAction = CurrentStackLocation->Parameters.SetFile.ReplaceIfExists;
    m_Irp = Irp->m_Irp;
  }
  LOBYTE(v3) = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1;
  FxPkgPnp::PowerProcessEvent(this, (FxPowerEvent)(v3 + 1), 0);
  return 259LL;
}
