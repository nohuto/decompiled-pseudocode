/*
 * XREFs of imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1C004BA50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004F894 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6788 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestProbeAndLockUserBufferForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void *Buffer,
        unsigned __int64 Length,
        WDFMEMORY__ **MemoryObject)
{
  unsigned int v5; // r14d
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ **v8; // rsi
  __int64 result; // rax
  unsigned int v10; // edx
  FxRequest *v11; // r10
  _FX_DRIVER_GLOBALS *v12; // rcx
  __int64 v13; // rcx
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  int IsDriverOwned; // edi
  int _a1; // eax
  unsigned __int64 v18; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 irql; // [rsp+60h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp+18h] BYREF

  v5 = Length;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v8 = MemoryObject;
  if ( !MemoryObject )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *MemoryObject = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v11 = pRequest;
    v12 = pRequest->m_Globals;
    if ( v12->FxVerifierOn && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v12, v10, 9u) || *(_BYTE *)(v13 + 317)) )
    {
      FxNonPagedObject::Lock(v11, (unsigned __int8 *)&irql, v14);
      if ( m_Globals->FxVerifierOn )
        IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
      else
        IsDriverOwned = 0;
      FxNonPagedObject::Unlock(pRequest, irql, v15);
      if ( IsDriverOwned < 0 )
        return (unsigned int)IsDriverOwned;
      v11 = pRequest;
    }
    _a1 = FxRequest::ProbeAndLockForRead(v11, Buffer, v5, (FxRequestMemory **)&irql);
    IsDriverOwned = _a1;
    if ( _a1 >= 0 )
    {
      if ( *(_WORD *)(irql + 10) )
        v18 = irql ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v18 = 0LL;
      *v8 = (WDFMEMORY__ *)v18;
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x41u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    }
    return (unsigned int)IsDriverOwned;
  }
  return result;
}
