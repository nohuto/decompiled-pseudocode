/*
 * XREFs of ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006E7CC
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006F618 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C0070858 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0070CDC (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00336C0 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C00682A8 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C006EC48 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006EE04 (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00713C4 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0072F9C (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     USBD_UrbAllocate @ 0x1C0094438 (USBD_UrbAllocate.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0095D78 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00963FC (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 */

int __fastcall FxUsbPipe::FormatTransferRequest(
        FxUsbPipe *this,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        unsigned int TransferFlags)
{
  const void *v8; // rdx
  int result; // eax
  unsigned __int64 BufferLength; // r8
  signed __int8 EndpointAddress; // al
  unsigned __int16 v12; // r9
  int _a3; // eax
  int v14; // esi
  FxRequestContext *m_RequestContext; // rsi
  _FX_URB_TYPE FxUrbTypeForRequest; // r14
  FxUsbPipeTransferContext *v17; // rax
  FxRequestContext *v18; // rax
  int v19; // r14d
  USBD_HANDLE__ *m_USBDHandle; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  void *PipeHandle; // rcx
  _LOCK_OPERATION _a1; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  _MDL *pMdl; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned int)(FxUsbPipe::_UsbdPipeTypeToWdf(this->m_PipeInformation.PipeType) - 3) > 1 )
  {
    v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v8 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbPipeKm_cpp_Traceguids, v8, 0xC0000010);
    return -1073741808;
  }
  BufferLength = FxRequestBuffer::GetBufferLength(Buffer);
  EndpointAddress = this->m_PipeInformation.EndpointAddress;
  if ( (TransferFlags & 1) != 0 )
  {
    if ( EndpointAddress >= 0 )
    {
      v12 = 14;
LABEL_9:
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, v12, WPP_FxUsbPipeKm_cpp_Traceguids, this);
      return -1073741808;
    }
    if ( this->m_CheckPacketSize && BufferLength % this->m_PipeInformation.MaximumPacketSize )
      return -1073741306;
  }
  else if ( EndpointAddress < 0 )
  {
    v12 = 15;
    goto LABEL_9;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v14 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbPipeKm_cpp_Traceguids, this, (__int64)Request, _a3);
    return v14;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 16 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
    v17 = (FxUsbPipeTransferContext *)FxPoolAllocator(
                                        this->m_Globals,
                                        &this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        0x120uLL,
                                        this->m_Globals->Tag,
                                        retaddr);
    if ( v17 )
    {
      FxUsbPipeTransferContext::FxUsbPipeTransferContext(v17, FxUrbTypeForRequest);
      m_RequestContext = v18;
    }
    else
    {
      m_RequestContext = 0LL;
    }
    if ( !m_RequestContext )
      return -1073741670;
    if ( FxUrbTypeForRequest == FxUrbTypeUsbdAllocated )
    {
      if ( m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length )
      {
        v19 = -1073741436;
LABEL_27:
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return v19;
      }
      m_USBDHandle = this->m_USBDHandle;
      v19 = USBD_UrbAllocate(
              m_USBDHandle,
              (_URB **)&m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length);
      if ( v19 < 0 )
        goto LABEL_27;
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  if ( ((Buffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (m_Globals = this->m_Globals,
        _a1 = this->m_PipeInformation.EndpointAddress >> 7,
        pMdl = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   Buffer,
                   m_Globals,
                   &pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestMemory,
                   &m_RequestContext[2].m_RequestType,
                   _a1,
                   0,
                   0LL),
        result >= 0) )
  {
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffer);
    PipeHandle = this->m_PipeInformation.PipeHandle;
    *(_DWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 32) = TransferFlags;
    *(_QWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 24) = PipeHandle;
    FxFormatUsbRequest(
      Request,
      (_URB *)m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length,
      (_FX_URB_TYPE)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length != (_QWORD)m_RequestContext
                                                                                            + 136),
      this->m_USBDHandle);
    return 0;
  }
  return result;
}
