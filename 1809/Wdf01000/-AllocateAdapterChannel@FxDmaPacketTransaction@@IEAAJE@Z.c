/*
 * XREFs of ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0034C0C
 * Callers:
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0035BE0 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C00307D4 (WPP_IFR_SF_dq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00311F8 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C0036030 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     WPP_IFR_SF_dqd @ 0x1C0036304 (WPP_IFR_SF_dqd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::AllocateAdapterChannel(
        FxDmaPacketTransaction *this,
        unsigned __int8 MapRegistersReserved)
{
  KIRQL v4; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  KIRQL v6; // si
  unsigned __int8 FxVerboseOn; // cl
  const void *_a2; // rdx
  const void *v9; // rcx
  bool v10; // zf
  __int64 v11; // r10
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // rax
  int v14; // eax
  int _a3; // edi
  const void *v16; // rcx

  v4 = KfRaiseIrql(2u);
  m_Globals = this->m_Globals;
  v6 = v4;
  if ( m_Globals->FxVerifierOn )
  {
    FxVerboseOn = m_Globals->FxVerboseOn;
    if ( MapRegistersReserved )
    {
      if ( FxVerboseOn )
      {
        v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v9 = 0LL;
        WPP_IFR_SF_dq(
          m_Globals,
          5u,
          0xFu,
          0xBu,
          WPP_FxDmaTransactionPacket_hpp_Traceguids,
          this->m_MapRegistersNeeded,
          v9);
      }
    }
    else if ( FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(
        m_Globals,
        5u,
        0xFu,
        0xAu,
        WPP_FxDmaTransactionPacket_hpp_Traceguids,
        this->m_MapRegistersNeeded,
        _a2);
    }
  }
  v10 = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( v10 )
  {
    if ( MapRegistersReserved )
    {
      FxDmaPacketTransaction::_AdapterControl(*(_DEVICE_OBJECT **)(v11 + 168), 0LL, this->m_MapRegisterBase, this);
      _a3 = 0;
      goto LABEL_17;
    }
    v14 = DmaOperations->AllocateAdapterChannelEx(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v11 + 168),
            this->m_TransferContext,
            this->m_MapRegistersNeeded,
            this->m_Flags,
            FxDmaPacketTransaction::_AdapterControl,
            this,
            0LL);
  }
  else
  {
    v14 = DmaOperations->AllocateAdapterChannel(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v11 + 168),
            this->m_MapRegistersNeeded,
            FxDmaPacketTransaction::_AdapterControl,
            this);
  }
  _a3 = v14;
LABEL_17:
  KeLowerIrql(v6);
  if ( _a3 < 0 )
  {
    v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_dqd(
      this->m_Globals,
      2u,
      0xFu,
      0xCu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      this->m_MapRegistersNeeded,
      v16,
      _a3);
  }
  return (unsigned int)_a3;
}
