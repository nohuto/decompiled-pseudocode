/*
 * XREFs of _lambda_06d64a626025f4db47aab5f81b5aa1b0_::operator() @ 0x180048824
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_daccc0ce4e4d7134eefbda54bca36657___::Run @ 0x1800487B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_daccc0ce4e4d7134eefbda54bca36657___--Run.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180048BD8 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_a0fce019c4c6bdf92bd844f5f5839b78___ @ 0x180048D28 (CIAMGlobals--QueueViewManagementTask__lambda_a0fce019c4c6bdf92bd844f5f5839b78___.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800FAFA4 (WPP_SF_qd.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z @ 0x180125D74 (--$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_06d64a626025f4db47aab5f81b5aa1b0_::operator()(struct IUnknown **a1)
{
  bool v2; // bl
  struct IUnknown *v3; // rcx
  struct IUnknown *v4; // r15
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  struct IUnknown *v6; // r12
  char *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct IUnknown *lpVtbl; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  struct IUnknown *v17; // r15
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct IUnknown *v23; // rcx
  struct IUnknownVtbl *v24; // rcx
  struct IUnknown *v25; // rbx
  __int64 v26; // rax
  HANDLE ProcessHeap; // rax
  int v28; // [rsp+20h] [rbp-79h]
  __int64 v29; // [rsp+30h] [rbp-69h]
  char v30; // [rsp+58h] [rbp-41h] BYREF
  char v31[16]; // [rsp+60h] [rbp-39h] BYREF
  LPVOID lpMem; // [rsp+70h] [rbp-29h]
  char v33; // [rsp+78h] [rbp-21h]
  char v34[24]; // [rsp+80h] [rbp-19h] BYREF
  int v35; // [rsp+98h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 v37; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v38; // [rsp+108h] [rbp+6Fh] BYREF
  int v39; // [rsp+110h] [rbp+77h] BYREF
  __int64 v40; // [rsp+118h] [rbp+7Fh] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v31);
  v2 = (unsigned int)SHIsSameObject(*a1, (struct IUnknown *)a1[1][13].lpVtbl->QueryInterface) != 0;
  LOBYTE(v37) = v2;
  v29 = ((__int64 (__fastcall *)(struct IUnknown *))(*a1)->lpVtbl[1].AddRef)(*a1);
  v3 = a1[1];
  if ( (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))v29 == v3[14].lpVtbl->QueryInterface && v2 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 2, 0LL);
  }
  else
  {
    if ( !IsWindowVisible((HWND)v3[16].lpVtbl) )
      ShowWindowAsync((HWND)a1[1][16].lpVtbl, 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v25 = a1[1];
      v26 = ((__int64 (__fastcall *)(struct IUnknown *))(*a1)->lpVtbl[1].AddRef)(*a1);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_853ba2fb797437ec94ff4aabc4e6fa11_Traceguids,
        v26,
        v25[6].lpVtbl);
    }
    v4 = a1[1];
    QueryInterface = v4[13].lpVtbl->QueryInterface;
    if ( QueryInterface )
    {
      (*(void (__fastcall **)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **)))(*(_QWORD *)QueryInterface
                                                                                           + 8LL))(QueryInterface);
      v4 = a1[1];
    }
    v6 = *a1;
    v7 = (char *)((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v4->lpVtbl[2].Release)(v4, &v40);
    v8 = 0LL;
    v9 = 0LL;
    if ( &v30 != v7 )
    {
      v8 = *(_QWORD *)v7;
      *(_QWORD *)v7 = 0LL;
      v9 = v8;
    }
    v10 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    lpVtbl = (struct IUnknown *)v4[10].lpVtbl;
    if ( lpVtbl != v6 || (v12 = v9, v13 = v9, v4[11].lpVtbl != (struct IUnknownVtbl *)v29) )
    {
      LOBYTE(v4[12].lpVtbl) = 0;
      v12 = v9;
      v13 = v9;
    }
    if ( lpVtbl != v6 )
    {
      v9 = v12;
      if ( v6 )
      {
        ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->AddRef)(v6);
        lpVtbl = (struct IUnknown *)v4[10].lpVtbl;
        v9 = v13;
      }
      v40 = (__int64)lpVtbl;
      v4[10].lpVtbl = (struct IUnknownVtbl *)v6;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    }
    v4[11].lpVtbl = (struct IUnknownVtbl *)v29;
    ((void (__fastcall *)(struct IUnknown *, __int64 *))v4->lpVtbl[2].Release)(v4, &v40);
    v14 = v40;
    if ( v40 != v9 )
    {
      (*((void (__fastcall **)(HRESULT (__stdcall **)(IUnknown *, const IID *const, void **)))v4[73].lpVtbl->QueryInterface
       + 65))(&v4[73].lpVtbl->QueryInterface);
      v14 = v40;
    }
    if ( v14 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( (unsigned int)GetWindowBand(a1[1][16].lpVtbl, &v38) )
      ((void (__fastcall *)(struct IUnknown *, _QWORD))(*a1)->lpVtbl[1].QueryInterface)(*a1, v38);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v15 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))a1[1][15].lpVtbl->QueryInterface + 6))(
            a1[1][15].lpVtbl,
            v29);
    v39 = v15;
    v16 = retaddr;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2AE,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v15,
        v28);
      v40 = (__int64)a1[1][70].lpVtbl;
      CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &,unsigned short const *>(&v39, &v40);
    }
    if ( v29 )
    {
      v40 = v29;
      CIAMGlobals::QueueViewManagementTask__lambda_a0fce019c4c6bdf92bd844f5f5839b78___(v16, &v40);
    }
    CFrameApplicationPresentation::_UpdateMinSizePreferences(
      (CFrameApplicationPresentation *)a1[1],
      (HWND)a1[1][14].lpVtbl->QueryInterface);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *, _QWORD))(*a1)->lpVtbl[8].Release)(
      *a1,
      a1[1][16].lpVtbl,
      (unsigned int)(LODWORD(a1[1][27].lpVtbl) != 0) + 4);
    if ( QueryInterface && !(_BYTE)v37 )
      (*(void (__fastcall **)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **), struct IUnknownVtbl *, _QWORD))(*(_QWORD *)QueryInterface + 208LL))(
        QueryInterface,
        a1[1][16].lpVtbl,
        0LL);
    v17 = a1[1];
    v18 = (__int64 *)((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v17->lpVtbl[2].Release)(v17, &v37);
    v19 = 0LL;
    v20 = 0LL;
    if ( &v40 != v18 )
    {
      v19 = *v18;
      *v18 = 0LL;
      v20 = v19;
    }
    v21 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    LOBYTE(v17[12].lpVtbl) = 1;
    ((void (__fastcall *)(struct IUnknown *, __int64 *))v17->lpVtbl[2].Release)(v17, &v37);
    v22 = v37;
    if ( v37 != v20 )
    {
      (*((void (__fastcall **)(HRESULT (__stdcall **)(IUnknown *, const IID *const, void **)))v17[73].lpVtbl->QueryInterface
       + 65))(&v17[73].lpVtbl->QueryInterface);
      v22 = v37;
    }
    if ( v22 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v23 = a1[1];
    if ( v23[14].lpVtbl->QueryInterface )
    {
      if ( !LODWORD(v23[27].lpVtbl) )
      {
        v24 = v23[74].lpVtbl;
        if ( v24 )
          (*((void (__fastcall **)(struct IUnknownVtbl *))v24->QueryInterface + 24))(v24);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 2, 0LL);
    if ( QueryInterface )
      (*(void (__fastcall **)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **)))(*(_QWORD *)QueryInterface
                                                                                           + 16LL))(QueryInterface);
  }
  if ( v35 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v34);
  if ( v33 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
