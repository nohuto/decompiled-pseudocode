/*
 * XREFs of ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0051FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0087914 (-AddDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 */

void __fastcall FxDevice::AddDmaEnabler(FxDevice *this, FxDmaEnabler *Enabler)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    FxPkgPnp::AddDmaEnabler(m_PkgPnp, Enabler);
}
