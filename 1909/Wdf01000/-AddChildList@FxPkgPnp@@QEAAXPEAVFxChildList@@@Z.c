/*
 * XREFs of ?AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C0082B1C
 * Callers:
 *     ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C0051850 (-AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0064724 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxPkgPnp::AddChildList(FxPkgPnp *this, unsigned __int64 List)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v5; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v5 = (const void *)(List ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(List + 10) )
      v5 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x4Du, WPP_FxPkgPnp_cpp_Traceguids, (const void *)List, v5);
    m_Globals = this->m_Globals;
  }
  FxTransactionedList::Add(&this->m_EnumInfo->m_ChildListList, m_Globals, (FxTransactionedEntry *)(List + 120));
}
