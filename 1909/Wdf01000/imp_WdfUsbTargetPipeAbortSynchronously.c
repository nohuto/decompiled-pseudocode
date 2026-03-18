/*
 * XREFs of imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C006AEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000D6C4 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000DDFC (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000E028 (--1FxSyncRequest@@UEAA@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006EDB0 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C006F054 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006F49C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeAbortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  signed int v8; // ebx
  unsigned int Flags; // edx
  FxRequestBase *_a2; // rcx
  unsigned __int64 v11; // rax
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxSyncRequest v14; // [rsp+50h] [rbp-B0h] BYREF
  FxUsbPipeRequestContext context; // [rsp+180h] [rbp+80h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbPipeRequestContext::FxUsbPipeRequestContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v14, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
  v8 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v8 >= 0 )
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
        v8 = -1073741820;
LABEL_12:
        WPP_IFR_SF_(m_Globals, 2u, 0xEu, 0x19u, WPP_FxUsbPipeAPI_cpp_Traceguids);
        goto LABEL_24;
      }
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          Flags,
          0xFu);
LABEL_11:
        v8 = -1073741811;
        goto LABEL_12;
      }
      if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
        goto LABEL_11;
      }
    }
    v8 = FxUsbPipe::FormatAbortRequest(pUsbPipe, v14.m_TrueRequest);
    if ( v8 >= 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = v14.m_TrueRequest;
        if ( v14.m_TrueRequest->m_ObjectSize )
          v11 = (unsigned __int64)v14.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v11 = 0LL;
        if ( v11 )
          _a2 = (FxRequestBase *)v11;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a2);
      }
      v8 = FxIoTarget::SubmitSync(pUsbPipe, v14.m_TrueRequest, RequestOptions, 0LL);
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, v8);
  }
LABEL_24:
  FxSyncRequest::~FxSyncRequest(&v14);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)v8;
}
