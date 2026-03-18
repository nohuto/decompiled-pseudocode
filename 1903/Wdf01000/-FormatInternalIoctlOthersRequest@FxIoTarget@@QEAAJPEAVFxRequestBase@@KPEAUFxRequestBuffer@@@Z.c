/*
 * XREFs of ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0016740
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0016490 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00662D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0073000 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C000E9E4 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C00682A8 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 */

__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rbx
  IFxMemory *Memory; // rax
  IFxMemory *v11; // rax
  void ***v12; // rdi
  unsigned int v13; // esi
  FxRequestBuffer::<unnamed_type_u> *p_u; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _QWORD *p_ProviderId; // r15
  int Mdl; // ecx
  int _a2; // r14d
  int v19; // ecx
  __int64 (*GetBuffer)(void); // rax
  __int64 v21; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequestContext *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  _MDL *v28; // rcx
  char *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *Offsets; // rcx
  _MDL *v31; // rcx
  PVOID v32; // rax
  void **bufs[3]; // [rsp+40h] [rbp-58h] BYREF
  void *Caller; // [rsp+98h] [rbp+0h]

  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  if ( (int)result < 0 )
    return result;
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 2 )
  {
    v23 = (FxRequestContext *)FxPoolAllocator(
                                this->m_Globals,
                                &this->m_Globals->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0x70uLL,
                                this->m_Globals->Tag,
                                Caller);
    m_RequestContext = v23;
    if ( !v23 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x35u, WPP_FxIoTarget_cpp_Traceguids);
      return 3221225626LL;
    }
    v23->m_RequestMemory = 0LL;
    v23->m_RequestType = 2;
    v23->m_CompletionParams.IoStatus.Pointer = 0LL;
    v23->m_CompletionParams.IoStatus.Information = 0LL;
    v23->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v23->m_CompletionParams.Parameters.Write.Length = 0LL;
    v23->m_CompletionParams.Parameters.Write.Offset = 0LL;
    v23->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    v23->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
    v23->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v23->m_CompletionParams.Size = 72;
    v23->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v23->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v23->__vftable = (FxRequestContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
    v23[1].__vftable = 0LL;
    *(_QWORD *)&v23[1].m_CompletionParams.Size = 0LL;
    FxRequestBase::SetContext(Request, v23);
  }
  m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffers);
  if ( Buffers[1].DataType == FxRequestBufferMemory )
  {
    v24 = 130LL;
  }
  else
  {
    if ( Buffers[1].DataType != FxRequestBufferReferencedMdl )
    {
      Memory = 0LL;
      goto LABEL_7;
    }
    v24 = 135LL;
  }
  Buffers[1].u.Memory.Memory->AddRef(
    Buffers[1].u.Memory.Memory,
    m_RequestContext,
    v24,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  Memory = Buffers[1].u.Memory.Memory;
LABEL_7:
  m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Memory;
  if ( Buffers[2].DataType == FxRequestBufferMemory )
  {
    v25 = 130LL;
    goto LABEL_34;
  }
  if ( Buffers[2].DataType == FxRequestBufferReferencedMdl )
  {
    v25 = 135LL;
LABEL_34:
    Buffers[2].u.Memory.Memory->AddRef(
      Buffers[2].u.Memory.Memory,
      m_RequestContext,
      v25,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    v11 = Buffers[2].u.Memory.Memory;
    goto LABEL_10;
  }
  v11 = 0LL;
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
    if ( !Mdl )
    {
      *p_ProviderId = 0LL;
      _a2 = 0;
      goto LABEL_17;
    }
    v19 = Mdl - 1;
    if ( !v19 )
    {
      GetBuffer = (__int64 (*)(void))p_u->Memory.Memory->GetBuffer;
      if ( p_u->Memory.Offsets )
        v21 = p_u->Memory.Offsets->BufferOffset + GetBuffer();
      else
        v21 = GetBuffer();
      *p_ProviderId = v21;
      _a2 = 0;
      ++v13;
      goto LABEL_18;
    }
    v26 = v19 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( !v27 )
      {
        _a2 = 0;
        *p_ProviderId = p_u->Memory.Memory;
        ++v13;
        goto LABEL_18;
      }
      if ( v27 != 1 )
      {
        _a2 = -1073741811;
LABEL_17:
        ++v13;
        if ( _a2 < 0 )
          goto LABEL_54;
        goto LABEL_18;
      }
      v28 = p_u->RefMdl.Mdl;
      if ( (v28->MdlFlags & 5) != 0 )
        MappedSystemVa = (char *)v28->MappedSystemVa;
      else
        MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v28, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
      *p_ProviderId = MappedSystemVa;
      if ( !MappedSystemVa )
      {
        _a2 = -1073741670;
        ++v13;
LABEL_54:
        WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTarget_cpp_Traceguids, v13, _a2);
        FxRequestBase::ContextReleaseAndRestore(Request);
        return (unsigned int)_a2;
      }
      Offsets = p_u->Memory.Offsets;
      if ( Offsets )
        *p_ProviderId = &MappedSystemVa[Offsets->BufferOffset];
      _a2 = 0;
      ++v13;
    }
    else
    {
      v31 = (_MDL *)p_u->Memory.Memory;
      if ( (BYTE2(p_u->Memory.Memory[1].__vftable) & 5) != 0 )
        v32 = v31->MappedSystemVa;
      else
        v32 = MmMapLockedPagesSpecifyCache(v31, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
      ++v13;
      *p_ProviderId = v32;
      if ( !v32 )
      {
        _a2 = -1073741670;
        goto LABEL_54;
      }
      _a2 = 0;
    }
LABEL_18:
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
  return (unsigned int)_a2;
}
