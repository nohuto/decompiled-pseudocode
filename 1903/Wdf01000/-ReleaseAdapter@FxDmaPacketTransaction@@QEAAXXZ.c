/*
 * XREFs of ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C00343F0
 * Callers:
 *     imp_WdfDmaTransactionFreeResources @ 0x1C00314E0 (imp_WdfDmaTransactionFreeResources.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ql @ 0x1C0030CA4 (WPP_IFR_SF_ql.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C00383D4 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaPacketTransaction::ReleaseAdapter(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v2; // rbp
  const void *_a1; // rsi
  FxDmaTransactionState m_State; // eax
  int v6; // ecx

  m_Globals = this->m_Globals;
  v2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x10u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  m_State = this->m_State;
  if ( (unsigned int)m_State <= FxDmaTransactionStateDeleted )
  {
    v6 = 275;
    if ( _bittest(&v6, m_State) )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1, this->m_State);
      if ( !this->m_ObjectSize )
        v2 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v2, this->m_State);
    }
  }
  FxDmaTransactionBase::ReleaseForReuse(this, 1u);
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x12u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
}
