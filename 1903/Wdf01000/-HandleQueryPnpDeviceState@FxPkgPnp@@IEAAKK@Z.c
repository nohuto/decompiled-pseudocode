/*
 * XREFs of ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C00845AC
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007CBF0 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0087F1C (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x1C0044834 (-DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ.c)
 *     ?IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ @ 0x1C0044A00 (-IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ.c)
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C007CFE4 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryPnpDeviceState(FxPkgPnp *this, unsigned int PnpDeviceState)
{
  unsigned __int8 v3; // al
  unsigned int v4; // edx
  unsigned int v5; // ebx
  FxCompanionTarget *m_CompanionTarget; // rdi

  v3 = FxPkgPnp::IsInSpecialUse(this);
  v5 = v4 | 0x20;
  if ( !v3 )
    v5 = v4;
  if ( this->m_InternalFailure || this->m_Failed )
    v5 |= 4u;
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget && (int)FxCompanionTarget::IncrementPendingTaskCountWithFloor(m_CompanionTarget) >= 0 )
  {
    m_CompanionTarget->m_RdDeviceCompanion->QueryPnPDeviceStateNotification(m_CompanionTarget->m_RdDeviceCompanion);
    FxCompanionTarget::DecrementPendingTaskCount(m_CompanionTarget);
  }
  return v5;
}
