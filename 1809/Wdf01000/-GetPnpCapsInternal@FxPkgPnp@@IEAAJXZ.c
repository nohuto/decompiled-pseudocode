/*
 * XREFs of ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C0014B80
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0014A00 (-_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0083530 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::GetPnpCapsInternal(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  unsigned int v7; // edi
  FxVerifierLock *v9; // rcx
  FxVerifierLock *v10; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v9 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
  {
    FxVerifierLock::Lock(v9, &irql, a3);
    v5 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v7 = this->m_PnpStateAndCaps.Value & 0x3FFFF000;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v10 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
    FxVerifierLock::Unlock(v10, v5, v6);
  else
    KeReleaseSpinLock(p_m_Lock, v5);
  return v7;
}
