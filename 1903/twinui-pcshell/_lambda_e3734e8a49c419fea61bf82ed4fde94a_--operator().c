/*
 * XREFs of _lambda_e3734e8a49c419fea61bf82ed4fde94a_::operator() @ 0x18002C188
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_64c5f6d420f531456c0e51a7abc6beee___::Run @ 0x18002C780 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_64c5f6d420f531456c0e51a7abc6beee___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x18002C54C (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180059BD0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_885e7c1110adf83edb5f22ceb1864013___ @ 0x18006A834 (CIAMGlobals--QueueViewManagementTask__lambda_885e7c1110adf83edb5f22ceb1864013___.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008D9EC (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x180120F24 (WPP_SF_qd.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z @ 0x18014F488 (--$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_e3734e8a49c419fea61bf82ed4fde94a_::operator()(CFrameApplicationPresentation **a1)
{
  CFrameApplicationPresentation *v2; // rbx
  CFrameApplicationPresentation *v3; // rcx
  char v4; // r13
  char v5; // bl
  CFrameApplicationPresentation *v6; // rcx
  CFrameApplicationPresentation *v7; // r15
  __int64 v8; // rbx
  CFrameApplicationPresentation *v9; // r12
  char *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  _QWORD *v13; // rcx
  CFrameApplicationPresentation *v14; // rax
  __int64 v15; // r12
  _QWORD *v16; // rdx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  CFrameApplicationPresentation *v19; // r15
  __int64 *v20; // rax
  __int64 v21; // rdi
  _QWORD *v22; // r14
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  CFrameApplicationPresentation *v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  CFrameApplicationPresentation *v28; // rbx
  __int64 v29; // rax
  HANDLE ProcessHeap; // rax
  int v31; // [rsp+20h] [rbp-79h]
  char v32; // [rsp+50h] [rbp-49h] BYREF
  char v33[16]; // [rsp+60h] [rbp-39h] BYREF
  LPVOID lpMem; // [rsp+70h] [rbp-29h]
  char v35; // [rsp+78h] [rbp-21h]
  char v36[24]; // [rsp+80h] [rbp-19h] BYREF
  int v37; // [rsp+98h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned int v39; // [rsp+100h] [rbp+67h] BYREF
  int v40; // [rsp+108h] [rbp+6Fh] BYREF
  _QWORD *v41; // [rsp+110h] [rbp+77h] BYREF
  __int64 v42; // [rsp+118h] [rbp+7Fh] BYREF

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v33);
  v2 = (CFrameApplicationPresentation *)**((_QWORD **)a1[1] + 13);
  v3 = *a1;
  if ( *a1 && v2 )
  {
    if ( v3 == v2 )
    {
      v4 = 1;
      v5 = 1;
    }
    else
    {
      v42 = 0LL;
      v41 = 0LL;
      if ( (**(int (__fastcall ***)(CFrameApplicationPresentation *, GUID *, __int64 *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v42) < 0 )
        goto LABEL_66;
      v27 = (**(__int64 (__fastcall ***)(CFrameApplicationPresentation *, GUID *, _QWORD **))v2)(
              v2,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v41);
      if ( v27 >= 0 )
        (*(void (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      if ( v27 >= 0 && (_QWORD *)v42 == v41 )
      {
        v4 = 1;
        v5 = 1;
      }
      else
      {
LABEL_66:
        v4 = 0;
        v5 = 0;
      }
      v3 = *a1;
    }
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  v42 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v3 + 32LL))(v3);
  v6 = a1[1];
  if ( v42 == **((_QWORD **)v6 + 14) && v5 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 2, 0LL);
  }
  else
  {
    if ( !IsWindowVisible(*((HWND *)v6 + 16)) )
      ShowWindowAsync(*((HWND *)a1[1] + 16), 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v28 = a1[1];
      v29 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_94922da7bd9137d502a338501bb650ae_Traceguids,
        v29,
        *((_DWORD *)v28 + 12));
    }
    v7 = a1[1];
    v8 = **((_QWORD **)v7 + 13);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v7 = a1[1];
    }
    v9 = *a1;
    v10 = (char *)(*(__int64 (__fastcall **)(CFrameApplicationPresentation *, _QWORD **))(*(_QWORD *)v7 + 64LL))(
                    v7,
                    &v41);
    v11 = 0LL;
    v12 = 0LL;
    if ( &v32 != v10 )
    {
      v11 = *(_QWORD **)v10;
      *(_QWORD *)v10 = 0LL;
      v12 = v11;
    }
    v13 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    }
    v14 = (CFrameApplicationPresentation *)*((_QWORD *)v7 + 10);
    if ( v14 != v9 || *((_QWORD *)v7 + 11) != v42 )
      *((_BYTE *)v7 + 96) = 0;
    if ( v14 != v9 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v9 + 8LL))(v9);
        v14 = (CFrameApplicationPresentation *)*((_QWORD *)v7 + 10);
      }
      v41 = v14;
      *((_QWORD *)v7 + 10) = v9;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
    }
    v15 = v42;
    *((_QWORD *)v7 + 11) = v42;
    (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD **))(*(_QWORD *)v7 + 64LL))(v7, &v41);
    v16 = v41;
    if ( v41 != v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v7 + 86) + 520LL))(*((_QWORD **)v7 + 86));
      v16 = v41;
    }
    if ( v16 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    }
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    if ( (unsigned int)GetWindowBand(*((_QWORD *)a1[1] + 16), &v39) )
      (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, v39);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1[1] + 15) + 48LL))(*((_QWORD *)a1[1] + 15), v15);
    v40 = v17;
    v18 = retaddr;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BF,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v17,
        v31);
      v41 = (_QWORD *)*((_QWORD *)a1[1] + 83);
      CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &,unsigned short const *>(&v40, &v41);
    }
    if ( v15 )
    {
      v41 = (_QWORD *)v15;
      CIAMGlobals::QueueViewManagementTask__lambda_885e7c1110adf83edb5f22ceb1864013___(v18, &v41);
    }
    CFrameApplicationPresentation::_UpdateMinSizePreferences(a1[1], **((HWND **)a1[1] + 14));
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD, _QWORD))(*(_QWORD *)*a1 + 208LL))(
      *a1,
      *((_QWORD *)a1[1] + 16),
      (unsigned int)(*((_DWORD *)a1[1] + 56) != 0) + 4);
    if ( v8 && !v4 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 208LL))(v8, *((_QWORD *)a1[1] + 16), 0LL);
    v19 = a1[1];
    v20 = (__int64 *)(*(__int64 (__fastcall **)(CFrameApplicationPresentation *, _QWORD **))(*(_QWORD *)v19 + 64LL))(
                       v19,
                       &v41);
    v21 = 0LL;
    v22 = 0LL;
    if ( &v42 != v20 )
    {
      v21 = *v20;
      *v20 = 0LL;
      v22 = (_QWORD *)v21;
    }
    v23 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
    }
    *((_BYTE *)v19 + 96) = 1;
    (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD **))(*(_QWORD *)v19 + 64LL))(v19, &v41);
    v24 = v41;
    if ( v41 != v22 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v19 + 86) + 520LL))(*((_QWORD **)v19 + 86));
      v24 = v41;
    }
    if ( v24 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    }
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v25 = a1[1];
    if ( **((_QWORD **)v25 + 14) )
    {
      if ( !*((_DWORD *)v25 + 56) )
      {
        v26 = *((_QWORD *)v25 + 87);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 192LL))(v26);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 2, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v37 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v36);
  if ( v35 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
