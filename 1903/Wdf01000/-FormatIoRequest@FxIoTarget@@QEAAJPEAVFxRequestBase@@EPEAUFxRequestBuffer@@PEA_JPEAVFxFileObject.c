/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C006A364
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C0064E6C (FxIoTargetFormatIo.c)
 *     FxIoTargetSendIo @ 0x1C006504C (FxIoTargetSendIo.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C000E9E4 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C000ECF0 (--0FxIoContext@@QEAA@XZ.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0018B20 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067284 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C00682A8 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0095D78 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C00962C8 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00963FC (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  _LARGE_INTEGER v7; // rbx
  char v10; // r12
  __int64 result; // rax
  int v12; // esi
  FxRequestContext *m_RequestContext; // r14
  FxIoContext *v14; // rax
  FxRequestContext *v15; // rax
  unsigned int BufferLength; // eax
  const void *v17; // rcx
  int Buffer; // eax
  unsigned __int16 v19; // r9
  size_t v20; // r15
  _IRP::<unnamed_type_AssociatedIrp> v21; // rcx
  FX_POOL_TRACKER *v22; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v23; // rdx
  void *pBuffer[2]; // [rsp+40h] [rbp-38h] BYREF
  void *Caller; // [rsp+78h] [rbp+0h]
  unsigned int Request_0a[28]; // [rsp+A8h] [rbp+30h]

  v7.QuadPart = 0LL;
  pBuffer[0] = 0LL;
  v10 = 0;
  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v12 = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      v14 = (FxIoContext *)FxPoolAllocator(
                             this->m_Globals,
                             &this->m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             0xB0uLL,
                             this->m_Globals->Tag,
                             Caller);
      if ( v14 )
      {
        FxIoContext::FxIoContext(v14);
        m_RequestContext = v15;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetKm_cpp_Traceguids);
        return 3221225626LL;
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, IoBuffer);
    memset(&Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1], 0, 0x38uLL);
    FxIoTarget::CopyFileObjectAndFlags(this, Request);
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = MajorCode;
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 35) = MajorCode;
    BufferLength = FxRequestBuffer::GetBufferLength(IoBuffer);
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    Request_0a[0] = BufferLength;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    switch ( this->m_TargetIoType )
    {
      case 1u:
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, pBuffer);
        v12 = Buffer;
        if ( Buffer >= 0 )
        {
          Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          goto LABEL_41;
        }
        v19 = 14;
        break;
      case 2u:
        Request->m_Irp.m_Irp->UserBuffer = 0LL;
        if ( !BufferLength )
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
          goto LABEL_41;
        }
        v20 = BufferLength;
        if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= BufferLength
          && (v21.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
        {
          Request->m_Irp.m_Irp->AssociatedIrp = v21;
        }
        else
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                    this->m_Globals,
                                                                    &this->m_Globals->FxPoolFrameworks,
                                                                    ExDefaultNonPagedPoolType,
                                                                    BufferLength,
                                                                    this->m_Globals->Tag,
                                                                    Caller);
          if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
          {
            WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
            v12 = -1073741670;
LABEL_47:
            FxRequestBase::ContextReleaseAndRestore(Request);
            return (unsigned int)v12;
          }
          v10 = 1;
        }
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, pBuffer);
        v12 = Buffer;
        if ( Buffer >= 0 )
        {
          if ( MajorCode == 4 )
          {
            if ( pBuffer[0] )
              memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer[0], v20);
          }
          else
          {
            Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          }
          if ( v10 )
          {
            v22 = (FX_POOL_TRACKER *)m_RequestContext[1].__vftable;
            v23.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
            m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)v23.MasterIrp;
            m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = v20;
            if ( v22 )
              FxPoolFree(v22);
            v10 = 0;
          }
          else
          {
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
          }
LABEL_41:
          if ( v12 < 0 )
          {
            if ( v10 )
            {
              FxPoolFree((FX_POOL_TRACKER *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
            }
            goto LABEL_47;
          }
          goto LABEL_42;
        }
        v19 = 12;
        break;
      case 3u:
        Buffer = FxRequestBuffer::GetOrAllocateMdl(
                   IoBuffer,
                   this->m_Globals,
                   &Request->m_Irp.m_Irp->MdlAddress,
                   (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                   (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                   (_LOCK_OPERATION)(MajorCode == 3),
                   m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                   &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
        v12 = Buffer;
        if ( Buffer >= 0 )
        {
LABEL_42:
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = Request_0a[0];
          if ( DeviceOffset )
            v7 = *DeviceOffset;
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset = v7;
          FxRequestBase::VerifierSetFormatted(Request);
          return (unsigned int)v12;
        }
        v19 = 13;
        break;
      default:
        v12 = -1073741436;
        v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetKm_cpp_Traceguids, v17, 0xC0000184);
        goto LABEL_47;
    }
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v19, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
    goto LABEL_41;
  }
  return result;
}
