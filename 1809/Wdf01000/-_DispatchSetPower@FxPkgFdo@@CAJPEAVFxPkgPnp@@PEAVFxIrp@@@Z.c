/*
 * XREFs of ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000FC10
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000FB40 (-RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000FCE0 (-DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0010B10 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

int __fastcall FxPkgFdo::_DispatchSetPower(FxPkgFdo *This, FxIrp *Irp)
{
  _IRP *_a1; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v8; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a2; // rcx

  _a1 = Irp->m_Irp;
  if ( !Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return FxPkgFdo::DispatchSystemSetPower(This, Irp);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( m_Owner->m_RequestedPowerUpIrp )
    {
      m_Owner->m_RequestedPowerUpIrp = 0;
    }
    else
    {
      if ( !m_Owner->m_RequestedPowerDownIrp )
      {
        m_DeviceBase = This->m_DeviceBase;
        _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqq(
          This->m_Globals,
          2u,
          0xCu,
          0xAu,
          WPP_fdopower_cpp_Traceguids,
          _a1,
          _a2,
          m_DeviceBase->m_DeviceObject.m_DeviceObject);
        FxVerifierBugCheckWorker(
          This->m_Globals,
          WDF_POWER_MULTIPLE_PPO,
          (unsigned __int64)This->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (unsigned __int64)Irp->m_Irp);
      }
      m_Owner->m_RequestedPowerDownIrp = 0;
    }
  }
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    return FxPkgFdo::RaiseDevicePower(This, Irp);
  CurrentStackLocation->Control |= 1u;
  This->m_PendingDevicePowerIrp = Irp->m_Irp;
  v8 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)v8->Parameters.Read.ByteOffset.LowPart > 1 )
    This->m_SystemPowerAction = v8->Parameters.SetFile.ReplaceIfExists;
  FxPkgPnp::PowerProcessEvent(This, PowerDx, 0);
  return 259;
}
