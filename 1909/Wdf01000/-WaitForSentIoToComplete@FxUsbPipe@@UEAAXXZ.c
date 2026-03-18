/*
 * XREFs of ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C00706D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C006F254 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 */

void __fastcall FxUsbPipe::WaitForSentIoToComplete(FxUsbPipe *this)
{
  FxUsbPipeContinuousReader *m_Reader; // rbx
  const void *v2; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rax
  FxSystemWorkItem *m_WorkItem; // rbx
  _FX_DRIVER_GLOBALS *v7; // rcx
  const void *v8; // rax
  _FX_DRIVER_GLOBALS *v9; // rcx

  m_Reader = this->m_Reader;
  v2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Reader )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = v2;
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxUsbPipe_cpp_Traceguids, _a1);
      m_Reader = this->m_Reader;
    }
    m_WorkItem = m_Reader->m_WorkItem;
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_WorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    v7 = this->m_Globals;
    if ( v7->FxVerboseOn )
    {
      v8 = v2;
      if ( !this->m_ObjectSize )
        v8 = 0LL;
      WPP_IFR_SF_qL(v7, 5u, 0xEu, 0x1Au, WPP_FxUsbPipe_cpp_Traceguids, v8, this->m_Reader->m_NumReaders);
    }
    FxUsbPipeContinuousReader::CancelRepeaters(this->m_Reader);
  }
  v9 = this->m_Globals;
  if ( v9->FxVerboseOn )
  {
    if ( !this->m_ObjectSize )
      v2 = 0LL;
    WPP_IFR_SF_q(v9, 5u, 0xEu, 0x1Bu, WPP_FxUsbPipe_cpp_Traceguids, v2);
  }
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_SentIoEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
}
