/*
 * XREFs of imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C006BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000CA14 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000CE0C (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000D038 (--1FxSyncRequest@@UEAA@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006E8D8 (--0FxUsbUrbContext@@QEAA@XZ.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0070CBC (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSendUrbSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        IFxMemory *Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // ebx
  unsigned int Flags; // edx
  FxRequestBase *_a2; // rcx
  unsigned __int64 v12; // rax
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v16; // [rsp+70h] [rbp-90h] BYREF
  FxUsbUrbContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+178h]

  memset(&buf.u, 0, sizeof(buf.u));
  buf.DataType = FxRequestBufferUnspecified;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  FxUsbUrbContext::FxUsbUrbContext(&context);
  FxSyncRequest::FxSyncRequest(&v16, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xBu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, Urb);
  if ( !Urb )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a3 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( _a3 >= 0 )
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
        _a3 = -1073741820;
        goto LABEL_25;
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
LABEL_13:
        _a3 = -1073741811;
        goto LABEL_25;
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
        goto LABEL_13;
      }
    }
    buf.DataType = FxRequestBufferBuffer;
    buf.u.Memory.Memory = Urb;
    buf.u.Mdl.Length = 0;
    _a3 = FxFormatUrbRequest(
            m_Globals,
            pUsbDevice,
            v16.m_TrueRequest,
            &buf,
            pUsbDevice->m_UrbType,
            pUsbDevice->m_USBDHandle);
    if ( _a3 >= 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = v16.m_TrueRequest;
        if ( v16.m_TrueRequest->m_ObjectSize )
          v12 = (unsigned __int64)v16.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v12 = 0LL;
        if ( v12 )
          _a2 = (FxRequestBase *)v12;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xCu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, _a2);
      }
      _a3 = FxIoTarget::SubmitSync(pUsbDevice, v16.m_TrueRequest, RequestOptions, 0LL);
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0xDu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, (__int64)Urb, _a3);
  }
LABEL_25:
  FxSyncRequest::~FxSyncRequest(&v16);
  return (unsigned int)_a3;
}
