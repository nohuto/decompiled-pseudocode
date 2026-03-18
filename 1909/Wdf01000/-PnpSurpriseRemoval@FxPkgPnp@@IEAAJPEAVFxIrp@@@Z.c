/*
 * XREFs of ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C008577C
 * Callers:
 *     ?_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007CD80 (-_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpSurpriseRemoval@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0088990 (-_PnpSurpriseRemoval@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007EDD4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C008650C (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpSurpriseRemoval(FxPkgPnp *this, FxIrp *Irp)
{
  unsigned __int8 v3; // r8

  Irp->m_Irp->IoStatus.Status = 0;
  FxPkgPnp::SetPendingPnpIrp(this, Irp, 1u);
  FxPkgPnp::PnpProcessEvent(this, PnpEventSurpriseRemove, v3);
  return 259LL;
}
