/*
 * XREFs of imp_WdfRequestSend @ 0x1C00017C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00019F0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000D6C4 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0014554 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00145C8 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

bool __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        FxRequest *Request,
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
  FxRequestContext *v18; // rax
  const void *v19; // rax
  const void *v20; // rax
  const void *v21; // rax
  FxVerifierLock *m_TargetDevice; // rcx
  FxVerifierLock *v23; // rcx
  _WDF_DRIVER_GLOBALS *Action; // [rsp+80h] [rbp+18h] BYREF
  FxRequest *v25; // [rsp+88h] [rbp+20h] BYREF
  void *PPObject; // [rsp+90h] [rbp+28h] BYREF

  PPObject = (void *)Target;
  v25 = Request;
  Action = DriverGlobals;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v5 = 0;
  v6 = ~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( ((unsigned __int8)Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v6;
    v6 -= Offset;
  }
  if ( *(_WORD *)(v6 + 8) == 4104 )
  {
    v25 = (FxRequest *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&v25, Request, 0x1008u, Offset);
    Target = (unsigned __int64)PPObject;
    v6 = (unsigned __int64)v25;
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
    v25->m_Irp.m_Irp->IoStatus.Status = -1073741811;
    FxVerifierDbgBreakPoint(v25->m_Globals);
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
    PPObject = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, &PPObject, (void *)Target, 0x1200u, v9);
    v10 = (FxIoTarget *)PPObject;
    v6 = (unsigned __int64)v25;
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
        (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v25->m_Irp.m_Irp);
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
      v25->m_Irp.m_Irp->IoStatus.Status = -1073741808;
      FxVerifierDbgBreakPoint(v25->m_Globals);
    }
    return (v5 & 4) != 0;
  }
  if ( (v17 & 2) != 0 )
  {
    LODWORD(Action) = 32;
    FxIoTarget::SubmitSync(v10, (FxRequestBase *)v6, Options, (unsigned int *)&Action);
    goto LABEL_35;
  }
  if ( (v17 & 8) == 0 )
  {
LABEL_35:
    LOBYTE(v5) = (_BYTE)Action;
    return (v5 & 4) != 0;
  }
  if ( *(_BYTE *)(v6 + 213) )
  {
    if ( *(_WORD *)(v6 + 10) )
      v19 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v19 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v19);
    v25->m_Irp.m_Irp->IoStatus.Status = -1073741436;
  }
  else
  {
    v18 = *(FxRequestContext **)(v6 + 168);
    if ( !v18 || !v18->m_RequestType )
    {
      FxRequest::PreProcessSendAndForget((FxRequest *)v6);
      (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v25->m_Irp.m_Irp);
      FxRequest::PostProcessSendAndForget(v25);
      return 1;
    }
    if ( *(_WORD *)(v6 + 10) )
      v20 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v20 = 0LL;
    WPP_IFR_SF_qL(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Du, WPP_FxRequestApi_cpp_Traceguids, v20, 0xC0000010);
    v25->m_Irp.m_Irp->IoStatus.Status = -1073741808;
    FxVerifierDbgBreakPoint(v25->m_Globals);
  }
  return (v5 & 4) != 0;
}
