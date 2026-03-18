/*
 * XREFs of ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006F328
 * Callers:
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C0070630 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetStatus@FxRequest@@QEAAJXZ @ 0x1C0050B28 (-GetStatus@FxRequest@@QEAAJXZ.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C006EC54 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C006FD1C (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C006FDEC (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0072A20 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1C0072B98 (-IsConnected@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0075A78 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 */

void __fastcall FxUsbPipeContinuousReader::FxUsbPipeRequestWorkItemHandler(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *FailedRepeater,
        unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int v6; // eax
  FxRequest *Request; // rdx
  int v8; // r15d
  int v9; // ebx
  int *Buffer; // rcx
  int v11; // esi
  unsigned __int8 v12; // r8
  FxUsbPipe *m_Pipe; // rcx
  FxUsbDevice *m_UsbDevice; // rbp
  FxUsbPipe *v15; // rcx
  unsigned __int16 m_ObjectSize; // ax
  WDFUSBPIPE__ *v17; // rcx
  unsigned __int8 v18; // al
  unsigned int v19; // edx
  int v20; // esi
  bool IsVersionGreaterThanOrEqualTo; // al
  FxUsbDevice *v22; // rcx
  unsigned __int8 v23; // dl
  FxUsbPipe *v24; // rcx
  unsigned __int8 v25; // r8
  FxUsbPipeRepeatReader *m_Readers; // rsi
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  int status; // [rsp+58h] [rbp+10h] BYREF
  unsigned int PortStatus; // [rsp+60h] [rbp+18h] BYREF

  m_Globals = this->m_Pipe->m_Globals;
  v6 = FxRequest::GetStatus(FailedRepeater->Request, (__int64)FailedRepeater, a3);
  Request = FailedRepeater->Request;
  v8 = v6;
  v9 = 0;
  Buffer = (int *)Request->m_RequestContext->m_CompletionParams.Parameters.Write.Buffer;
  if ( Buffer )
    v11 = *Buffer;
  else
    v11 = 0;
  FxUsbPipeContinuousReader::CancelRepeaters(this);
  m_Pipe = this->m_Pipe;
  m_UsbDevice = m_Pipe->m_UsbDevice;
  if ( this->m_ReadersFailedCallback )
  {
    v15 = this->m_Pipe;
    this->m_WorkItemThread = KeGetCurrentThread();
    m_ObjectSize = v15->m_ObjectSize;
    v17 = (WDFUSBPIPE__ *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v17 = 0LL;
    v18 = this->m_ReadersFailedCallback(v17, v8, v11);
    m_Pipe = this->m_Pipe;
    this->m_WorkItemThread = 0LL;
  }
  else
  {
    v18 = 1;
  }
  if ( !v18 )
  {
    v20 = -1073741823;
    status = -1073741823;
    goto LABEL_19;
  }
  status = FxUsbDevice::IsConnected(m_UsbDevice);
  v20 = status;
  if ( status >= 0 )
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v19, 9u);
    v22 = m_UsbDevice;
    if ( IsVersionGreaterThanOrEqualTo )
    {
      if ( FxUsbDevice::GetPortStatus(m_UsbDevice, &PortStatus) < 0 || (PortStatus & 1) != 0 )
      {
        FxUsbPipe::Reset(this->m_Pipe);
        goto LABEL_16;
      }
      v22 = m_UsbDevice;
    }
    status = FxUsbDevice::Reset(v22);
    v20 = status;
  }
LABEL_16:
  m_Pipe = this->m_Pipe;
LABEL_19:
  FxNonPagedObject::Lock(m_Pipe, &irql, v12);
  v23 = irql;
  v24 = this->m_Pipe;
  this->m_WorkItemQueued = 0;
  FxNonPagedObject::Unlock(v24, v23, v25);
  if ( v20 >= 0 )
  {
    this->m_NumFailedReaders = 0;
    if ( this->m_NumReaders )
    {
      m_Readers = this->m_Readers;
      do
      {
        if ( (FxUsbPipeContinuousReader::ResubmitRepeater(this, m_Readers, &status) & 1) != 0 )
          IofCallDriver(this->m_Pipe->m_TargetDevice, m_Readers->Request->m_Irp.m_Irp);
        ++v9;
        ++m_Readers;
      }
      while ( v9 < this->m_NumReaders );
    }
  }
}
