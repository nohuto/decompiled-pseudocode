/*
 * XREFs of imp_WdfRequestSend @ 0x1C0001F50
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00020D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000CA14 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0050C44 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0050CF4 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

bool __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 Target,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v8; // r10
  __int64 v9; // rcx
  FxIoTarget *v10; // rdi
  unsigned __int64 *p_m_Lock; // r15
  KIRQL v12; // r12
  char v13; // bl
  unsigned __int8 v14; // r8
  unsigned int Flags; // edx
  unsigned int v17; // eax
  const void *v18; // rax
  FxRequestContext *v19; // rax
  const void *v20; // rax
  const void *v21; // rax
  FxVerifierLock *m_TargetDevice; // rcx
  FxVerifierLock *v23; // rcx
  _WDF_DRIVER_GLOBALS *Action; // [rsp+80h] [rbp+18h] BYREF
  void *PPObject; // [rsp+88h] [rbp+20h] BYREF
  void *v26; // [rsp+90h] [rbp+28h] BYREF

  v26 = (void *)Target;
  PPObject = (void *)Request;
  Action = DriverGlobals;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v5 = 0;
  v6 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v6;
    v6 -= Offset;
  }
  if ( *(_WORD *)(v6 + 8) == 4104 )
  {
    PPObject = (void *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, &PPObject, (void *)Request, 0x1008u, Offset);
    Target = (unsigned __int64)v26;
    v6 = (unsigned __int64)PPObject;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( Options )
  {
    if ( Options->Size == 16 )
    {
      Flags = Options->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(v8, Flags, 6u, 0xBu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, Flags, 0xFu);
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_7;
        WPP_IFR_SF_qDd(v8, Flags, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 8u, Flags);
      }
    }
    else
    {
      WPP_IFR_SF_qdd(v8, 2u, 6u, 0xAu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 16, Options->Size);
    }
    *(_DWORD *)(*((_QWORD *)PPObject + 19) + 48LL) = -1073741811;
    FxVerifierDbgBreakPoint(*((_FX_DRIVER_GLOBALS **)PPObject + 2));
    return 0;
  }
LABEL_7:
  if ( !Target )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v9) = 0;
  v10 = (FxIoTarget *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Target & 1) != 0 )
  {
    v9 = LOWORD(v10->__vftable);
    v10 = (FxIoTarget *)((char *)v10 - v9);
  }
  if ( v10->m_Type == 4608 )
  {
    v26 = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, &v26, (void *)Target, 0x1200u, v9);
    v10 = (FxIoTarget *)v26;
    v6 = (unsigned __int64)PPObject;
  }
  if ( !Options || (v17 = Options->Flags, (v17 & 0xA) == 0) )
  {
    if ( *(_QWORD *)(v6 + 192) || *(_BYTE *)(v6 + 213) )
    {
      if ( Options )
        v5 = Options->Flags;
      if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (m_TargetDevice = (FxVerifierLock *)v10[-1].m_TargetDevice) != 0LL )
      {
        FxVerifierLock::Lock(m_TargetDevice, (unsigned __int8 *)&Action, Target);
        v12 = (unsigned __int8)Action;
        p_m_Lock = &v10->m_NPLock.m_Lock;
      }
      else
      {
        p_m_Lock = &v10->m_NPLock.m_Lock;
        v12 = KeAcquireSpinLockRaiseToDpc(&v10->m_NPLock.m_Lock);
      }
      v13 = FxIoTarget::SubmitLocked(v10, (FxRequestBase *)v6, Options, v5);
      if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (v23 = (FxVerifierLock *)v10[-1].m_TargetDevice) != 0LL )
        FxVerifierLock::Unlock(v23, v12, v14);
      else
        KeReleaseSpinLock(p_m_Lock, v12);
      LOBYTE(v5) = v13;
      if ( (v13 & 1) != 0 )
      {
        LOBYTE(v5) = v13 | 4;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v26 + 104LL))(v26, *((_QWORD *)PPObject + 19));
      }
      else if ( (v13 & 2) != 0 )
      {
        LOBYTE(v5) = v13 | 4;
      }
    }
    else
    {
      if ( *(_WORD *)(v6 + 10) )
        v21 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      WPP_IFR_SF_qL(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
        2u,
        0xEu,
        0x2Eu,
        WPP_FxRequestApi_cpp_Traceguids,
        v21,
        0xC0000010);
      *(_DWORD *)(*((_QWORD *)PPObject + 19) + 48LL) = -1073741808;
      FxVerifierDbgBreakPoint(*((_FX_DRIVER_GLOBALS **)PPObject + 2));
    }
    return (v5 & 4) != 0;
  }
  if ( (v17 & 2) != 0 )
  {
    LODWORD(Action) = 32;
    FxIoTarget::SubmitSync(v10, (FxRequestBase *)v6, Options, (unsigned int *)&Action);
LABEL_40:
    LOBYTE(v5) = (_BYTE)Action;
    return (v5 & 4) != 0;
  }
  if ( (v17 & 8) == 0 )
    goto LABEL_40;
  if ( *(_BYTE *)(v6 + 213) )
  {
    if ( *(_WORD *)(v6 + 10) )
      v18 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v18);
    *(_DWORD *)(*((_QWORD *)PPObject + 19) + 48LL) = -1073741436;
    return (v5 & 4) != 0;
  }
  v19 = *(FxRequestContext **)(v6 + 168);
  if ( v19 && v19->m_RequestType )
  {
    if ( *(_WORD *)(v6 + 10) )
      v20 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v20 = 0LL;
    WPP_IFR_SF_qL(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Du, WPP_FxRequestApi_cpp_Traceguids, v20, 0xC0000010);
    *(_DWORD *)(*((_QWORD *)PPObject + 19) + 48LL) = -1073741808;
    FxVerifierDbgBreakPoint(*((_FX_DRIVER_GLOBALS **)PPObject + 2));
    return (v5 & 4) != 0;
  }
  FxRequest::PreProcessSendAndForget((FxRequest *)v6);
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v26 + 104LL))(v26, *((_QWORD *)PPObject + 19));
  FxRequest::PostProcessSendAndForget((FxRequest *)PPObject);
  return 1;
}
