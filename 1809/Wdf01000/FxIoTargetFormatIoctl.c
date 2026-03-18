/*
 * XREFs of FxIoTargetFormatIoctl @ 0x1C0005630
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C00055D0 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x1C00656C0 (imp_WdfIoTargetFormatRequestForIoctl.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006540 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001A20C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0058CA8 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C0064FA0 (WPP_IFR_SF_qqDdqq.c)
 */

__int64 __fastcall FxIoTargetFormatIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        __int64 Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  WDFIOTARGET__ *v10; // rbx
  FxRequest *v11; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  WDFMEMORY__ *v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int8 v15; // di
  __int64 v16; // rdx
  IFxMemory *v17; // rcx
  _WDFMEMORY_OFFSET *v18; // r13
  __int64 v19; // rdx
  unsigned __int16 *v20; // rdi
  IFxMemory v21; // rax
  unsigned __int8 v22; // dl
  unsigned int v23; // r8d
  unsigned __int16 v24; // r9
  __int64 v25; // rax
  _WDFMEMORY_OFFSET *v26; // r13
  int v27; // edi
  bool v28; // zf
  IFxMemory_vtbl *v29; // rdx
  int v30; // ecx
  _WDFMEMORY_OFFSET *v31; // rax
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  int v36; // eax
  unsigned __int16 v37; // r9
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  FxRequestBuffer *v41; // [rsp+28h] [rbp-B1h]
  FxFileObject *_a6; // [rsp+38h] [rbp-A1h]
  FxRequest *pRequest; // [rsp+68h] [rbp-71h] BYREF
  IFxMemory *pOutputMemory; // [rsp+70h] [rbp-69h] BYREF
  void *PPObject; // [rsp+78h] [rbp-61h] BYREF
  IFxMemory **p_pInputMemory; // [rsp+80h] [rbp-59h] BYREF
  FxRequestBuffer inputBuf; // [rsp+88h] [rbp-51h] BYREF
  FxRequestBuffer outputBuf; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-11h]
  unsigned int v50; // [rsp+118h] [rbp+3Fh]
  IFxMemory *pInputMemory; // [rsp+120h] [rbp+47h] BYREF
  unsigned int v52; // [rsp+130h] [rbp+57h]

  v52 = Ioctl;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  v10 = (WDFIOTARGET__ *)IoTarget;
  *(_QWORD *)&outputBuf.DataType = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  v49 = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v11 = (FxRequest *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    IoTarget = LOWORD(v11->__vftable);
    v11 = (FxRequest *)((char *)v11 - IoTarget);
  }
  if ( v11->m_Type == 4608 )
  {
    pRequest = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pRequest, v10, 0x1200u, IoTarget);
    Ioctl = v52;
  }
  m_Globals = pRequest->m_Globals;
  v13 = OutputBuffer;
  v14 = (unsigned __int64)InputBuffer;
  v15 = Internal;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDdqq(
      m_Globals,
      IoTarget,
      0,
      Ioctl,
      (const _GUID *)v41,
      v10,
      (const void *)Request,
      Ioctl,
      Internal,
      InputBuffer,
      OutputBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v16) = 0;
  v17 = (IFxMemory *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v16 = LOWORD(v17->__vftable);
    v17 = (IFxMemory *)((char *)v17 - v16);
  }
  if ( LOWORD(v17[1].__vftable) == 4104 )
    pOutputMemory = v17;
  else
    FxObjectHandleGetPtrQI((FxObject *)v17, (void **)&pOutputMemory, (void *)Request, 0x1008u, v16);
  v18 = InputBufferOffsets;
  if ( v14 )
  {
    LOWORD(v19) = 0;
    v20 = (unsigned __int16 *)(~v14 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v14 & 1) != 0 )
    {
      v19 = *v20;
      v20 = (unsigned __int16 *)((char *)v20 - v19);
    }
    if ( v20[4] == 4106 )
    {
      pInputMemory = (IFxMemory *)v20;
    }
    else
    {
      pInputMemory = 0LL;
      p_pInputMemory = &pInputMemory;
      v21.__vftable = *(IFxMemory_vtbl **)v20;
      HIWORD(inputBuf.DataType) = v19;
      LOWORD(inputBuf.DataType) = 4106;
      if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))v21.GetDriverGlobals)(v20, &p_pInputMemory) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v20 + 2),
          v22,
          v23,
          v24,
          (const _GUID *)v41,
          (const void *)v14,
          0x100Au,
          v20,
          v20[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v20 + 2), WDF_INVALID_HANDLE, v14, 0x100AuLL);
      }
      v20 = (unsigned __int16 *)pInputMemory;
    }
    if ( !v18 )
      goto LABEL_20;
    BufferLength = v18->BufferLength;
    v34 = BufferLength + v18->BufferOffset;
    if ( v34 >= BufferLength )
    {
      v35 = BufferLength + v18->BufferOffset;
      if ( v35 <= (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v20 + 8LL))(v20) )
      {
        v20 = (unsigned __int16 *)pInputMemory;
LABEL_20:
        v25 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v20 + 16LL))(v20);
        inputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v20;
        v15 = Internal;
        inputBuf.u.RefMdl.Mdl = (_MDL *)v18;
        if ( v25 )
        {
          LODWORD(inputBuf.u.Memory.Memory) = 4;
          *(_QWORD *)&outputBuf.DataType = v25;
        }
        else
        {
          LODWORD(inputBuf.u.Memory.Memory) = 1;
        }
        goto LABEL_22;
      }
      v36 = -1073741675;
      v50 = -1073741675;
    }
    else
    {
      v36 = v34 < BufferLength ? 0xC0000095 : 0;
      v50 = v36;
    }
    v37 = 44;
    goto LABEL_53;
  }
LABEL_22:
  v26 = OutputBufferOffsets;
  if ( v13 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v13, 0x100Au, &PPObject);
    if ( !v26 )
    {
LABEL_34:
      FxRequestBuffer::SetMemory((FxRequestBuffer *)&outputBuf.u, (IFxMemory *)PPObject, v26);
      goto LABEL_23;
    }
    v38 = v26->BufferLength;
    v39 = v38 + v26->BufferOffset;
    if ( v39 >= v38 )
    {
      v40 = v38 + v26->BufferOffset;
      if ( v40 <= (*(__int64 (__fastcall **)(void *))(*(_QWORD *)PPObject + 8LL))(PPObject) )
        goto LABEL_34;
      v36 = -1073741675;
      v50 = -1073741675;
    }
    else
    {
      v36 = v39 < v38 ? 0xC0000095 : 0;
      v50 = v36;
    }
    v37 = 45;
LABEL_53:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v37, WPP_FxIoTargetAPI_cpp_Traceguids, v36);
    return v50;
  }
LABEL_23:
  v27 = FxIoTarget::FormatIoctlRequest(
          (FxIoTarget *)pRequest,
          (FxRequestBase *)pOutputMemory,
          v52,
          v15,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u,
          _a6);
  if ( v27 >= 0 )
  {
    v28 = Internal == 0;
    v29 = pOutputMemory[21].__vftable;
    v30 = 14;
    LODWORD(v29->GetFlags) = v52;
    if ( !v28 )
      v30 = 15;
    v31 = InputBufferOffsets;
    HIDWORD(v29->GetBufferSize) = v30;
    v29->GetDriverGlobals = (_FX_DRIVER_GLOBALS *(__fastcall *)(IFxMemory *))v14;
    if ( v31 )
      v29->AddRef = (unsigned int (__fastcall *)(IFxMemory *, void *, int, const char *))v31->BufferOffset;
    v29->Release = (unsigned int (__fastcall *)(IFxMemory *, void *, int, const char *))v13;
    if ( v26 )
      v29->Delete = (void (__fastcall *)(IFxMemory *))v26->BufferOffset;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v10, Request, v27);
  return (unsigned int)v27;
}
