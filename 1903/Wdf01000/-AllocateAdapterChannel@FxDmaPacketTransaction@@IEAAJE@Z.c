/*
 * XREFs of ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0033FEC
 * Callers:
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0034FC0 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C002FBFC (WPP_IFR_SF_dq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0030628 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C0035410 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     WPP_IFR_SF_dqd @ 0x1C00356E4 (WPP_IFR_SF_dqd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::AllocateAdapterChannel(
        FxDmaPacketTransaction *this,
        unsigned __int8 MapRegistersReserved)
{
  KIRQL v4; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  KIRQL v6; // si
  unsigned int _a1; // eax
  const void *_a2; // rdx
  const void *v9; // rcx
  $63A2AEC1595B5653DBD75D342B27F08E *DmaDescription; // rax
  __int64 v11; // r10
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // rdx
  int v14; // eax
  int _a3; // edi
  const void *v16; // rcx

  v4 = KfRaiseIrql(2u);
  m_Globals = this->m_Globals;
  v6 = v4;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a1 = this->m_MapRegistersNeeded;
    if ( MapRegistersReserved )
    {
      v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v9 = 0LL;
      WPP_IFR_SF_dq(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionPacket_hpp_Traceguids, _a1, v9);
    }
    else
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(m_Globals, 5u, 0xFu, 0xAu, WPP_FxDmaTransactionPacket_hpp_Traceguids, _a1, _a2);
    }
  }
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    if ( MapRegistersReserved )
    {
      FxDmaPacketTransaction::_AdapterControl(*(_DEVICE_OBJECT **)(v11 + 168), 0LL, this->m_MapRegisterBase, this);
      _a3 = 0;
      goto LABEL_16;
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
LABEL_16:
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
