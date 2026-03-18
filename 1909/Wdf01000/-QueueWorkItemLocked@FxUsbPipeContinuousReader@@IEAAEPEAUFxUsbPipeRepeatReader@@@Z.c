/*
 * XREFs of ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0070160
 * Callers:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00703DC (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0070A00 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0057D44 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     WPP_IFR_SF_qdL @ 0x1C007107C (WPP_IFR_SF_qdL.c)
 */

unsigned __int8 __fastcall FxUsbPipeContinuousReader::QueueWorkItemLocked(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  char v3; // bl
  FxUsbPipe *m_Pipe; // rcx
  FxUsbPipe *v6; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 m_ObjectSize; // ax
  const void *v9; // rcx
  const void *level; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  v3 = 0;
  m_Pipe = this->m_Pipe;
  v6 = m_Pipe;
  m_Globals = m_Pipe->m_Globals;
  if ( m_Pipe->m_State == WdfIoTargetStarted && !this->m_WorkItemQueued )
  {
    m_ObjectSize = m_Pipe->m_ObjectSize;
    v9 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0xAu, WPP_FxUsbPipe_cpp_Traceguids, v9);
    if ( FxSystemWorkItem::EnqueueWorker(
           this->m_WorkItem,
           FxUsbPipeContinuousReader::_FxUsbPipeRequestWorkItemThunk,
           Repeater,
           1u) )
    {
      this->m_WorkItemQueued = 1;
      return 1;
    }
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0xBu, WPP_FxUsbPipe_cpp_Traceguids);
    v6 = this->m_Pipe;
  }
  level = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v6->m_ObjectSize )
    level = 0LL;
  WPP_IFR_SF_qdL(
    m_Globals,
    v6->m_State,
    (unsigned int)level,
    this->m_WorkItemQueued,
    traceGuid,
    level,
    this->m_WorkItemQueued,
    v6->m_State);
  return v3;
}
