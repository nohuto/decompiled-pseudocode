/*
 * XREFs of ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0070420
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005D2B0 (WPP_IFR_SF_qqqq.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006FB70 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C006FDEC (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete(
        WDFREQUEST__ *Request,
        WDFUSBPIPE__ *Target,
        _WDF_REQUEST_COMPLETION_PARAMS *Params,
        FxUsbPipeRepeatReader *Context)
{
  _QWORD *_a2; // rcx
  FxUsbPipeContinuousReader *Parent; // r14
  char v7; // r15
  char v8; // bp
  FxUsbPipe *m_Pipe; // rsi
  int _a4; // r8d
  const void *v11; // rdi
  unsigned __int16 m_ObjectSize; // dx
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  const void *_a1; // rax
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  const void *v17; // rax
  int irql; // [rsp+98h] [rbp+20h] OVERLAPPED BYREF

  _a2 = &Context->Request->__vftable;
  Parent = Context->Parent;
  v7 = 0;
  v8 = 0;
  m_Pipe = Parent->m_Pipe;
  _a4 = Context->Request->m_Irp.m_Irp->IoStatus.Status;
  irql = _a4;
  if ( _a4 < 0 )
  {
    m_ObjectSize = m_Pipe->m_ObjectSize;
    v11 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    m_Globals = m_Pipe->m_Globals;
    if ( _a4 == -1073741536 )
    {
      v17 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v17 = 0LL;
      WPP_IFR_SF_qqqq(m_Globals, 4u, 0xEu, 0x12u, WPP_FxUsbPipe_cpp_Traceguids, v17, Context, _a2, Context->RequestIrp);
    }
    else
    {
      _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Globals,
        4u,
        0xEu,
        0x11u,
        WPP_FxUsbPipe_cpp_Traceguids,
        _a1,
        _a2,
        (__int64)Context->RequestIrp,
        _a4);
      FxNonPagedObject::Lock(m_Pipe, (unsigned __int8 *)&irql, v15);
      KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
      v7 = 1;
      FxUsbPipeContinuousReader::QueueWorkItemLocked(Parent, Context);
      FxNonPagedObject::Unlock(m_Pipe, irql, v16);
    }
  }
  else
  {
    Parent->m_ReadCompleteCallback(
      Target,
      *(WDFMEMORY__ **)(*(_QWORD *)(_a2[21] + 32LL) + 8LL),
      *(_QWORD *)(*(_QWORD *)(_a2[21] + 32LL) + 16LL),
      Parent->m_ReadCompleteContext);
    v8 = FxUsbPipeContinuousReader::ResubmitRepeater(Parent, Context, &irql);
    v11 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( (v8 & 1) != 0 )
  {
    KeInsertQueueDpc(&Context->Dpc, 0LL, 0LL);
  }
  else if ( (v8 & 2) != 0 )
  {
    if ( !m_Pipe->m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_qqqq(
      m_Pipe->m_Globals,
      4u,
      0xEu,
      0x13u,
      WPP_FxUsbPipe_cpp_Traceguids,
      v11,
      Context,
      Context->Request,
      Context->RequestIrp);
  }
  else if ( !v7 )
  {
    KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
  }
}
