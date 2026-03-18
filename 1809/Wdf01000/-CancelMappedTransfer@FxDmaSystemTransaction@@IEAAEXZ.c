/*
 * XREFs of ?CancelMappedTransfer@FxDmaSystemTransaction@@IEAAEXZ @ 0x1C0037A98
 * Callers:
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C0037D78 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 */

bool __fastcall FxDmaSystemTransaction::CancelMappedTransfer(FxDmaSystemTransaction *this)
{
  unsigned int _a2; // eax
  signed int v3; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // dx
  const void *_a1; // rbx

  _a2 = this->m_AdapterInfo->AdapterObject->DmaOperations->CancelMappedTransfer(
          this->m_AdapterInfo->AdapterObject,
          this->m_TransferContext);
  v3 = _a2;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionSystem_hpp_Traceguids, _a1, _a2);
  }
  return v3 >= 0;
}
