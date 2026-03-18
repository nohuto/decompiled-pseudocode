/*
 * XREFs of ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C007129C
 * Callers:
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C006B5C0 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C006BC90 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C006C200 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C006C500 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C00682A8 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006EED8 (--0FxUsbUrbContext@@QEAA@XZ.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00713C4 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 */

__int64 __fastcall FxFormatUrbRequest(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoTarget *Target,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        _FX_URB_TYPE FxUrbType,
        USBD_HANDLE__ *UsbdHandle)
{
  int _a3; // eax
  unsigned int v11; // ebx
  FxRequestContext *m_RequestContext; // rbx
  FxUsbUrbContext *v14; // rax
  FxRequestContext *v15; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)Target);
  v11 = _a3;
  if ( _a3 >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 17 )
    {
      v14 = (FxUsbUrbContext *)FxPoolAllocator(
                                 Target->m_Globals,
                                 &Target->m_Globals->FxPoolFrameworks,
                                 ExDefaultNonPagedPoolType,
                                 0x88uLL,
                                 Target->m_Globals->Tag,
                                 retaddr);
      if ( v14 )
      {
        FxUsbUrbContext::FxUsbUrbContext(v14);
        m_RequestContext = v15;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
        return 3221225626LL;
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffer);
    FxFormatUsbRequest(
      Request,
      (_URB *)m_RequestContext[1].m_CompletionParams.Parameters.Write.Buffer,
      FxUrbType,
      UsbdHandle);
    return 0LL;
  }
  else
  {
    if ( FxDriverGlobals->FxVerboseOn )
      WPP_IFR_SF_qid(FxDriverGlobals, 5u, 0xEu, 0xAu, WPP_usbutil_cpp_Traceguids, Target, (__int64)Request, _a3);
    return v11;
  }
}
