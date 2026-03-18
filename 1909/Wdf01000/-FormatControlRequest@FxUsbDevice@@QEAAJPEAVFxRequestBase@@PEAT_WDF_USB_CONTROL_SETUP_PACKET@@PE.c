/*
 * XREFs of ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C00752AC
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C006D570 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006E210 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00336C0 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_i @ 0x1C005B56C (WPP_IFR_SF_i.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C00682A8 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00713C4 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0071C38 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0072F9C (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0076598 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     USBD_UrbAllocate @ 0x1C0094438 (USBD_UrbAllocate.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0095D78 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00963FC (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 */

int __fastcall FxUsbDevice::FormatControlRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        FxRequestBuffer *RequestBuffer)
{
  unsigned int BufferLength; // eax
  unsigned __int8 v9; // dl
  int result; // eax
  int _a3; // eax
  int v12; // ebx
  const void *v13; // rdx
  FxRequestContext *m_RequestContext; // rbx
  _FX_URB_TYPE FxUrbTypeForRequest; // bp
  FxUsbDeviceControlContext *v16; // rax
  FxRequestContext *v17; // rax
  USBD_HANDLE__ *m_USBDHandle; // rbp
  int v19; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _MDL *pMdl; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  BufferLength = FxRequestBuffer::GetBufferLength(RequestBuffer);
  if ( BufferLength > 0xFFFFuLL )
  {
    WPP_IFR_SF_i(this->m_Globals, v9, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, BufferLength);
    return -1073741811;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v12 = _a3;
  if ( _a3 >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 19 )
    {
      FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
      v16 = (FxUsbDeviceControlContext *)FxPoolAllocator(
                                           this->m_Globals,
                                           &this->m_Globals->FxPoolFrameworks,
                                           ExDefaultNonPagedPoolType,
                                           0x128uLL,
                                           this->m_Globals->Tag,
                                           retaddr);
      if ( v16 )
      {
        FxUsbDeviceControlContext::FxUsbDeviceControlContext(v16, FxUrbTypeForRequest);
        m_RequestContext = v17;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
        return -1073741670;
      if ( FxUrbTypeForRequest == FxUrbTypeUsbdAllocated )
      {
        m_USBDHandle = this->m_USBDHandle;
        v19 = USBD_UrbAllocate(m_USBDHandle, (_URB **)&m_RequestContext[2].m_RequestMemory);
        if ( v19 < 0 )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxusbDeviceKm_cpp_Traceguids, v19);
          ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
          return v19;
        }
        m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
        FxObject::MarkDisposeOverride(Request, ObjectLock);
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    if ( ((RequestBuffer->DataType - 2) & 0xFFFFFFFD) != 0
      || (m_Globals = this->m_Globals,
          pMdl = 0LL,
          result = FxRequestBuffer::GetOrAllocateMdl(
                     RequestBuffer,
                     m_Globals,
                     &pMdl,
                     (_MDL **)&m_RequestContext[2].m_RequestType,
                     (unsigned __int8 *)&m_RequestContext[3],
                     IoModifyAccess,
                     0,
                     0LL),
          result >= 0) )
    {
      FxUsbDeviceControlContext::StoreAndReferenceMemory(
        (FxUsbDeviceControlContext *)m_RequestContext,
        this,
        RequestBuffer,
        SetupPacket);
      FxFormatUsbRequest(
        Request,
        (_FILE_OBJECT *)m_RequestContext[2].m_RequestMemory,
        (_FX_URB_TYPE)(m_RequestContext[2].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb
                                                            + 1),
        this->m_USBDHandle);
      return 0;
    }
  }
  else
  {
    v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxusbDeviceKm_cpp_Traceguids, v13, (__int64)Request, _a3);
    return v12;
  }
  return result;
}
