/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006540
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0005630 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C000E5D8 (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C00728F4 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0075A78 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C000E524 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C0019CA0 (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B860 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050968 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0093A68 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0093FB4 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
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
  unsigned __int8 v9; // di
  CCHAR m_TargetStackSize; // cl
  FxRequestContext *v13; // rbx
  FxRequestContext *v14; // rax
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // rdi
  FxRequestContext *v16; // rcx
  FxRequestBuffer *v17; // r13
  FxRequestBuffer *v18; // r15
  IFxMemory *Memory; // rax
  unsigned __int8 v20; // dl
  unsigned __int64 BufferLength; // rdi
  _WDFMEMORY_OFFSET *Offsets; // rax
  int v23; // eax
  unsigned int Length; // r15d
  FxRequestBuffer *v25; // r8
  unsigned int v26; // r12d
  unsigned __int64 v27; // r12
  FxRequestBufferType DataType; // ecx
  __int64 (*GetBuffer)(void); // rax
  char *v30; // rdx
  char *v31; // rax
  FxRequestBuffer *v32; // rdi
  char *MappedSystemVa; // rdx
  FX_POOL_TRACKER *v34; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v35; // rdx
  int v36; // edi
  _FX_DRIVER_GLOBALS *v37; // rax
  _IRP *Irp; // rax
  unsigned __int8 v40; // r8
  _IRP *v41; // rax
  _IRP *v42; // rbx
  __int32 v43; // ecx
  __int32 v44; // ecx
  __int64 v45; // r8
  _WDFMEMORY_OFFSET *v46; // rax
  __int64 (*v47)(void); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int _a3; // edi
  unsigned __int16 m_ObjectSize; // ax
  const void *v51; // r14
  unsigned __int16 v52; // r9
  unsigned __int16 v53; // ax
  unsigned __int64 _a2; // r14
  bool v55; // zf
  FxRequestBase *v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  FxRequestBase *v59; // rax
  _WDFMEMORY_OFFSET *v60; // rax
  _WDFMEMORY_OFFSET *v61; // rax
  unsigned __int64 v62; // rcx
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int Buffer; // eax
  int Mdl; // eax
  _IRP::<unnamed_type_AssociatedIrp> v68; // rcx
  _MDL *v69; // rcx
  _WDFMEMORY_OFFSET *v70; // rcx
  IFxMemory *v71; // rcx
  unsigned __int16 v72; // r9
  _MDL *v73; // rcx
  _WDFMEMORY_OFFSET *v74; // rcx
  IFxMemory *v75; // rcx
  void *Caller; // [rsp+78h] [rbp+0h]
  char v77; // [rsp+80h] [rbp+8h]
  void *pBuffer; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v79; // [rsp+98h] [rbp+20h]

  v79 = Internal;
  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  v9 = Internal;
  v77 = 0;
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
    v51 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v51 = 0LL;
    WPP_IFR_SF_qL(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v51, 0xC0000184);
    return _a3;
  }
  if ( !m_Irp )
    goto LABEL_65;
  if ( m_Irp->CurrentLocation <= m_TargetStackSize )
  {
    if ( Request->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      v52 = 13;
LABEL_90:
      v53 = this->m_ObjectSize;
      _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      v55 = v53 == 0;
      v56 = Request;
      if ( v55 )
        _a2 = 0LL;
      v57 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v57 = 0LL;
      if ( v57 )
        v56 = (FxRequestBase *)v57;
      WPP_IFR_SF_qid(Request->m_Globals, 2u, 0xEu, v52, WPP_FxRequestBase_cpp_Traceguids, v56, _a2, _a3);
      return _a3;
    }
LABEL_65:
    Irp = IoAllocateIrp(m_TargetStackSize, 0);
    if ( Irp )
    {
      v41 = FxRequestBase::SetSubmitIrp(Request, Irp, v40);
      Request->m_IrpAllocation = 1;
      v42 = v41;
      if ( v41 )
      {
        if ( Request->m_Globals->FxVerboseOn )
        {
          v58 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
          v59 = Request;
          if ( !Request->m_ObjectSize )
            v58 = 0LL;
          if ( v58 )
            v59 = (FxRequestBase *)v58;
          WPP_IFR_SF_qq(Request->m_Globals, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v42, v59);
        }
        IoFreeIrp(v42);
      }
      goto LABEL_5;
    }
    _a3 = -1073741670;
    v52 = 12;
    goto LABEL_90;
  }
LABEL_5:
  v13 = Request->m_RequestContext;
  if ( v13 && v13->m_RequestType == 1 )
    goto LABEL_12;
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
    p_m_CompletionParams = &v14->m_CompletionParams;
    v14->m_RequestType = 1;
    memset(&v14->m_CompletionParams, 0, sizeof(v14->m_CompletionParams));
    p_m_CompletionParams->Size = 72;
    p_m_CompletionParams->Type = WdfRequestTypeNoFormat;
    v13->__vftable = (FxRequestContext_vtbl *)FxIoContext::`vftable';
    v13->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v13[1].__vftable = 0LL;
    *(_QWORD *)&v13[1].m_CompletionParams.Size = 0LL;
    v13[1].m_CompletionParams.IoStatus.Pointer = 0LL;
    v13[1].m_CompletionParams.IoStatus.Information = 0LL;
    v13[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v13[1].m_CompletionParams.Parameters.Write.Offset = 0LL;
    v13[1].m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    *((_WORD *)&v13[1].m_CompletionParams.Parameters.Usb + 16) = 0;
    *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 34) = 0;
    v13[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v16 = Request->m_RequestContext;
    if ( v16 != v13 )
    {
      if ( v16 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v16->~FxRequestContext)(v16, 1LL);
      Request->m_RequestContext = v13;
    }
    v9 = v79;
LABEL_12:
    *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    *(_QWORD *)&v13[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    v13[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    v13[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&v13[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    memset(&Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1], 0, 0x38uLL);
    v17 = InputBuffer;
    v13->StoreAndReferenceMemory(v13, InputBuffer);
    v18 = OutputBuffer;
    if ( OutputBuffer->DataType == FxRequestBufferMemory )
    {
      v45 = 130LL;
    }
    else
    {
      if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        Memory = 0LL;
        goto LABEL_15;
      }
      v45 = 135LL;
    }
    OutputBuffer->u.Memory.Memory->AddRef(
      OutputBuffer->u.Memory.Memory,
      v13,
      v45,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    Memory = v18->u.Memory.Memory;
LABEL_15:
    v13[1].m_CompletionParams.Parameters.Ioctl.Output.Length = (unsigned __int64)Memory;
    v20 = (v9 != 0) + 14;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v20;
    *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 35) = v20;
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    switch ( v17->DataType )
    {
      case FxRequestBufferMemory:
        Offsets = v17->u.Memory.Offsets;
        if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
        {
          BufferLength = Offsets->BufferLength;
          if ( BufferLength )
            goto LABEL_27;
          v23 = v17->u.Memory.Memory->GetBufferSize(v17->u.Memory.Memory) - v17->u.Memory.Offsets->BufferOffset;
LABEL_26:
          LODWORD(BufferLength) = v23;
          goto LABEL_27;
        }
        break;
      case FxRequestBufferMdl:
      case FxRequestBufferBuffer:
        LODWORD(BufferLength) = v17->u.Mdl.Length;
        goto LABEL_27;
      case FxRequestBufferReferencedMdl:
        v60 = v17->u.Memory.Offsets;
        if ( v60 && (v60->BufferOffset || v60->BufferLength) )
        {
          BufferLength = v60->BufferLength;
          if ( !BufferLength )
            LODWORD(BufferLength) = v17->u.Memory.Memory->GetBufferSize(v17->u.Memory.Memory)
                                  - v17->u.Memory.Offsets->BufferOffset;
LABEL_27:
          if ( v18->DataType < FxRequestBufferMemory )
            goto LABEL_28;
          switch ( v18->DataType )
          {
            case FxRequestBufferMemory:
              v46 = v18->u.Memory.Offsets;
              if ( v46 && (v46->BufferOffset || v46->BufferLength) )
              {
                v62 = v46->BufferLength;
                if ( !v62 )
                {
                  Length = v18->u.Memory.Memory->GetBufferSize(v18->u.Memory.Memory)
                         - v18->u.Memory.Offsets->BufferOffset;
                  goto LABEL_29;
                }
                goto LABEL_121;
              }
              break;
            case FxRequestBufferMdl:
            case FxRequestBufferBuffer:
              Length = v18->u.Mdl.Length;
              goto LABEL_29;
            case FxRequestBufferReferencedMdl:
              v61 = v18->u.Memory.Offsets;
              if ( v61 && (v61->BufferOffset || v61->BufferLength) )
              {
                v62 = v61->BufferLength;
                if ( !v62 )
                {
                  v63 = v18->u.Memory.Memory->GetBufferSize(v18->u.Memory.Memory);
                  v25 = OutputBuffer;
                  Length = v63 - OutputBuffer->u.Memory.Offsets->BufferOffset;
LABEL_30:
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = BufferLength;
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = Length;
                  v26 = Ioctl & 3;
                  if ( v26 )
                  {
                    if ( v26 <= 2 )
                    {
                      Buffer = FxRequestBuffer::GetBuffer(v17, &pBuffer);
                      v36 = Buffer;
                      if ( Buffer >= 0 )
                      {
                        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)pBuffer;
                        Mdl = FxRequestBuffer::GetOrAllocateMdl(
                                OutputBuffer,
                                this->m_Globals,
                                &Request->m_Irp.m_Irp->MdlAddress,
                                (_MDL **)&v13[1].m_CompletionParams.IoStatus.Information,
                                (unsigned __int8 *)&v13[1].m_CompletionParams.Parameters.Usb + 33,
                                (_LOCK_OPERATION)(v26 != 1),
                                v13[1].m_CompletionParams.IoStatus.Information != 0,
                                &v13[1].m_CompletionParams.Parameters.Others.Argument4.Value);
                        v36 = Mdl;
                        if ( Mdl >= 0 )
                          goto LABEL_49;
                        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTargetKm_cpp_Traceguids, Mdl);
                      }
                      else
                      {
                        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
                      }
                    }
                    else
                    {
                      v64 = FxRequestBuffer::GetBuffer(v25, &pBuffer);
                      v36 = v64;
                      if ( v64 >= 0 )
                      {
                        Request->m_Irp.m_Irp->UserBuffer = pBuffer;
                        v65 = FxRequestBuffer::GetBuffer(v17, &pBuffer);
                        v36 = v65;
                        if ( v65 >= 0 )
                          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)pBuffer;
                        else
                          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxIoTargetKm_cpp_Traceguids, v65);
                      }
                      else
                      {
                        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x16u, WPP_FxIoTargetKm_cpp_Traceguids, v64);
                      }
                    }
LABEL_53:
                    if ( v36 < 0 )
                    {
                      if ( v77 )
                      {
                        FxPoolFree((FX_POOL_TRACKER *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                      }
                      goto LABEL_171;
                    }
LABEL_49:
                    v37 = Request->m_Globals;
                    if ( v37->FxVerifierOn )
                    {
                      if ( v37->FxVerifierIO )
                        FxRequestBase::SetVerifierFlags(Request, 128);
                    }
                    return (unsigned int)v36;
                  }
                  if ( !(_DWORD)BufferLength && !Length )
                  {
                    v36 = 0;
                    Request->m_Irp.m_Irp->UserBuffer = 0LL;
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                    goto LABEL_53;
                  }
                  v27 = (unsigned int)BufferLength;
                  if ( (unsigned int)BufferLength <= Length )
                    v27 = Length;
                  if ( v13[1].m_CompletionParams.Parameters.Write.Offset >= v27
                    && (v68.MasterIrp = (_IRP *)v13[1].__vftable) != 0LL )
                  {
                    Request->m_Irp.m_Irp->AssociatedIrp = v68;
                  }
                  else
                  {
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                              this->m_Globals,
                                                                              &this->m_Globals->FxPoolFrameworks,
                                                                              ExDefaultNonPagedPoolType,
                                                                              v27,
                                                                              this->m_Globals->Tag,
                                                                              Caller);
                    if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
                    {
                      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
                      v36 = -1073741670;
LABEL_171:
                      FxRequestBase::ContextReleaseAndRestore(Request);
                      return (unsigned int)v36;
                    }
                    v77 = 1;
                  }
                  DataType = v17->DataType;
                  if ( v17->DataType == FxRequestBufferMemory )
                  {
                    GetBuffer = (__int64 (*)(void))v17->u.Memory.Memory->GetBuffer;
                    if ( v17->u.Memory.Offsets )
                      v30 = (char *)(v17->u.Memory.Offsets->BufferOffset + GetBuffer());
                    else
                      v30 = (char *)GetBuffer();
                    goto LABEL_40;
                  }
                  if ( DataType == FxRequestBufferUnspecified )
                  {
LABEL_43:
                    v32 = OutputBuffer;
                    switch ( OutputBuffer->DataType )
                    {
                      case FxRequestBufferUnspecified:
                        MappedSystemVa = 0LL;
LABEL_45:
                        Request->m_Irp.m_Irp->UserBuffer = MappedSystemVa;
                        if ( v77 )
                        {
                          v34 = (FX_POOL_TRACKER *)v13[1].__vftable;
                          v35.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
                          *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 32) = Length != 0;
                          v13[1].__vftable = (FxRequestContext_vtbl *)v35.MasterIrp;
                          v13[1].m_CompletionParams.Parameters.Write.Offset = v27;
                          if ( v34 )
                            FxPoolFree(v34);
                        }
                        else
                        {
                          *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 32) = Length != 0;
                        }
                        v36 = 0;
                        goto LABEL_49;
                      case FxRequestBufferMemory:
                        v47 = (__int64 (*)(void))OutputBuffer->u.Memory.Memory->GetBuffer;
                        if ( OutputBuffer->u.Memory.Offsets )
                          MappedSystemVa = (char *)(v32->u.Memory.Offsets->BufferOffset + v47());
                        else
                          MappedSystemVa = (char *)v47();
                        goto LABEL_45;
                      case FxRequestBufferMdl:
                        v75 = OutputBuffer->u.Memory.Memory;
                        if ( (BYTE2(v75[1].__vftable) & 5) != 0 )
                          MappedSystemVa = (char *)v75[3].__vftable;
                        else
                          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                     (PMDL)v75,
                                                     0,
                                                     MmCached,
                                                     0LL,
                                                     0,
                                                     ExDefaultMdlProtection | 0x10);
                        if ( MappedSystemVa )
                          goto LABEL_45;
                        break;
                      case FxRequestBufferBuffer:
                        MappedSystemVa = (char *)OutputBuffer->u.Memory.Memory;
                        goto LABEL_45;
                      case FxRequestBufferReferencedMdl:
                        v73 = OutputBuffer->u.RefMdl.Mdl;
                        if ( (v73->MdlFlags & 5) != 0 )
                          MappedSystemVa = (char *)v73->MappedSystemVa;
                        else
                          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                     v73,
                                                     0,
                                                     MmCached,
                                                     0LL,
                                                     0,
                                                     ExDefaultMdlProtection | 0x10);
                        if ( MappedSystemVa )
                        {
                          v74 = v32->u.Memory.Offsets;
                          if ( v74 )
                            MappedSystemVa += v74->BufferOffset;
                          goto LABEL_45;
                        }
                        break;
                      default:
                        v36 = -1073741811;
LABEL_167:
                        v72 = 19;
                        goto LABEL_168;
                    }
                    v36 = -1073741670;
                    goto LABEL_167;
                  }
                  v43 = DataType - 2;
                  if ( v43 )
                  {
                    v44 = v43 - 1;
                    if ( !v44 )
                    {
                      v30 = (char *)v17->u.Memory.Memory;
LABEL_40:
                      v31 = v30;
                      goto LABEL_41;
                    }
                    if ( v44 != 1 )
                    {
                      v36 = -1073741811;
LABEL_152:
                      v72 = 18;
LABEL_168:
                      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v72, WPP_FxIoTargetKm_cpp_Traceguids, v36);
                      goto LABEL_53;
                    }
                    v69 = v17->u.RefMdl.Mdl;
                    if ( (v69->MdlFlags & 5) != 0 )
                      v30 = (char *)v69->MappedSystemVa;
                    else
                      v30 = (char *)MmMapLockedPagesSpecifyCache(
                                      v69,
                                      0,
                                      MmCached,
                                      0LL,
                                      0,
                                      ExDefaultMdlProtection | 0x10);
                    if ( v30 )
                    {
                      v70 = v17->u.Memory.Offsets;
                      v31 = v30;
                      if ( v70 )
                      {
                        v31 = &v30[v70->BufferOffset];
                        v30 = v31;
                      }
LABEL_41:
                      if ( !v31 )
                        goto LABEL_43;
                      goto LABEL_42;
                    }
                  }
                  else
                  {
                    v71 = v17->u.Memory.Memory;
                    if ( (BYTE2(v71[1].__vftable) & 5) != 0 )
                      v30 = (char *)v71[3].__vftable;
                    else
                      v30 = (char *)MmMapLockedPagesSpecifyCache(
                                      (PMDL)v71,
                                      0,
                                      MmCached,
                                      0LL,
                                      0,
                                      ExDefaultMdlProtection | 0x10);
                    if ( v30 )
                    {
LABEL_42:
                      memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, v30, (unsigned int)BufferLength);
                      goto LABEL_43;
                    }
                  }
                  v36 = -1073741670;
                  goto LABEL_152;
                }
LABEL_121:
                Length = v62;
                goto LABEL_29;
              }
              break;
            default:
LABEL_28:
              Length = 0;
LABEL_29:
              v25 = OutputBuffer;
              goto LABEL_30;
          }
          Length = v18->u.Memory.Memory->GetBufferSize(v18->u.Memory.Memory);
          goto LABEL_29;
        }
        break;
      default:
        LODWORD(BufferLength) = 0;
        goto LABEL_27;
    }
    v23 = v17->u.Memory.Memory->GetBufferSize(v17->u.Memory.Memory);
    goto LABEL_26;
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
  return 3221225626LL;
}
