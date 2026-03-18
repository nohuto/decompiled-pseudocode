/*
 * XREFs of ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006F618
 * Callers:
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006E544 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C006FD40 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00703DC (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 * Callees:
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0016190 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0019DAC (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006E7CC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C006F378 (-DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::FormatRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  FxRequest *Request; // rsi
  FxRequestContext *v5; // rax
  IFxMemory *v7; // rdi
  size_t v8; // rbx
  void *v9; // rax
  IFxMemory *v10; // rdx
  int v11; // eax
  FxRequestContext *m_RequestContext; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _WDF_REQUEST_REUSE_PARAMS params; // [rsp+20h] [rbp-40h] BYREF
  FxRequestBuffer buf; // [rsp+38h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+90h] [rbp+30h] BYREF

  Request = Repeater->Request;
  memset(&buf.u, 0, sizeof(buf.u));
  buf.DataType = FxRequestBufferUnspecified;
  FxUsbPipeContinuousReader::DeleteMemory(this, Request);
  *(_QWORD *)(&params.Status + 1) = 0LL;
  HIDWORD(params.NewIrp) = 0;
  *(_QWORD *)&params.Size = 24LL;
  params.Status = -1073741637;
  FxRequest::Reuse(Request, &params);
  if ( this->m_Lookaside->Allocate(this->m_Lookaside, &pMemory) >= 0 )
  {
    v7 = &pMemory->IFxMemory;
    v8 = pMemory->GetBufferSize(&pMemory->IFxMemory);
    v9 = (void *)v7->GetBuffer(v7);
    memset(v9, 0, v8);
    if ( pMemory )
      v10 = &pMemory->IFxMemory;
    else
      v10 = 0LL;
    FxRequestBuffer::SetMemory(&buf, v10, &this->m_Offsets);
    v11 = FxUsbPipe::FormatTransferRequest(this->m_Pipe, Request, &buf, 3u);
    m_RequestContext = Request->m_RequestContext;
    v13 = v11;
    if ( v11 >= 0 )
    {
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
      HIDWORD(m_RequestContext[1].__vftable) = 6;
      if ( pMemory->m_ObjectSize )
        v15 = (unsigned __int64)pMemory ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v15 = 0LL;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = v15;
      Request->m_CompletionRoutine.m_Completion = FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete;
      Request->m_TargetCompletionContext = Repeater;
    }
    else if ( !m_RequestContext )
    {
      FxObject::ClearEvtCallbacks(pMemory);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
    }
    return v13;
  }
  else
  {
    v5 = Request->m_RequestContext;
    if ( v5 )
      v5->m_RequestMemory = 0LL;
    return 3221225626LL;
  }
}
