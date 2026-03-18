/*
 * XREFs of ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0075510
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C006D730 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00336C0 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C00682A8 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00713C4 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0071C98 (--0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C0071FC4 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C007207C (-AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0072F9C (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00963FC (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 */

__int64 __fastcall FxUsbDevice::FormatStringRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        FxRequestBuffer *RequestBuffer,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  int _a3; // eax
  unsigned int v10; // ebx
  const void *_a1; // r10
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rdi
  _FX_URB_TYPE FxUrbTypeForRequest; // bl
  FxUsbDeviceStringContext *v15; // rax
  FxRequestContext *v16; // rax
  int Urb; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int BufferLength; // eax
  IFxMemory *m_RequestMemory; // rcx
  IFxMemory_vtbl *v21; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v10 = _a3;
  if ( _a3 < 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, (__int64)Request, _a3);
    return v10;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 20 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
    v15 = (FxUsbDeviceStringContext *)FxPoolAllocator(
                                        this->m_Globals,
                                        &this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        0x128uLL,
                                        this->m_Globals->Tag,
                                        retaddr);
    if ( v15 )
    {
      FxUsbDeviceStringContext::FxUsbDeviceStringContext(v15, FxUrbTypeForRequest);
      m_RequestContext = v16;
    }
    else
    {
      m_RequestContext = 0LL;
    }
    if ( !m_RequestContext )
      return 3221225626LL;
    if ( FxUrbTypeForRequest == FxUrbTypeUsbdAllocated )
    {
      Urb = FxUsbDeviceStringContext::AllocateUrb((FxUsbDeviceStringContext *)m_RequestContext, this->m_USBDHandle);
      v10 = Urb;
      if ( Urb < 0 )
      {
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxusbDeviceKm_cpp_Traceguids, Urb);
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return v10;
      }
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  m_Globals = this->m_Globals;
  BufferLength = FxRequestBuffer::GetBufferLength(RequestBuffer);
  result = FxUsbDeviceStringContext::AllocateDescriptor(
             (FxUsbDeviceStringContext *)m_RequestContext,
             m_Globals,
             BufferLength);
  if ( (int)result >= 0 )
  {
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, RequestBuffer);
    m_RequestMemory = m_RequestContext[2].m_RequestMemory;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
    v21 = *(IFxMemory_vtbl **)&m_RequestContext[2].m_RequestType;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
    HIDWORD(m_RequestContext[1].__vftable) = 2;
    m_RequestMemory[5].__vftable = v21;
    HIDWORD(m_RequestContext[2].m_RequestMemory[4].__vftable) = m_RequestContext[3].__vftable;
    BYTE2(m_RequestContext[2].m_RequestMemory[16].__vftable) = StringIndex;
    WORD2(m_RequestContext[2].m_RequestMemory[16].__vftable) = LangID;
    FxFormatUsbRequest(
      Request,
      (_FILE_OBJECT *)m_RequestContext[2].m_RequestMemory,
      (_FX_URB_TYPE)(m_RequestContext[2].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb
                                                          + 1),
      this->m_USBDHandle);
    return 0LL;
  }
  return result;
}
