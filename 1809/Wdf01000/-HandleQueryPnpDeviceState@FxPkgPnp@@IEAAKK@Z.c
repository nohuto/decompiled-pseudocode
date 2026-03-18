/*
 * XREFs of ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0083530
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007C210 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0086DEC (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C0014B80 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x1C0045154 (-DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ.c)
 *     ?IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ @ 0x1C0045320 (-IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ.c)
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C007C5F4 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     ?GetPnpStateInternal@FxPkgPnp@@IEAAJXZ @ 0x1C0082E44 (-GetPnpStateInternal@FxPkgPnp@@IEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryPnpDeviceState(FxPkgPnp *this, __int64 PnpDeviceState, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  __int16 PnpStateInternal; // ax
  unsigned __int8 v6; // r8
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  FxCompanionTarget *m_CompanionTarget; // rbx

  v3 = PnpDeviceState;
  PnpStateInternal = FxPkgPnp::GetPnpStateInternal(this, PnpDeviceState, a3);
  if ( (PnpStateInternal & 3) == 1 )
  {
    v3 |= 1u;
  }
  else if ( (PnpStateInternal & 3) == 0 )
  {
    v3 &= ~1u;
  }
  v7 = PnpStateInternal & 0xC;
  if ( (_DWORD)v7 == 4 )
  {
    v3 |= 2u;
  }
  else if ( (PnpStateInternal & 0xC) == 0 )
  {
    v3 &= ~2u;
  }
  if ( (PnpStateInternal & 0x30) == 0x10 )
  {
    v3 |= 4u;
  }
  else if ( (PnpStateInternal & 0x30) == 0 )
  {
    v3 &= ~4u;
  }
  if ( (PnpStateInternal & 0xC0) == 0x40 )
  {
    v3 |= 0x20u;
  }
  else if ( (PnpStateInternal & 0xC0) == 0 )
  {
    v3 &= ~0x20u;
  }
  if ( (PnpStateInternal & 0x300) == 0x100 )
  {
    v3 |= 8u;
  }
  else if ( (PnpStateInternal & 0x300) == 0 )
  {
    v3 &= ~8u;
  }
  v8 = PnpStateInternal & 0xC00;
  if ( v8 == 1024 )
  {
    v3 |= 0x10u;
  }
  else if ( !v8 )
  {
    v3 &= ~0x10u;
  }
  if ( (_DWORD)v7 == 8 )
  {
    v9 = FxPkgPnp::GetPnpCapsInternal(this, v7, v6) & 0x30000000;
    if ( v9 == 0x10000000 )
    {
      v3 |= 2u;
    }
    else if ( !v9 )
    {
      v3 &= ~2u;
    }
  }
  v10 = v3 | 0x20;
  if ( !FxPkgPnp::IsInSpecialUse(this) )
    v10 = v3;
  if ( this->m_InternalFailure || this->m_Failed )
    v10 |= 4u;
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget && (int)FxCompanionTarget::IncrementPendingTaskCountWithFloor(this->m_CompanionTarget) >= 0 )
  {
    m_CompanionTarget->m_RdDeviceCompanion->QueryPnPDeviceStateNotification(m_CompanionTarget->m_RdDeviceCompanion);
    FxCompanionTarget::DecrementPendingTaskCount(m_CompanionTarget);
  }
  return v10;
}
