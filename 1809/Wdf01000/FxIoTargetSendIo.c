/*
 * XREFs of FxIoTargetSendIo @ 0x1C00649D0
 * Callers:
 *     imp_WdfIoTargetSendReadSynchronously @ 0x1C00660A0 (imp_WdfIoTargetSendReadSynchronously.c)
 *     imp_WdfIoTargetSendWriteSynchronously @ 0x1C00660F0 (imp_WdfIoTargetSendWriteSynchronously.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
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
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqD @ 0x1C0064EB0 (WPP_IFR_SF_qqD.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0069CD4 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 */

__int64 __fastcall FxIoTargetSendIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned __int8 MajorCode,
        _WDF_MEMORY_DESCRIPTOR *IoBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  int v14; // ebx
  _WDF_REQUEST_SEND_OPTIONS *v15; // rsi
  unsigned int Flags; // edx
  _WDF_MEMORY_DESCRIPTOR *v17; // r14
  signed int v18; // eax
  int v19; // eax
  FxRequestBase *m_TrueRequest; // rcx
  unsigned __int64 v21; // rax
  FxFileObject *_a3; // [rsp+30h] [rbp-D8h]
  FxRequestBuffer ioBuf; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h]
  FxSyncRequest v26; // [rsp+68h] [rbp-A0h] BYREF
  FxIoContext Context; // [rsp+198h] [rbp+90h] BYREF
  FxIoTarget *pTarget; // [rsp+278h] [rbp+170h] BYREF

  *(_OWORD *)&ioBuf.u.RefMdl.Offsets = 0uLL;
  LODWORD(ioBuf.u.Memory.Memory) = 0;
  v25 = 0LL;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  FxIoContext::FxIoContext(&Context);
  FxSyncRequest::FxSyncRequest(&v26, m_Globals, &Context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(m_Globals, v12, v13, 0x1Cu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, Request, MajorCode);
  v14 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v14 >= 0 )
  {
    v15 = RequestOptions;
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
        v14 = -1073741820;
LABEL_12:
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTargetAPI_cpp_Traceguids, v14);
        goto LABEL_27;
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
        v14 = -1073741811;
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
    v17 = IoBuffer;
    if ( IoBuffer
      && (v18 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&ioBuf.u, m_Globals, IoBuffer, 0),
          v14 = v18,
          v18 < 0) )
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v17, v18);
    }
    else
    {
      v19 = FxIoTarget::FormatIoRequest(
              pTarget,
              v26.m_TrueRequest,
              MajorCode,
              (FxRequestBuffer *)&ioBuf.u,
              DeviceOffset,
              _a3);
      v14 = v19;
      if ( v19 < 0 )
      {
        WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x20u, WPP_FxIoTargetAPI_cpp_Traceguids, MajorCode, v19);
      }
      else
      {
        if ( m_Globals->FxVerboseOn )
        {
          m_TrueRequest = v26.m_TrueRequest;
          if ( v26.m_TrueRequest->m_ObjectSize )
            v21 = (unsigned __int64)v26.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v21 = 0LL;
          if ( v21 )
            m_TrueRequest = (FxRequestBase *)v21;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, m_TrueRequest);
        }
        v14 = FxIoTarget::SubmitSync(pTarget, v26.m_TrueRequest, v15, 0LL);
        if ( BytesReturned )
          *BytesReturned = v26.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
      }
    }
  }
LABEL_27:
  FxSyncRequest::~FxSyncRequest(&v26);
  FxIoContext::~FxIoContext(&Context);
  return (unsigned int)v14;
}
