/*
 * XREFs of ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00181B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C0018258 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C00849D4 (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::_DispatchQueryPower(FxPkgPnp *This, FxIrp *Irp)
{
  _IRP *m_Irp; // rdi
  __int64 v5; // r8
  unsigned int v6; // ebp
  int Power; // eax

  m_Irp = Irp->m_Irp;
  if ( !Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options
    && FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
  {
    Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(This, *(_SYSTEM_POWER_STATE *)(v5 + 24));
    m_Irp = Irp->m_Irp;
    v6 = Power;
  }
  else
  {
    v6 = 0;
  }
  m_Irp->IoStatus.Status = v6;
  PoStartNextPowerIrp(Irp->m_Irp);
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return v6;
}
