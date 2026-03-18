/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0005000
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0004BF0 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C000EA98 (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0072ED4 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C007605C (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C000E9E4 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C0019A2C (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050258 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0095D78 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C00962C8 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer)
{
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  CCHAR m_TargetStackSize; // cl
  FxRequestContext *v13; // rbx
  FxRequestContext *v14; // rax
  FxRequestContext *v15; // rcx
  FxRequestBuffer *v16; // r13
  FxRequestBuffer *v17; // r15
  IFxMemory *Memory; // rax
  unsigned __int8 v19; // dl
  unsigned __int64 BufferLength; // r14
  _WDFMEMORY_OFFSET *Offsets; // rax
  int v22; // eax
  unsigned int Length; // r15d
  FxRequestBuffer *v24; // r8
  unsigned int v25; // r12d
  unsigned __int64 v26; // r12
  FxRequestBufferType DataType; // ecx
  __int64 (*GetBuffer)(void); // rax
  char *v29; // rdx
  char *v30; // rax
  FxRequestBuffer *v31; // r14
  char *MappedSystemVa; // rdx
  FX_POOL_TRACKER *v33; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v34; // rdx
  int v35; // r14d
  _FX_DRIVER_GLOBALS *v36; // rax
  _IRP *Irp; // rax
  unsigned __int8 v39; // r8
  _IRP *v40; // rax
  _IRP *v41; // rbx
  __int32 v42; // ecx
  __int32 v43; // ecx
  __int64 v44; // r8
  _WDFMEMORY_OFFSET *v45; // rax
  __int64 (*v46)(void); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int _a3; // r14d
  unsigned __int16 m_ObjectSize; // ax
  const void *v50; // rbp
  unsigned __int16 v51; // r9
  unsigned __int16 v52; // ax
  unsigned __int64 _a2; // rbp
  bool v54; // zf
  FxRequestBase *v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  FxRequestBase *v58; // rax
  _WDFMEMORY_OFFSET *v59; // rax
  _WDFMEMORY_OFFSET *v60; // rax
  unsigned __int64 v61; // rcx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int Buffer; // eax
  int Mdl; // eax
  _IRP::<unnamed_type_AssociatedIrp> v67; // rcx
  _MDL *v68; // rcx
  _WDFMEMORY_OFFSET *v69; // rcx
  IFxMemory *v70; // rcx
  unsigned __int16 v71; // r9
  _MDL *v72; // rcx
  _WDFMEMORY_OFFSET *v73; // rcx
  IFxMemory *v74; // rcx
  void *Caller; // [rsp+78h] [rbp+0h]
  char v76; // [rsp+80h] [rbp+8h]
  void *pBuffer; // [rsp+88h] [rbp+10h] BYREF

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  v76 = 0;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      ((void (__fastcall *)(FxRequestContext *))m_RequestContext->ReleaseAndRestore)(m_RequestContext);
      m_Globals = Request->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags(Request, 128);
      }
    }
  }
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    _a3 = -1073741436;
    m_ObjectSize = this->m_ObjectSize;
    v50 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v50 = 0LL;
    WPP_IFR_SF_qL(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v50, 0xC0000184);
    return _a3;
  }
  if ( !m_Irp )
    goto LABEL_64;
  if ( m_Irp->CurrentLocation <= m_TargetStackSize )
  {
    if ( Request->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      v51 = 13;
LABEL_89:
      v52 = this->m_ObjectSize;
      _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      v54 = v52 == 0;
      v55 = Request;
      if ( v54 )
        _a2 = 0LL;
      v56 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v56 = 0LL;
      if ( v56 )
        v55 = (FxRequestBase *)v56;
      WPP_IFR_SF_qid(Request->m_Globals, 2u, 0xEu, v51, WPP_FxRequestBase_cpp_Traceguids, v55, _a2, _a3);
      return _a3;
    }
LABEL_64:
    Irp = IoAllocateIrp(m_TargetStackSize, 0);
    if ( Irp )
    {
      v40 = FxRequestBase::SetSubmitIrp(Request, Irp, v39);
      Request->m_IrpAllocation = 1;
      v41 = v40;
      if ( v40 )
      {
        if ( Request->m_Globals->FxVerboseOn )
        {
          v57 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
          v58 = Request;
          if ( !Request->m_ObjectSize )
            v57 = 0LL;
          if ( v57 )
            v58 = (FxRequestBase *)v57;
          WPP_IFR_SF_qq(Request->m_Globals, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v41, v58);
        }
        IoFreeIrp(v41);
      }
      goto LABEL_5;
    }
    _a3 = -1073741670;
    v51 = 12;
    goto LABEL_89;
  }
LABEL_5:
  v13 = Request->m_RequestContext;
  if ( v13 && v13->m_RequestType == 1 )
    goto LABEL_11;
  v14 = (FxRequestContext *)FxPoolAllocator(
                              this->m_Globals,
                              &this->m_Globals->FxPoolFrameworks,
                              ExDefaultNonPagedPoolType,
                              0xB0uLL,
                              this->m_Globals->Tag,
                              Caller);
  v13 = v14;
  if ( v14 )
  {
    v14->m_RequestMemory = 0LL;
    v14->m_RequestType = 1;
    v14->m_CompletionParams.IoStatus.Pointer = 0LL;
    v14->m_CompletionParams.IoStatus.Information = 0LL;
    v14->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v14->m_CompletionParams.Parameters.Write.Length = 0LL;
    v14->m_CompletionParams.Parameters.Write.Offset = 0LL;
    v14->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    v14->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
    v14->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v14->m_CompletionParams.Size = 72;
    v14->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v14->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v14->__vftable = (FxRequestContext_vtbl *)FxIoContext::`vftable';
    v14[1].__vftable = 0LL;
    *(_QWORD *)&v14[1].m_CompletionParams.Size = 0LL;
    v14[1].m_CompletionParams.IoStatus.Pointer = 0LL;
    v14[1].m_CompletionParams.IoStatus.Information = 0LL;
    v14[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v14[1].m_CompletionParams.Parameters.Write.Offset = 0LL;
    v14[1].m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    *((_WORD *)&v14[1].m_CompletionParams.Parameters.Usb + 16) = 0;
    *((_BYTE *)&v14[1].m_CompletionParams.Parameters.Usb + 34) = 0;
    v14[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v15 = Request->m_RequestContext;
    if ( v15 != v14 )
    {
      if ( v15 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v15->~FxRequestContext)(v15, 1LL);
      Request->m_RequestContext = v13;
    }
LABEL_11:
    *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    *(_QWORD *)&v13[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    v13[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    v13[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&v13[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    memset(&Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1], 0, 0x38uLL);
    v16 = InputBuffer;
    v13->StoreAndReferenceMemory(v13, InputBuffer);
    v17 = OutputBuffer;
    if ( OutputBuffer->DataType == FxRequestBufferMemory )
    {
      v44 = 130LL;
    }
    else
    {
      if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        Memory = 0LL;
        goto LABEL_14;
      }
      v44 = 135LL;
    }
    OutputBuffer->u.Memory.Memory->AddRef(
      OutputBuffer->u.Memory.Memory,
      v13,
      v44,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    Memory = v17->u.Memory.Memory;
LABEL_14:
    v13[1].m_CompletionParams.Parameters.Ioctl.Output.Length = (unsigned __int64)Memory;
    v19 = (Internal != 0) + 14;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v19;
    *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 35) = v19;
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    switch ( v16->DataType )
    {
      case FxRequestBufferMemory:
        Offsets = v16->u.Memory.Offsets;
        if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
        {
          BufferLength = Offsets->BufferLength;
          if ( BufferLength )
            goto LABEL_26;
          v22 = v16->u.Memory.Memory->GetBufferSize(v16->u.Memory.Memory) - v16->u.Memory.Offsets->BufferOffset;
LABEL_25:
          LODWORD(BufferLength) = v22;
          goto LABEL_26;
        }
        break;
      case FxRequestBufferMdl:
      case FxRequestBufferBuffer:
        LODWORD(BufferLength) = v16->u.Mdl.Length;
        goto LABEL_26;
      case FxRequestBufferReferencedMdl:
        v59 = v16->u.Memory.Offsets;
        if ( v59 && (v59->BufferOffset || v59->BufferLength) )
        {
          BufferLength = v59->BufferLength;
          if ( !BufferLength )
            LODWORD(BufferLength) = v16->u.Memory.Memory->GetBufferSize(v16->u.Memory.Memory)
                                  - v16->u.Memory.Offsets->BufferOffset;
LABEL_26:
          if ( v17->DataType < FxRequestBufferMemory )
            goto LABEL_27;
          switch ( v17->DataType )
          {
            case FxRequestBufferMemory:
              v45 = v17->u.Memory.Offsets;
              if ( v45 && (v45->BufferOffset || v45->BufferLength) )
              {
                v61 = v45->BufferLength;
                if ( !v61 )
                {
                  Length = v17->u.Memory.Memory->GetBufferSize(v17->u.Memory.Memory)
                         - v17->u.Memory.Offsets->BufferOffset;
                  goto LABEL_28;
                }
                goto LABEL_120;
              }
              break;
            case FxRequestBufferMdl:
            case FxRequestBufferBuffer:
              Length = v17->u.Mdl.Length;
              goto LABEL_28;
            case FxRequestBufferReferencedMdl:
              v60 = v17->u.Memory.Offsets;
              if ( v60 && (v60->BufferOffset || v60->BufferLength) )
              {
                v61 = v60->BufferLength;
                if ( !v61 )
                {
                  v62 = v17->u.Memory.Memory->GetBufferSize(v17->u.Memory.Memory);
                  v24 = OutputBuffer;
                  Length = v62 - OutputBuffer->u.Memory.Offsets->BufferOffset;
LABEL_29:
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = BufferLength;
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = Length;
                  v25 = Ioctl & 3;
                  if ( v25 )
                  {
                    if ( v25 <= 2 )
                    {
                      Buffer = FxRequestBuffer::GetBuffer(v16, &pBuffer);
                      v35 = Buffer;
                      if ( Buffer >= 0 )
                      {
                        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)pBuffer;
                        Mdl = FxRequestBuffer::GetOrAllocateMdl(
                                OutputBuffer,
                                this->m_Globals,
                                &Request->m_Irp.m_Irp->MdlAddress,
                                (_MDL **)&v13[1].m_CompletionParams.IoStatus.Information,
                                (unsigned __int8 *)&v13[1].m_CompletionParams.Parameters.Usb + 33,
                                (_LOCK_OPERATION)(v25 != 1),
                                v13[1].m_CompletionParams.IoStatus.Information != 0,
                                &v13[1].m_CompletionParams.Parameters.Others.Argument4.Value);
                        v35 = Mdl;
                        if ( Mdl >= 0 )
                          goto LABEL_48;
                        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTargetKm_cpp_Traceguids, Mdl);
                      }
                      else
                      {
                        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
                      }
                    }
                    else
                    {
                      v63 = FxRequestBuffer::GetBuffer(v24, &pBuffer);
                      v35 = v63;
                      if ( v63 >= 0 )
                      {
                        Request->m_Irp.m_Irp->UserBuffer = pBuffer;
                        v64 = FxRequestBuffer::GetBuffer(v16, &pBuffer);
                        v35 = v64;
                        if ( v64 >= 0 )
                          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)pBuffer;
                        else
                          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxIoTargetKm_cpp_Traceguids, v64);
                      }
                      else
                      {
                        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x16u, WPP_FxIoTargetKm_cpp_Traceguids, v63);
                      }
                    }
LABEL_52:
                    if ( v35 < 0 )
                    {
                      if ( v76 )
                      {
                        FxPoolFree((FX_POOL_TRACKER *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                      }
                      goto LABEL_170;
                    }
LABEL_48:
                    v36 = Request->m_Globals;
                    if ( v36->FxVerifierOn )
                    {
                      if ( v36->FxVerifierIO )
                        FxRequestBase::SetVerifierFlags(Request, 128);
                    }
                    return (unsigned int)v35;
                  }
                  if ( !(_DWORD)BufferLength && !Length )
                  {
                    v35 = 0;
                    Request->m_Irp.m_Irp->UserBuffer = 0LL;
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                    goto LABEL_52;
                  }
                  v26 = (unsigned int)BufferLength;
                  if ( (unsigned int)BufferLength <= Length )
                    v26 = Length;
                  if ( v13[1].m_CompletionParams.Parameters.Write.Offset >= v26
                    && (v67.MasterIrp = (_IRP *)v13[1].__vftable) != 0LL )
                  {
                    Request->m_Irp.m_Irp->AssociatedIrp = v67;
                  }
                  else
                  {
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                              this->m_Globals,
                                                                              &this->m_Globals->FxPoolFrameworks,
                                                                              ExDefaultNonPagedPoolType,
                                                                              v26,
                                                                              this->m_Globals->Tag,
                                                                              Caller);
                    if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
                    {
                      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
                      v35 = -1073741670;
LABEL_170:
                      FxRequestBase::ContextReleaseAndRestore(Request);
                      return (unsigned int)v35;
                    }
                    v76 = 1;
                  }
                  DataType = v16->DataType;
                  if ( v16->DataType == FxRequestBufferMemory )
                  {
                    GetBuffer = (__int64 (*)(void))v16->u.Memory.Memory->GetBuffer;
                    if ( v16->u.Memory.Offsets )
                      v29 = (char *)(v16->u.Memory.Offsets->BufferOffset + GetBuffer());
                    else
                      v29 = (char *)GetBuffer();
                    goto LABEL_39;
                  }
                  if ( DataType == FxRequestBufferUnspecified )
                  {
LABEL_42:
                    v31 = OutputBuffer;
                    switch ( OutputBuffer->DataType )
                    {
                      case FxRequestBufferUnspecified:
                        MappedSystemVa = 0LL;
LABEL_44:
                        Request->m_Irp.m_Irp->UserBuffer = MappedSystemVa;
                        if ( v76 )
                        {
                          v33 = (FX_POOL_TRACKER *)v13[1].__vftable;
                          v34.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
                          *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 32) = Length != 0;
                          v13[1].__vftable = (FxRequestContext_vtbl *)v34.MasterIrp;
                          v13[1].m_CompletionParams.Parameters.Write.Offset = v26;
                          if ( v33 )
                            FxPoolFree(v33);
                        }
                        else
                        {
                          *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 32) = Length != 0;
                        }
                        v35 = 0;
                        goto LABEL_48;
                      case FxRequestBufferMemory:
                        v46 = (__int64 (*)(void))OutputBuffer->u.Memory.Memory->GetBuffer;
                        if ( OutputBuffer->u.Memory.Offsets )
                          MappedSystemVa = (char *)(v31->u.Memory.Offsets->BufferOffset + v46());
                        else
                          MappedSystemVa = (char *)v46();
                        goto LABEL_44;
                      case FxRequestBufferMdl:
                        v74 = OutputBuffer->u.Memory.Memory;
                        if ( (BYTE2(v74[1].__vftable) & 5) != 0 )
                          MappedSystemVa = (char *)v74[3].__vftable;
                        else
                          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                     (PMDL)v74,
                                                     0,
                                                     MmCached,
                                                     0LL,
                                                     0,
                                                     ExDefaultMdlProtection | 0x10);
                        if ( MappedSystemVa )
                          goto LABEL_44;
                        break;
                      case FxRequestBufferBuffer:
                        MappedSystemVa = (char *)OutputBuffer->u.Memory.Memory;
                        goto LABEL_44;
                      case FxRequestBufferReferencedMdl:
                        v72 = OutputBuffer->u.RefMdl.Mdl;
                        if ( (v72->MdlFlags & 5) != 0 )
                          MappedSystemVa = (char *)v72->MappedSystemVa;
                        else
                          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                     v72,
                                                     0,
                                                     MmCached,
                                                     0LL,
                                                     0,
                                                     ExDefaultMdlProtection | 0x10);
                        if ( MappedSystemVa )
                        {
                          v73 = v31->u.Memory.Offsets;
                          if ( v73 )
                            MappedSystemVa += v73->BufferOffset;
                          goto LABEL_44;
                        }
                        break;
                      default:
                        v35 = -1073741811;
LABEL_166:
                        v71 = 19;
                        goto LABEL_167;
                    }
                    v35 = -1073741670;
                    goto LABEL_166;
                  }
                  v42 = DataType - 2;
                  if ( v42 )
                  {
                    v43 = v42 - 1;
                    if ( !v43 )
                    {
                      v29 = (char *)v16->u.Memory.Memory;
LABEL_39:
                      v30 = v29;
                      goto LABEL_40;
                    }
                    if ( v43 != 1 )
                    {
                      v35 = -1073741811;
LABEL_151:
                      v71 = 18;
LABEL_167:
                      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v71, WPP_FxIoTargetKm_cpp_Traceguids, v35);
                      goto LABEL_52;
                    }
                    v68 = v16->u.RefMdl.Mdl;
                    if ( (v68->MdlFlags & 5) != 0 )
                      v29 = (char *)v68->MappedSystemVa;
                    else
                      v29 = (char *)MmMapLockedPagesSpecifyCache(
                                      v68,
                                      0,
                                      MmCached,
                                      0LL,
                                      0,
                                      ExDefaultMdlProtection | 0x10);
                    if ( v29 )
                    {
                      v69 = v16->u.Memory.Offsets;
                      v30 = v29;
                      if ( v69 )
                      {
                        v30 = &v29[v69->BufferOffset];
                        v29 = v30;
                      }
LABEL_40:
                      if ( !v30 )
                        goto LABEL_42;
                      goto LABEL_41;
                    }
                  }
                  else
                  {
                    v70 = v16->u.Memory.Memory;
                    if ( (BYTE2(v70[1].__vftable) & 5) != 0 )
                      v29 = (char *)v70[3].__vftable;
                    else
                      v29 = (char *)MmMapLockedPagesSpecifyCache(
                                      (PMDL)v70,
                                      0,
                                      MmCached,
                                      0LL,
                                      0,
                                      ExDefaultMdlProtection | 0x10);
                    if ( v29 )
                    {
LABEL_41:
                      memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, v29, (unsigned int)BufferLength);
                      goto LABEL_42;
                    }
                  }
                  v35 = -1073741670;
                  goto LABEL_151;
                }
LABEL_120:
                Length = v61;
                goto LABEL_28;
              }
              break;
            default:
LABEL_27:
              Length = 0;
LABEL_28:
              v24 = OutputBuffer;
              goto LABEL_29;
          }
          Length = v17->u.Memory.Memory->GetBufferSize(v17->u.Memory.Memory);
          goto LABEL_28;
        }
        break;
      default:
        LODWORD(BufferLength) = 0;
        goto LABEL_26;
    }
    v22 = v16->u.Memory.Memory->GetBufferSize(v16->u.Memory.Memory);
    goto LABEL_25;
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
  return 3221225626LL;
}
