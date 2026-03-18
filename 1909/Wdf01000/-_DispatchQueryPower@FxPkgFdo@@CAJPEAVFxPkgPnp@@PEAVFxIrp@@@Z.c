/*
 * XREFs of ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0017550
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C00838BC (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C0085A74 (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0090720 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

NTSTATUS __fastcall FxPkgFdo::_DispatchQueryPower(FxPkgPnp *This, FxIrp *Irp)
{
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int v7; // r8d
  int v8; // ecx
  _IRP *v9; // rbx
  _IO_STACK_LOCATION *v10; // rcx
  NTSTATUS v11; // edi
  int Power; // eax

  m_Irp = Irp->m_Irp;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    m_Irp->IoStatus.Status = 0;
    return FxPkgFdo::_PowerPassDown(This, Irp);
  }
  else
  {
    m_Owner = This->m_PowerPolicyMachine.m_Owner;
    if ( !m_Owner )
      goto LABEL_7;
    v7 = 0;
    if ( m_Owner->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake && m_Owner->m_ChildrenArmedCount > 0 )
      v7 = 2;
    v8 = v7 | 1;
    if ( !m_Owner->m_WakeSettings.Enabled )
      v8 = v7;
    if ( v8 )
    {
      Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(
                This,
                CurrentStackLocation->Parameters.Power.State.SystemState);
      Irp->m_Irp->IoStatus.Status = Power;
      if ( Power < 0 )
        return FxPkgPnp::CompletePowerRequest(This, Irp, Power);
    }
LABEL_7:
    v9 = Irp->m_Irp;
    PoStartNextPowerIrp(Irp->m_Irp);
    v10 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
    *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v10[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v10->Parameters.SetQuota + 6);
    v10[-1].FileObject = v10->FileObject;
    v10[-1].Control = 0;
    v11 = PoCallDriver(This->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], v9, 0x20u);
    return v11;
  }
}
