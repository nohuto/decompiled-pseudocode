/*
 * XREFs of ?CallEvtDmaCompleted@FxDmaSystemTransaction@@MEAAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C0036E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDmaSystemTransaction::CallEvtDmaCompleted(FxDmaSystemTransaction *this, DMA_COMPLETION_STATUS Status)
{
  FxDeviceBase *m_DeviceBase; // rdx
  void (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, DMA_COMPLETION_STATUS); // rax
  unsigned __int16 m_ObjectSize; // r10
  unsigned __int16 v7; // cx
  unsigned __int64 v8; // rdx
  __int64 m_DmaDirection; // r9
  bool v10; // zf
  FxDmaSystemTransaction *v11; // rcx
  void *m_TransferCompleteContext; // r8
  unsigned __int64 v13; // rcx
  DMA_COMPLETION_STATUS v14; // [rsp+20h] [rbp-18h]

  m_DeviceBase = this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase;
  Method = this->m_TransferCompleteFunction.Method;
  m_ObjectSize = this->m_ObjectSize;
  v7 = m_DeviceBase->m_ObjectSize;
  if ( Method )
  {
    v8 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    v14 = Status;
    m_DmaDirection = (unsigned int)this->m_DmaDirection;
    v10 = v7 == 0;
    v11 = this;
    m_TransferCompleteContext = this->m_TransferCompleteContext;
    if ( v10 )
      v8 = 0LL;
    v13 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v13 = 0LL;
    Method(
      (WDFDMATRANSACTION__ *)v13,
      (WDFDEVICE__ *)v8,
      m_TransferCompleteContext,
      (_WDF_DMA_DIRECTION)m_DmaDirection,
      v14);
  }
}
