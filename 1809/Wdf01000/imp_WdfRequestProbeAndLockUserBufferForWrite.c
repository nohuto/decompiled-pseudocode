/*
 * XREFs of imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x1C004C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0050248 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2754 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestProbeAndLockUserBufferForWrite(
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
  FxRequest *v10; // r10
  _FX_DRIVER_GLOBALS *v11; // rdx
  __int64 v12; // rdx
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r8
  int IsDriverOwned; // edi
  int _a1; // eax
  unsigned __int64 v17; // rax
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
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v10 = pRequest;
    v11 = pRequest->m_Globals;
    if ( v11->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pRequest->m_Globals, (unsigned int)v11, 9u)
       || *(_BYTE *)(v12 + 317)) )
    {
      FxNonPagedObject::Lock(v10, (unsigned __int8 *)&irql, v13);
      if ( m_Globals->FxVerifierOn )
        IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
      else
        IsDriverOwned = 0;
      FxNonPagedObject::Unlock(pRequest, irql, v14);
      if ( IsDriverOwned < 0 )
        return (unsigned int)IsDriverOwned;
      v10 = pRequest;
    }
    _a1 = FxRequest::ProbeAndLockForWrite(v10, Buffer, v5, (FxRequestMemory **)&irql);
    IsDriverOwned = _a1;
    if ( _a1 >= 0 )
    {
      if ( *(_WORD *)(irql + 10) )
        v17 = irql ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v17 = 0LL;
      *v8 = (WDFMEMORY__ *)v17;
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x43u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    }
    return (unsigned int)IsDriverOwned;
  }
  return result;
}
