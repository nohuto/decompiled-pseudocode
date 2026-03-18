/*
 * XREFs of ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0015E60
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0015BB0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0065C40 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0072A20 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000AA20 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C000E524 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B860 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0067C18 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 */

__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rdi
  IFxMemory *Memory; // rax
  IFxMemory *v11; // rax
  void ***v12; // rsi
  unsigned int v13; // edi
  FxRequestBuffer::<unnamed_type_u> *p_u; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _QWORD *p_ProviderId; // r14
  int Mdl; // ecx
  int v18; // ecx
  __int64 (*GetBuffer)(void); // rax
  __int64 v20; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequestContext *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  _MDL *v27; // rcx
  char *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *Offsets; // rcx
  _MDL *v30; // rcx
  PVOID v31; // rax
  unsigned int _a2; // ebx
  void **bufs[3]; // [rsp+40h] [rbp-58h] BYREF
  void *Caller; // [rsp+98h] [rbp+0h]

  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  if ( (int)result < 0 )
    return result;
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 2 )
  {
    v22 = (FxRequestContext *)FxPoolAllocator(
                                this->m_Globals,
                                &this->m_Globals->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0x70uLL,
                                this->m_Globals->Tag,
                                Caller);
    m_RequestContext = v22;
    if ( !v22 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x35u, WPP_FxIoTarget_cpp_Traceguids);
      return 3221225626LL;
    }
    v22->m_RequestMemory = 0LL;
    v22->m_RequestType = 2;
    memset(&v22->m_CompletionParams, 0, sizeof(v22->m_CompletionParams));
    m_RequestContext->m_CompletionParams.Size = 72;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    m_RequestContext->__vftable = (FxRequestContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    m_RequestContext[1].__vftable = 0LL;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = 0LL;
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffers);
  if ( Buffers[1].DataType == FxRequestBufferMemory )
  {
    v23 = 130LL;
  }
  else
  {
    if ( Buffers[1].DataType != FxRequestBufferReferencedMdl )
    {
      Memory = 0LL;
      goto LABEL_7;
    }
    v23 = 135LL;
  }
  Buffers[1].u.Memory.Memory->AddRef(
    Buffers[1].u.Memory.Memory,
    m_RequestContext,
    v23,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  Memory = Buffers[1].u.Memory.Memory;
LABEL_7:
  m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Memory;
  if ( Buffers[2].DataType == FxRequestBufferMemory )
  {
    v24 = 130LL;
  }
  else
  {
    if ( Buffers[2].DataType != FxRequestBufferReferencedMdl )
    {
      v11 = 0LL;
      goto LABEL_10;
    }
    v24 = 135LL;
  }
  Buffers[2].u.Memory.Memory->AddRef(
    Buffers[2].u.Memory.Memory,
    m_RequestContext,
    v24,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  v11 = Buffers[2].u.Memory.Memory;
LABEL_10:
  *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = v11;
  memset(&Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1], 0, 0x38uLL);
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
  if ( !Request->m_IrpAllocation )
  {
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  }
  if ( !this->m_InStack )
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
  v12 = bufs;
  v13 = 0;
  p_u = &Buffers->u;
  CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  bufs[1] = &CurrentStackLocation[-1].Parameters.QueryEa.EaList;
  p_ProviderId = &CurrentStackLocation[-1].Parameters.WMI.ProviderId;
  bufs[0] = &CurrentStackLocation[-1].Parameters.Others.Argument1;
  bufs[2] = &CurrentStackLocation[-1].Parameters.SetFile.DeleteHandle;
  while ( 1 )
  {
    Mdl = (int)p_u[-1].RefMdl.Mdl;
    if ( Mdl )
    {
      v18 = Mdl - 1;
      if ( v18 )
      {
        v25 = v18 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 != 1 )
            {
              _a2 = -1073741811;
              goto LABEL_49;
            }
            v27 = p_u->RefMdl.Mdl;
            if ( (v27->MdlFlags & 5) != 0 )
              MappedSystemVa = (char *)v27->MappedSystemVa;
            else
              MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                         v27,
                                         0,
                                         MmCached,
                                         0LL,
                                         0,
                                         ExDefaultMdlProtection | 0x10);
            *p_ProviderId = MappedSystemVa;
            if ( !MappedSystemVa )
              goto LABEL_48;
            Offsets = p_u->Memory.Offsets;
            if ( Offsets )
              *p_ProviderId = &MappedSystemVa[Offsets->BufferOffset];
          }
          else
          {
            *p_ProviderId = p_u->Memory.Memory;
          }
        }
        else
        {
          v30 = (_MDL *)p_u->Memory.Memory;
          if ( (BYTE2(p_u->Memory.Memory[1].__vftable) & 5) != 0 )
            v31 = v30->MappedSystemVa;
          else
            v31 = MmMapLockedPagesSpecifyCache(v30, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
          *p_ProviderId = v31;
          if ( !v31 )
          {
LABEL_48:
            _a2 = -1073741670;
LABEL_49:
            WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTarget_cpp_Traceguids, v13 + 1, _a2);
            FxRequestBase::ContextReleaseAndRestore(Request);
            return _a2;
          }
        }
      }
      else
      {
        GetBuffer = (__int64 (*)(void))p_u->Memory.Memory->GetBuffer;
        v20 = p_u->Memory.Offsets ? p_u->Memory.Offsets->BufferOffset + GetBuffer() : GetBuffer();
        *p_ProviderId = v20;
      }
    }
    else
    {
      *p_ProviderId = 0LL;
    }
    ++v13;
    ++v12;
    p_u = (FxRequestBuffer::<unnamed_type_u> *)((char *)p_u + 32);
    if ( v13 >= 3 )
      break;
    p_ProviderId = *v12;
  }
  m_Globals = Request->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(Request, 128);
  }
  return 0LL;
}
