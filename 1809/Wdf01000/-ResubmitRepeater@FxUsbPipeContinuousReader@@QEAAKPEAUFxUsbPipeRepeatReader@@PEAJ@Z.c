/*
 * XREFs of ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C006FDEC
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006F328 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0070420 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 * Callees:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00020D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qdq @ 0x1C000EF14 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005D2B0 (WPP_IFR_SF_qqqq.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006F018 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006FB70 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::ResubmitRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater,
        int *Status)
{
  unsigned int v6; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  int v8; // esi
  unsigned __int8 v9; // r8
  FxUsbPipe *m_Pipe; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  unsigned __int8 v13; // r8
  unsigned int v14; // eax
  FxUsbPipe *v15; // rcx
  unsigned __int16 v16; // ax
  const void *v17; // rcx
  FxUsbPipe *v18; // r8
  unsigned __int8 v19; // al
  unsigned __int8 m_NumReaders; // cl
  int v21; // ecx
  unsigned __int16 v22; // ax
  const void *v23; // r8
  unsigned __int16 v24; // ax
  const void *v25; // r8
  unsigned int _a3; // [rsp+38h] [rbp-40h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  m_Globals = this->m_Pipe->m_Globals;
  v8 = FxUsbPipeContinuousReader::FormatRepeater(this, Repeater);
  FxNonPagedObject::Lock(this->m_Pipe, &irql, v9);
  if ( this->m_WorkItemQueued )
  {
    v8 = -1073741536;
    m_Pipe = this->m_Pipe;
    m_ObjectSize = m_Pipe->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqqq(
      m_Globals,
      4u,
      0xEu,
      0xDu,
      WPP_FxUsbPipe_cpp_Traceguids,
      _a1,
      Repeater,
      Repeater->Request,
      Repeater->RequestIrp);
  }
  else if ( v8 < 0 )
  {
    Repeater->Request->m_Irp.m_Irp->IoStatus.Status = v8;
    v15 = this->m_Pipe;
    v16 = v15->m_ObjectSize;
    v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v16 )
      v17 = 0LL;
    WPP_IFR_SF_qdq(m_Globals, 4u, 0xEu, 0xEu, WPP_FxUsbPipe_cpp_Traceguids, v17, v8, Repeater);
    v18 = this->m_Pipe;
    if ( v18->m_State == WdfIoTargetStarted )
    {
      v19 = ++this->m_NumFailedReaders;
      m_NumReaders = this->m_NumReaders;
      if ( v19 == m_NumReaders )
      {
        FxUsbPipeContinuousReader::QueueWorkItemLocked(this, Repeater);
      }
      else
      {
        _a3 = m_NumReaders;
        v21 = m_NumReaders - v19;
        v22 = v18->m_ObjectSize;
        v23 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v22 )
          v23 = 0LL;
        WPP_IFR_SF_qdd(m_Globals, 4u, 0xEu, 0xFu, WPP_FxUsbPipe_cpp_Traceguids, v23, v21, _a3);
      }
    }
    else
    {
      v24 = v18->m_ObjectSize;
      v25 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v24 )
        v25 = 0LL;
      WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x10u, WPP_FxUsbPipe_cpp_Traceguids, v25);
    }
  }
  else
  {
    v14 = FxIoTarget::SubmitLocked(this->m_Pipe, Repeater->Request, 0LL, 0x80000000);
    v6 = v14;
    if ( (v14 & 1) != 0 )
    {
      KeClearEvent(&Repeater->ReadCompletedEvent.m_Event);
    }
    else if ( (v14 & 2) != 0 )
    {
      v8 = -1073741536;
    }
    else
    {
      v8 = Repeater->Request->m_Irp.m_Irp->IoStatus.Status;
    }
  }
  FxNonPagedObject::Unlock(this->m_Pipe, irql, v13);
  *Status = v8;
  return v6;
}
