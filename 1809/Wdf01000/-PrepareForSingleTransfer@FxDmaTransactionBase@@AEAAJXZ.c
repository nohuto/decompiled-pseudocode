/*
 * XREFs of ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C0038CD4
 * Callers:
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0038AA0 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C0034568 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qDPq @ 0x1C003938C (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x1C0039498 (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qPPd @ 0x1C00395D4 (WPP_IFR_SF_qPPd.c)
 */

__int64 __fastcall FxDmaTransactionBase::PrepareForSingleTransfer(FxDmaTransactionBase *this, unsigned __int8 a2)
{
  unsigned __int64 m_TransactionLength; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 m_MaxFragmentLength; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v7; // rbx
  signed int _a2; // eax
  unsigned int v10; // r14d
  unsigned __int16 v11; // cx
  const void *_a1; // rbx
  unsigned int v13; // r8d
  _FxDmaDescription *m_AdapterInfo; // rcx
  unsigned __int16 v15; // ax
  const void *v16; // rbx
  unsigned int _a4; // ecx
  unsigned int v18; // edi
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int m_MaxSGElements; // edx
  unsigned __int16 v21; // ax
  const void *v22; // rbx
  unsigned __int16 v23; // ax
  const void *v24; // rbx
  PVOID PoolWithTag; // rax
  FxDmaEnabler *v26; // rcx
  unsigned int v27; // r8d
  const void *v28; // rdx
  void *v29; // rsi
  unsigned __int64 *p_m_SGListSize; // r9
  unsigned __int16 v31; // ax
  const void *v32; // rcx
  unsigned __int16 v33; // ax
  const void *v34; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int globals; // [rsp+40h] [rbp-48h]
  int v37; // [rsp+48h] [rbp-40h]
  unsigned int info_4; // [rsp+54h] [rbp-34h]
  unsigned int info_8; // [rsp+58h] [rbp-30h]
  unsigned int info_12; // [rsp+5Ch] [rbp-2Ch]

  m_TransactionLength = this->m_TransactionLength;
  m_Globals = this->m_Globals;
  m_MaxFragmentLength = this->m_MaxFragmentLength;
  if ( m_TransactionLength > m_MaxFragmentLength )
  {
    m_ObjectSize = this->m_ObjectSize;
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v7 = 0LL;
    WPP_IFR_SF_qPPd(
      m_Globals,
      a2,
      m_TransactionLength,
      0xEu,
      traceGuid,
      v7,
      m_TransactionLength,
      m_MaxFragmentLength,
      globals);
    return 3223323155LL;
  }
  LOBYTE(traceGuid) = this->m_DmaDirection == WdfDmaDirectionWriteToDevice;
  _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, unsigned __int64, _QWORD))this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo)(
          this->m_AdapterInfo->AdapterObject,
          this->m_StartMdl,
          this->m_StartOffset,
          (unsigned int)m_TransactionLength);
  v10 = _a2;
  if ( _a2 < 0 )
  {
    v11 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    return v10;
  }
  if ( info_4 > this->GetNumberOfAvailableMapRegisters(this) )
  {
    m_AdapterInfo = this->m_AdapterInfo;
    v15 = this->m_ObjectSize;
    v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a4 = m_AdapterInfo->NumberOfMapRegisters;
    if ( !v15 )
      v16 = 0LL;
    v18 = -1071644140;
    WPP_IFR_SF_qLLd(m_Globals, 2u, v13, 0x10u, WPP_FxDmaTransactionBase_cpp_Traceguids, v16, info_4, _a4, -1071644140);
    return v18;
  }
  m_DmaEnabler = this->m_DmaEnabler;
  m_MaxSGElements = m_DmaEnabler->m_MaxSGElements;
  if ( info_8 > m_MaxSGElements )
  {
    v21 = this->m_ObjectSize;
    v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v21 )
      v22 = 0LL;
    v18 = -1071644150;
    WPP_IFR_SF_qLLd(
      m_Globals,
      2u,
      v13,
      0x11u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      v22,
      info_8,
      m_MaxSGElements,
      -1071644150);
    return v18;
  }
  if ( ((m_DmaEnabler->m_Profile - 1) & 0xFFFFFFFD) == 0 && info_8 > 1 )
  {
    v23 = this->m_ObjectSize;
    v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v23 )
      v24 = 0LL;
    v18 = -1071644150;
    WPP_IFR_SF_qDd(
      m_Globals,
      m_MaxSGElements,
      0xFu,
      0x12u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      v24,
      info_8,
      0xC020020A);
    return v18;
  }
  if ( (*((_BYTE *)m_DmaEnabler + 380) & 0x20) == 0 || info_12 <= this->GetSgListBufferSize(this) )
    return v10;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, info_12, m_Globals->Tag);
  v26 = this->m_DmaEnabler;
  v27 = this->m_ObjectSize;
  v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v29 = PoolWithTag;
  p_m_SGListSize = &v26->m_SGListSize;
  if ( PoolWithTag )
  {
    v33 = v26->m_ObjectSize;
    if ( !(_WORD)v27 )
      v28 = 0LL;
    v34 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v33 )
      v34 = 0LL;
    WPP_IFR_SF_qDPq(
      this->m_Globals,
      (unsigned __int8)v28,
      v27,
      (unsigned __int16)p_m_SGListSize,
      traceGuid,
      v34,
      info_12,
      *p_m_SGListSize,
      v28);
    this->SetNewSgListBuffer(this, v29, info_12);
    return v10;
  }
  v31 = v26->m_ObjectSize;
  if ( !(_WORD)v27 )
    v28 = 0LL;
  v32 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v31 )
    v32 = 0LL;
  WPP_IFR_SF_qDPqd(
    this->m_Globals,
    (unsigned __int8)v28,
    v27,
    (unsigned __int16)p_m_SGListSize,
    traceGuid,
    v32,
    info_12,
    *p_m_SGListSize,
    v28,
    v37);
  return 3221225626LL;
}
