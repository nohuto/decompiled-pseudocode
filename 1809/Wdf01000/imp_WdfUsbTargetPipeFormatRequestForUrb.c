/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C006AF40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001A20C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0070CBC (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *UrbMemory,
        _WDFMEMORY_OFFSET *UrbOffsets)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDFMEMORY_OFFSET *v9; // rdi
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edi
  int _a4; // eax
  FxRequestContext *m_RequestContext; // r8
  FxUsbPipe *pUsbPipe; // [rsp+50h] [rbp-30h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pMemory; // [rsp+B0h] [rbp+30h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request, UrbMemory);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)UrbMemory, 0x100Au, (void **)&pMemory);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v9 = UrbOffsets;
  if ( !UrbOffsets )
    goto LABEL_10;
  BufferLength = UrbOffsets->BufferLength;
  v11 = BufferLength + UrbOffsets->BufferOffset;
  if ( v11 >= BufferLength )
  {
    v12 = BufferLength + UrbOffsets->BufferOffset;
    if ( v12 > pMemory->GetBufferSize(pMemory) )
      return 3221225621LL;
    result = 0LL;
  }
  else
  {
    result = v11 < BufferLength ? 0xC0000095 : 0;
  }
  if ( (int)result >= 0 )
  {
LABEL_10:
    v14 = pMemory->GetBufferSize(pMemory);
    if ( v9 && v9->BufferOffset )
      v14 -= v9->BufferOffset;
    if ( v14 >= 0x18 )
    {
      FxRequestBuffer::SetMemory(&buf, pMemory, v9);
      _a4 = FxFormatUrbRequest(m_Globals, pUsbPipe, pRequest, &buf, pUsbPipe->m_UrbType, pUsbPipe->m_USBDHandle);
      v16 = _a4;
      if ( _a4 >= 0 )
      {
        m_RequestContext = pRequest->m_RequestContext;
        m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
        m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
        HIDWORD(m_RequestContext[1].__vftable) = 9;
        *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = UrbMemory;
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qqqd(
          m_Globals,
          5u,
          0xEu,
          0x2Bu,
          WPP_FxUsbPipeAPI_cpp_Traceguids,
          Pipe,
          Request,
          (__int64)UrbMemory,
          _a4);
    }
    else
    {
      v15 = pMemory->GetBufferSize(pMemory);
      v16 = -1073741811;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxUsbPipeAPI_cpp_Traceguids, UrbMemory, v15, -1073741811);
    }
    return v16;
  }
  return result;
}
