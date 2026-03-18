/*
 * XREFs of imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0016490
 * Callers:
 *     <none>
 * Callees:
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0016740 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C005880C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0065874 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x1C00659BC (WPP_IFR_SF_qqDqqqd.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForInternalIoctlOthers(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned int Ioctl,
        WDFMEMORY__ *OtherArg1,
        _WDFMEMORY_OFFSET *OtherArg1Offsets,
        WDFMEMORY__ *OtherArg2,
        _WDFMEMORY_OFFSET *OtherArg2Offsets,
        WDFMEMORY__ *OtherArg4,
        _WDFMEMORY_OFFSET *OtherArg4Offsets)
{
  unsigned int _a6; // r10d
  __int64 v13; // rdx
  FxIoTarget *v14; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  __int64 v16; // rdx
  FxRequest *v17; // rcx
  _WDFMEMORY_OFFSET **p_Offsets; // r14
  __int64 v19; // rbx
  unsigned int v20; // esi
  unsigned __int64 v21; // rdi
  int v22; // eax
  FxRequestContext *m_RequestContext; // rdx
  unsigned __int16 v24; // r9
  void *flags; // r8
  unsigned int id; // ebx
  bool v27; // sf
  void *globals; // rax
  void *level; // rcx
  __int64 v31; // rcx
  unsigned __int16 *v32; // r15
  IFxMemory **v33; // r12
  __int64 v34; // rax
  unsigned __int8 v35; // dl
  unsigned int v36; // r8d
  unsigned __int16 v37; // r9
  _WDFMEMORY_OFFSET *v38; // r15
  IFxMemory *v39; // rdi
  __int64 v40; // rax
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v42; // rdi
  const _GUID *Offset; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+68h] [rbp-98h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-90h] BYREF
  void *v47; // [rsp+78h] [rbp-88h]
  void *v48; // [rsp+80h] [rbp-80h]
  void *v49; // [rsp+88h] [rbp-78h]
  IFxMemory **v50; // [rsp+90h] [rbp-70h] BYREF
  __int16 v51; // [rsp+98h] [rbp-68h]
  __int16 v52; // [rsp+9Ah] [rbp-66h]
  int v53; // [rsp+9Ch] [rbp-64h]
  void *v54; // [rsp+A0h] [rbp-60h]
  void *v55; // [rsp+A8h] [rbp-58h]
  WDFMEMORY__ *memoryHandles[3]; // [rsp+B0h] [rbp-50h]
  _WDFMEMORY_OFFSET *offsets[3]; // [rsp+C8h] [rbp-38h]
  FxRequestBuffer args[3]; // [rsp+E0h] [rbp-20h] BYREF
  IFxMemory *pMemory[3]; // [rsp+140h] [rbp+40h] BYREF

  _a6 = Ioctl;
  v54 = (void *)Request;
  v55 = (void *)IoTarget;
  v47 = OtherArg1;
  v48 = OtherArg2;
  v49 = OtherArg4;
  args[0].DataType = FxRequestBufferUnspecified;
  args[0].u.Memory = 0uLL;
  args[0].u.RefMdl.Mdl = 0LL;
  args[1].DataType = FxRequestBufferUnspecified;
  args[1].u.Memory = 0uLL;
  args[1].u.RefMdl.Mdl = 0LL;
  args[2].DataType = FxRequestBufferUnspecified;
  args[2].u.Memory = 0uLL;
  args[2].u.RefMdl.Mdl = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v13) = 0;
  v14 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v13 = LOWORD(v14->__vftable);
    v14 = (FxIoTarget *)((char *)v14 - v13);
  }
  if ( v14->m_Type == 4608 )
  {
    pTarget = v14;
  }
  else
  {
    FxObjectHandleGetPtrQI(v14, (void **)&pTarget, (void *)IoTarget, 0x1200u, v13);
    v14 = pTarget;
    _a6 = Ioctl;
  }
  m_Globals = v14->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(
      m_Globals,
      v13,
      0,
      0x37u,
      Offset,
      (const void *)IoTarget,
      (const void *)Request,
      _a6,
      OtherArg1,
      OtherArg2,
      OtherArg4);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v16) = 0;
  v17 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v16 = LOWORD(v17->__vftable);
    v17 = (FxRequest *)((char *)v17 - v16);
  }
  if ( v17->m_Type == 4104 )
    pRequest = v17;
  else
    FxObjectHandleGetPtrQI(v17, (void **)&pRequest, (void *)Request, 0x1008u, v16);
  p_Offsets = &args[0].u.Memory.Offsets;
  offsets[0] = OtherArg1Offsets;
  offsets[1] = OtherArg2Offsets;
  memoryHandles[0] = OtherArg1;
  v19 = 0LL;
  memoryHandles[2] = OtherArg4;
  v20 = 0;
  offsets[2] = OtherArg4Offsets;
  memoryHandles[1] = OtherArg2;
  do
  {
    v21 = (unsigned __int64)memoryHandles[v19];
    if ( v21 )
    {
      LOWORD(v31) = 0;
      v32 = (unsigned __int16 *)(~v21 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v21 & 1) != 0 )
      {
        v31 = *v32;
        v32 = (unsigned __int16 *)((char *)v32 - v31);
      }
      v33 = &pMemory[v19];
      if ( v32[4] == 4106 )
      {
        *v33 = (IFxMemory *)v32;
      }
      else
      {
        *v33 = 0LL;
        v53 = 0;
        v34 = *(_QWORD *)v32;
        v51 = 4106;
        v52 = v31;
        v50 = &pMemory[v19];
        if ( (*(int (__fastcall **)(unsigned __int16 *, IFxMemory ***))(v34 + 40))(v32, &v50) < 0 )
        {
          WPP_IFR_SF_qDqD(
            *((_FX_DRIVER_GLOBALS **)v32 + 2),
            v35,
            v36,
            v37,
            Offset,
            (const void *)v21,
            0x100Au,
            v32,
            v32[4]);
          FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v32 + 2), WDF_INVALID_HANDLE, v21, 0x100AuLL);
        }
      }
      v38 = offsets[v19];
      if ( v38 )
      {
        BufferLength = v38->BufferLength;
        v42 = BufferLength + v38->BufferOffset;
        if ( v42 < BufferLength || v42 > (*v33)->GetBufferSize(*v33) )
        {
          WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x38u, WPP_FxIoTargetAPI_cpp_Traceguids, v20 + 1, -1073741675);
          return 3221225621LL;
        }
      }
      v39 = *v33;
      v40 = (__int64)(*v33)->GetMdl(*v33);
      *(p_Offsets - 1) = (_WDFMEMORY_OFFSET *)v39;
      *p_Offsets = v38;
      if ( v40 )
      {
        *((_DWORD *)p_Offsets - 4) = 4;
        p_Offsets[1] = (_WDFMEMORY_OFFSET *)v40;
      }
      else
      {
        *((_DWORD *)p_Offsets - 4) = 1;
      }
    }
    ++v20;
    ++v19;
    p_Offsets += 4;
  }
  while ( v20 < 3 );
  v22 = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, pRequest, Ioctl, args);
  flags = v49;
  id = v22;
  v27 = v22 < 0;
  globals = v47;
  if ( v27 )
  {
    level = v48;
  }
  else
  {
    m_RequestContext = pRequest->m_RequestContext;
    level = v48;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeOther;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)globals;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = (unsigned __int64)level;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = (unsigned __int64)flags;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqqd(
      m_Globals,
      (unsigned __int8)m_RequestContext,
      (unsigned int)flags,
      v24,
      Offset,
      v55,
      v54,
      Ioctl,
      globals,
      level,
      flags,
      id);
  return id;
}
