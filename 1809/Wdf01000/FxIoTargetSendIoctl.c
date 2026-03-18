/*
 * XREFs of FxIoTargetSendIoctl @ 0x1C000E5D8
 * Callers:
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x1C000C9C0 (imp_WdfIoTargetSendIoctlSynchronously.c)
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C0066040 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006540 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000CA14 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000CE0C (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000D038 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C000E7C4 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C000E834 (--0FxIoContext@@QEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C000E8CC (--1FxIoContext@@UEAA@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C0031998 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxIoTargetSendIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v13; // ebx
  _WDF_REQUEST_SEND_OPTIONS *v14; // rsi
  _WDF_MEMORY_DESCRIPTOR *v15; // r14
  signed int v16; // eax
  int v17; // eax
  unsigned int Flags; // edx
  unsigned __int16 v20; // r9
  FxRequestBase *m_TrueRequest; // rcx
  unsigned __int64 v22; // rax
  FxRequestBuffer outputBuf; // [rsp+50h] [rbp-B8h] BYREF
  FxRequestBuffer inputBuf; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+90h] [rbp-78h]
  FxSyncRequest v26; // [rsp+98h] [rbp-70h] BYREF
  FxIoContext Context; // [rsp+1C8h] [rbp+C0h] BYREF
  FxIoTarget *pTarget; // [rsp+2A8h] [rbp+1A0h] BYREF

  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  v25 = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  *(_QWORD *)&inputBuf.DataType = 0LL;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  FxIoContext::FxIoContext(&Context);
  FxSyncRequest::FxSyncRequest(&v26, m_Globals, &Context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDd(m_Globals, 5u, 0xEu, 0x25u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, Request, Ioctl, Internal);
  v13 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v13 >= 0 )
  {
    v14 = RequestOptions;
    if ( !RequestOptions )
    {
LABEL_5:
      v15 = InputBuffer;
      if ( InputBuffer
        && (v16 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&inputBuf.u, m_Globals, InputBuffer, 0),
            v13 = v16,
            v16 < 0) )
      {
        v20 = 39;
      }
      else
      {
        v15 = OutputBuffer;
        if ( !OutputBuffer
          || (v16 = FxRequestBuffer::ValidateMemoryDescriptor(
                      (FxRequestBuffer *)&outputBuf.u,
                      m_Globals,
                      OutputBuffer,
                      0),
              v13 = v16,
              v16 >= 0) )
        {
          v17 = FxIoTarget::FormatIoctlRequest(
                  pTarget,
                  v26.m_TrueRequest,
                  Ioctl,
                  Internal,
                  (FxRequestBuffer *)&inputBuf.u,
                  (FxRequestBuffer *)&outputBuf.u);
          v13 = v17;
          if ( v17 < 0 )
          {
            WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v17);
          }
          else
          {
            if ( m_Globals->FxVerboseOn )
            {
              m_TrueRequest = v26.m_TrueRequest;
              if ( v26.m_TrueRequest->m_ObjectSize )
                v22 = (unsigned __int64)v26.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v22 = 0LL;
              if ( v22 )
                m_TrueRequest = (FxRequestBase *)v22;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, m_TrueRequest);
            }
            v13 = FxIoTarget::SubmitSync(pTarget, v26.m_TrueRequest, v14, 0LL);
            if ( BytesReturned )
              *BytesReturned = v26.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
          }
          goto LABEL_13;
        }
        v20 = 40;
      }
      WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, v20, WPP_FxIoTargetAPI_cpp_Traceguids, v15, v16);
      goto LABEL_13;
    }
    if ( RequestOptions->Size == 16 )
    {
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
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_5;
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
      }
      v13 = -1073741811;
    }
    else
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
      v13 = -1073741820;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x26u, WPP_FxIoTargetAPI_cpp_Traceguids, v13);
  }
LABEL_13:
  FxSyncRequest::~FxSyncRequest(&v26);
  FxIoContext::~FxIoContext(&Context);
  return (unsigned int)v13;
}
