/*
 * XREFs of ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0070CDC
 * Callers:
 *     imp_WdfUsbTargetPipeReadSynchronously @ 0x1C006B980 (imp_WdfUsbTargetPipeReadSynchronously.c)
 *     imp_WdfUsbTargetPipeWriteSynchronously @ 0x1C006C010 (imp_WdfUsbTargetPipeWriteSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000D6C4 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000DDFC (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000E028 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C000EC84 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006E7CC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006EE04 (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C006F0B4 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 */

__int64 __fastcall FxUsbPipe::_SendTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred,
        unsigned int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  signed int v11; // ebx
  unsigned int v12; // edx
  FxRequestBase *_a2; // rcx
  unsigned __int64 v14; // rax
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v18; // [rsp+70h] [rbp-90h] BYREF
  FxUsbPipeTransferContext context; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(&buf.u, 0, sizeof(buf.u));
  buf.DataType = FxRequestBufferUnspecified;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbPipeTransferContext::FxUsbPipeTransferContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v18, m_Globals, &context, Request);
  if ( BytesTransferred )
    *BytesTransferred = 0;
  v11 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v11 >= 0 )
  {
    if ( RequestOptions )
    {
      if ( RequestOptions->Size != 16 )
      {
        WPP_IFR_SF_qdd(
          m_Globals,
          2u,
          6u,
          0xAu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          16,
          RequestOptions->Size);
        v11 = -1073741820;
        goto LABEL_26;
      }
      v12 = RequestOptions->Flags;
      if ( (v12 & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          v12,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          v12,
          0xFu);
LABEL_11:
        v11 = -1073741811;
        goto LABEL_26;
      }
      if ( (v12 & 0xFFFFFFF7) != 0 && (v12 & 8) != 0 )
      {
        WPP_IFR_SF_qDd(m_Globals, v12, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, RequestOptions, 8u, v12);
        goto LABEL_11;
      }
    }
    if ( !MemoryDescriptor
      || (v11 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, (IFxMemory *)m_Globals, MemoryDescriptor, 0), v11 >= 0) )
    {
      v11 = FxUsbPipe::FormatTransferRequest(pUsbPipe, v18.m_TrueRequest, &buf, Flags);
      if ( v11 >= 0 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          _a2 = v18.m_TrueRequest;
          if ( v18.m_TrueRequest->m_ObjectSize )
            v14 = (unsigned __int64)v18.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v14 = 0LL;
          if ( v14 )
            _a2 = (FxRequestBase *)v14;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxUsbPipe_cpp_Traceguids, Pipe, _a2);
        }
        v11 = FxIoTarget::SubmitSync(pUsbPipe, v18.m_TrueRequest, RequestOptions, 0LL);
        if ( BytesTransferred )
          *BytesTransferred = context.m_Urb->TransferBufferLength;
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x20u, WPP_FxUsbPipe_cpp_Traceguids, Pipe, v11);
    }
  }
LABEL_26:
  FxSyncRequest::~FxSyncRequest(&v18);
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(&context);
  return (unsigned int)v11;
}
