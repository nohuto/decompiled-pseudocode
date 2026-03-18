/*
 * XREFs of ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C00380B0
 * Callers:
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0037E7C (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C0033948 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qDPq @ 0x1C003876C (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x1C0038878 (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qPPd @ 0x1C00389B4 (WPP_IFR_SF_qPPd.c)
 */

__int64 __fastcall FxDmaTransactionBase::PrepareForSingleTransfer(
        FxDmaTransactionBase *this,
        __int64 a2,
        unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 m_TransactionLength; // rcx
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int16 v7; // ax
  const void *v8; // rbx
  signed int _a2; // eax
  unsigned int v11; // r15d
  unsigned __int16 m_ObjectSize; // cx
  const void *_a1; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int globals; // [rsp+40h] [rbp-48h]

  m_Globals = this->m_Globals;
  m_TransactionLength = this->m_TransactionLength;
  m_MaxFragmentLength = this->m_MaxFragmentLength;
  if ( m_TransactionLength <= m_MaxFragmentLength )
  {
    _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, unsigned __int64, _QWORD))this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo)(
            this->m_AdapterInfo->AdapterObject,
            this->m_StartMdl,
            this->m_StartOffset,
            LODWORD(this->m_TransactionLength));
    v11 = _a2;
    if ( _a2 >= 0 )
    {
      ((__int64 (__fastcall *)(FxDmaTransactionBase *))this->GetNumberOfAvailableMapRegisters)(this);
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 0x20) != 0 )
        ((__int64 (__fastcall *)(FxDmaTransactionBase *))this->GetSgListBufferSize)(this);
    }
    else
    {
      m_ObjectSize = this->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    }
    return v11;
  }
  else
  {
    v7 = this->m_ObjectSize;
    v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 )
      v8 = 0LL;
    WPP_IFR_SF_qPPd(
      m_Globals,
      m_MaxFragmentLength,
      a3,
      0xEu,
      traceGuid,
      v8,
      m_TransactionLength,
      m_MaxFragmentLength,
      globals);
    return 3223323155LL;
  }
}
