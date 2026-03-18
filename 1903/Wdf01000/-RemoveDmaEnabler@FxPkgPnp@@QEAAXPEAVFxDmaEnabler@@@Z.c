/*
 * XREFs of ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0088FF4
 * Callers:
 *     ?RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0052580 (-RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0064810 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxPkgPnp::RemoveDmaEnabler(FxPkgPnp *this, unsigned __int64 Enabler)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v5; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v5 = (const void *)(Enabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Enabler + 10) )
      v5 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xDu, WPP_FxPkgPnpKM_cpp_Traceguids, (const void *)Enabler, v5);
    m_Globals = this->m_Globals;
  }
  FxTransactionedList::Remove(this->m_DmaEnablerList, m_Globals, (FxTransactionedEntry *)(Enabler + 120));
}
