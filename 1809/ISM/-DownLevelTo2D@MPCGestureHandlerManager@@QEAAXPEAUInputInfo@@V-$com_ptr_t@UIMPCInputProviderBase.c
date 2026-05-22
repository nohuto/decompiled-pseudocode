/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F1820 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F1EA8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1800F2F18 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F6BC0 (-PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F6E20 (-OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F921C (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9484 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1800F9784 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9C1C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FEFC0 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FFC00 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800FFD30 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045CE4 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x180045E10 (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x180046300 (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     ??A?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBK@Z @ 0x180046388 (--A-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U-$less@K@std@@V-$al.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004DF2C (-AttachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800BA61C (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCGestureHandlerManager::DownLevelTo2D(
        MPCGestureHandlerManager *this,
        __int64 a2,
        unsigned __int64 *a3,
        const char *a4)
{
  unsigned __int64 v7; // r8
  _DWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  bool v15; // r14
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rdx
  _QWORD *v21; // rax
  _DWORD *v22; // rdi
  _DWORD *v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // r14
  unsigned __int64 v27; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned __int64 v30; // [rsp+98h] [rbp+58h] BYREF

  v7 = *a3;
  if ( !v7 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      a4);
    JUMPOUT(0x1800457A3LL);
  }
  v8 = 0LL;
  v9 = (__int64 *)*((_QWORD *)this + 3);
  v10 = (__int64 *)v9[1];
  v11 = (__int64 *)*((_QWORD *)this + 3);
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_9;
  do
  {
    if ( v10[4] >= v7 )
    {
      v11 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v11 == v9 || v7 < v11[4] )
LABEL_9:
    v11 = (__int64 *)*((_QWORD *)this + 3);
  if ( v11 == v9 )
    goto LABEL_22;
  v12 = *(_DWORD **)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 24);
  v8 = v12;
  if ( !v12 )
    goto LABEL_22;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = *a3;
  v30 = v13;
  if ( v13 )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))(v13);
    v13 = v30;
  }
  v14 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 88LL))(v13);
  v15 = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(v12 + 20), v14);
  if ( v30 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( !v15 && v12[226] != *(_DWORD *)(a2 + 1136) )
  {
    v16 = *a3;
    v30 = v16;
    if ( v16 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 8LL))(v16);
    MPCGestureHandlerManager::DetachProvider(this);
    v8 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( !v8 )
  {
LABEL_22:
    v17 = *(_DWORD *)(a2 + 1136);
    LODWORD(v30) = v17;
    v18 = (__int64 *)*((_QWORD *)this + 1);
    v19 = (__int64 *)v18[1];
    v20 = v18;
    if ( *((_BYTE *)v19 + 25) )
      goto LABEL_29;
    do
    {
      if ( *((_DWORD *)v19 + 8) >= v17 )
      {
        v20 = v19;
        v19 = (__int64 *)*v19;
      }
      else
      {
        v19 = (__int64 *)v19[2];
      }
    }
    while ( !*((_BYTE *)v19 + 25) );
    if ( v20 == v18 || v17 < *((_DWORD *)v20 + 8) )
LABEL_29:
      v20 = (__int64 *)*((_QWORD *)this + 1);
    if ( v20 == v18 )
      MPCGestureHandlerManager::MapGestureHandlerToWorkspace(this, v17);
    v21 = (_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 8);
    v22 = (_DWORD *)*v21;
    if ( *v21 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*v21);
    v23 = v8;
    v8 = v22;
    if ( v23 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 16LL))(v23);
    v24 = *a3;
    v30 = v24;
    if ( v24 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 8LL))(v24);
    MPCGestureHandler::AttachProvider(v22, &v30);
    v25 = (__int64 *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 24);
    v26 = *v25;
    *v25 = (__int64)v22;
    if ( v22 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = *a3;
  v30 = v27;
  if ( v27 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 8LL))(v27);
  result = MPCGestureHandler::DownLevelTo2D(v8, a2, &v30);
  if ( v8 )
    result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( *a3 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)*a3 + 16LL))(*a3);
  return result;
}
