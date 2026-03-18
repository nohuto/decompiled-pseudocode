/*
 * XREFs of ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0034FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0030628 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0033FEC (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     WPP_IFR_SF_qqii @ 0x1C0035A50 (WPP_IFR_SF_qqii.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StartTransfer(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a3; // rbp
  unsigned __int8 v4; // dl
  unsigned int v5; // r8d
  __int64 v6; // rcx
  signed int v7; // esi
  FxDmaEnabler *m_DmaEnabler; // r10
  unsigned __int16 m_ObjectSize; // dx
  const void *v10; // r10
  unsigned __int64 m_MaxFragmentLength; // rax
  unsigned __int64 m_Remaining; // r8
  unsigned __int64 m_StartOffset; // r9
  unsigned __int64 v14; // rdx
  bool v15; // zf
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // rcx
  __int16 v18; // cx
  signed int AdapterChannel; // eax
  __int64 v20; // rcx

  m_Globals = this->m_Globals;
  _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a3 = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerboseOn )
    {
      WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x13u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a3);
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qqii(
          m_Globals,
          v4,
          v5,
          0x14u,
          WPP_FxDmaTransactionPacket_cpp_Traceguids,
          _a3,
          this->m_StartMdl,
          this->m_StartOffset,
          this->m_TransactionLength);
    }
  }
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v7 = 0;
  else
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 192LL), 1, 0) != 0
       ? 0xC0200204
       : 0;
  if ( v7 >= 0 )
  {
    m_MaxFragmentLength = this->m_MaxFragmentLength;
    m_Remaining = this->m_Remaining;
    m_StartOffset = this->m_StartOffset;
    v14 = m_Remaining;
    this->m_CurrentFragmentOffset = m_StartOffset;
    if ( m_Remaining >= m_MaxFragmentLength )
      v14 = m_MaxFragmentLength;
    v15 = this->m_State == FxDmaTransactionStateReserved;
    this->m_CurrentFragmentLength = v14;
    if ( v15 )
    {
      v16 = 0;
      this->m_MapRegistersNeeded = this->m_MapRegistersReserved;
    }
    else
    {
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 4) != 0 )
      {
        if ( v14 == m_Remaining )
          v18 = m_StartOffset + LOWORD(this->m_CurrentFragmentMdl->StartVa) + this->m_CurrentFragmentMdl->ByteOffset;
        else
          v18 = 4095;
        v17 = (v14 + (v18 & 0xFFF) + 4095LL) >> 12;
      }
      else
      {
        LODWORD(v17) = this->m_AdapterInfo->NumberOfMapRegisters;
      }
      this->m_MapRegistersNeeded = v17;
      v16 = this->m_MapRegistersReserved != 0;
    }
    AdapterChannel = FxDmaPacketTransaction::AllocateAdapterChannel(this, v16);
    v7 = AdapterChannel;
    if ( AdapterChannel < 0 )
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a3, AdapterChannel);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v20 + 96) + 192LL), 0);
    }
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
      WPP_IFR_SF_qL(m_Globals, 5u, 0xFu, 0x17u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a3, v7);
  }
  else
  {
    m_DmaEnabler = this->m_DmaEnabler;
    m_ObjectSize = m_DmaEnabler->m_ObjectSize;
    v10 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v10 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v10, v7);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (unsigned int)v7;
}
