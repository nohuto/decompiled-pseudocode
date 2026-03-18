/*
 * XREFs of FxIoTargetFormatIoctl @ 0x1C0004BF0
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C0004B90 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x1C0065D40 (imp_WdfIoTargetFormatRequestForIoctl.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0005000 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0019DAC (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C005880C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C006561C (WPP_IFR_SF_qqDdqq.c)
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
  FxIoTarget *v11; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  WDFMEMORY__ *v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int8 v15; // di
  __int64 v16; // rdx
  IFxMemory *v17; // rcx
  _WDFMEMORY_OFFSET *v18; // r13
  __int64 v19; // rcx
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
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  FxRequestBuffer *v37; // [rsp+28h] [rbp-A1h]
  FxFileObject *_a6; // [rsp+38h] [rbp-91h]
  IFxMemory *pOutputMemory; // [rsp+68h] [rbp-61h] BYREF
  void *PPObject; // [rsp+70h] [rbp-59h] BYREF
  IFxMemory **p_pInputMemory; // [rsp+78h] [rbp-51h] BYREF
  FxRequestBuffer inputBuf; // [rsp+80h] [rbp-49h] BYREF
  FxRequestBuffer outputBuf; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-9h]
  IFxMemory *pInputMemory; // [rsp+108h] [rbp+3Fh] BYREF
  FxIoTarget *pTarget; // [rsp+110h] [rbp+47h] BYREF
  unsigned int v47; // [rsp+120h] [rbp+57h]

  v47 = Ioctl;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  v10 = (WDFIOTARGET__ *)IoTarget;
  *(_QWORD *)&outputBuf.DataType = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  v44 = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v11 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    IoTarget = LOWORD(v11->__vftable);
    v11 = (FxIoTarget *)((char *)v11 - IoTarget);
  }
  if ( v11->m_Type == 4608 )
  {
    pTarget = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pTarget, v10, 0x1200u, IoTarget);
    Ioctl = v47;
  }
  m_Globals = pTarget->m_Globals;
  v13 = OutputBuffer;
  v14 = (unsigned __int64)InputBuffer;
  v15 = Internal;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDdqq(
      m_Globals,
      IoTarget,
      0,
      Ioctl,
      (const _GUID *)v37,
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
      *((_DWORD *)&inputBuf.DataType + 1) = 0;
      v21.__vftable = *(IFxMemory_vtbl **)v20;
      LOWORD(inputBuf.DataType) = 4106;
      HIWORD(inputBuf.DataType) = v19;
      if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))v21.GetDriverGlobals)(v20, &p_pInputMemory) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v20 + 2),
          v22,
          v23,
          v24,
          (const _GUID *)v37,
          (const void *)v14,
          0x100Au,
          v20,
          v20[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v20 + 2), WDF_INVALID_HANDLE, v14, 0x100AuLL);
      }
      v20 = (unsigned __int16 *)pInputMemory;
    }
    if ( v18 )
    {
      BufferLength = v18->BufferLength;
      p_pInputMemory = (IFxMemory **)(BufferLength + v18->BufferOffset);
      if ( (unsigned __int64)p_pInputMemory < BufferLength
        || (v34 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v20 + 8LL))(v20),
            (unsigned __int64)p_pInputMemory > v34) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x2Cu, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
      v20 = (unsigned __int16 *)pInputMemory;
    }
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
  }
  v26 = OutputBufferOffsets;
  if ( v13 )
  {
    FxObjectHandleGetPtr(m_Globals, v13, 0x100Au, &PPObject);
    if ( v26 )
    {
      v35 = v26->BufferLength;
      p_pInputMemory = (IFxMemory **)(v35 + v26->BufferOffset);
      if ( (unsigned __int64)p_pInputMemory < v35
        || (v36 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)PPObject + 8LL))(PPObject),
            (unsigned __int64)p_pInputMemory > v36) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x2Du, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
    }
    FxRequestBuffer::SetMemory((FxRequestBuffer *)&outputBuf.u, (IFxMemory *)PPObject, v26);
  }
  v27 = FxIoTarget::FormatIoctlRequest(
          pTarget,
          (FxRequestBase *)pOutputMemory,
          v47,
          v15,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u,
          _a6);
  if ( v27 >= 0 )
  {
    v28 = Internal == 0;
    v29 = pOutputMemory[21].__vftable;
    v30 = 14;
    LODWORD(v29->GetFlags) = v47;
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
