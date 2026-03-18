/*
 * XREFs of ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x1C0052F70
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0082FC8 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 */

int __fastcall FxDevice::AllocateEnumInfo(FxDevice *this)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    return FxPkgPnp::AllocateEnumInfo(m_PkgPnp);
  else
    return 0;
}
