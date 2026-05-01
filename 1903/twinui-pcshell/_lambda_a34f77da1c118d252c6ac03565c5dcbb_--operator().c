/*
 * XREFs of _lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator() @ 0x18009D080
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___::Run @ 0x18009E590 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___--Run.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180044C6C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009772C (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?lock@?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEBA?AV?$shared_ptr@U_Task_impl_base@details@Concurrency@@@2@XZ @ 0x1801CDD48 (-lock@-$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEBA-AV-$shared_ptr@U_Task_impl_bas.c)
 *     ??$Start@$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x18030C760 (--$Start@$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@XZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18030D588 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18030E18C (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     _anonymous_namespace_::GetViewIdFromExperienceId @ 0x18030FEC4 (_anonymous_namespace_--GetViewIdFromExperienceId.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x180310128 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFram.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180315548 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803190A0 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18031B0AC (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18031B144 (-ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator()(struct IInspectable *a1)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  char v4; // r15
  int v5; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  HWND v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  int TitleBar; // eax
  TouchKeyboardExperienceManager *v11; // rcx
  __int64 v12; // rdx
  struct IApplicationFrameWrapper *v13; // rbx
  int v14; // eax
  int v15; // edi
  struct IInspectableVtbl *lpVtbl; // rax
  struct IUnknown ***GetTrustLevel; // r14
  struct IUnknown ***GetRuntimeClassName; // rbx
  int v19; // eax
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-E0h] BYREF
  struct IApplicationFrameWrapper *v22; // [rsp+30h] [rbp-D8h] BYREF
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  struct IInspectable *v24[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  std::_Ref_count_base *v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  _BYTE v29[320]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v28 = -2LL;
  std::weak_ptr<Concurrency::details::_Task_impl_base>::lock(&a1[3], &v26);
  v2 = v26;
  if ( !v26 )
  {
    v3 = 0;
    goto LABEL_41;
  }
  v24[1] = a1;
  v4 = 1;
  LOBYTE(v25) = 1;
  v24[0] = 0LL;
  v5 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)&a1[1], v24);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x926,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  if ( !v24[0] )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    v3 = 0;
    goto LABEL_37;
  }
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::Start<>((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v29);
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( (*((int (__fastcall **)(struct IInspectableVtbl *, HSTRING *))a1->lpVtbl->QueryInterface + 83))(
         a1->lpVtbl,
         &string) < 0 )
  {
    *(_DWORD *)(v2 + 36) = -1;
    goto LABEL_24;
  }
  v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper((ExperienceManagerUtils *)a1->lpVtbl, v6);
  if ( v7 && !SetPropW(v7, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v3 = -2147467259;
    v8 = 2147500037LL;
    v9 = 2365LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v8);
    goto LABEL_36;
  }
  v22 = 0LL;
  SRWLock = 0LL;
  TitleBar = TouchKeyboardExperienceManager::CreateAppFrameWrapper((TouchKeyboardExperienceManager *)a1[2].lpVtbl, &v22);
  v3 = TitleBar;
  if ( TitleBar >= 0 )
  {
    v13 = v22;
    TitleBar = TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
                 v11,
                 v22,
                 (struct IApplicationFrameTitleBar **)&SRWLock);
    v3 = TitleBar;
    if ( TitleBar < 0 )
    {
      v12 = 2371LL;
      goto LABEL_21;
    }
    TitleBar = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v13 + 48LL))(v13, 3LL);
    v3 = TitleBar;
    if ( TitleBar < 0 )
    {
      v12 = 2374LL;
      goto LABEL_21;
    }
    TitleBar = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, struct IInspectableVtbl *))(*(_QWORD *)v13 + 104LL))(
                 v13,
                 a1->lpVtbl);
    v3 = TitleBar;
    if ( TitleBar < 0 )
    {
      v12 = 2375LL;
      goto LABEL_21;
    }
    TitleBar = (*((__int64 (__fastcall **)(struct IInspectableVtbl *, __int64))a1->lpVtbl->QueryInterface + 71))(
                 a1->lpVtbl,
                 1LL);
    v3 = TitleBar;
    if ( TitleBar < 0 )
    {
      v12 = 2378LL;
      goto LABEL_21;
    }
    *(_DWORD *)(v2 + 36) = anonymous_namespace_::GetViewIdFromExperienceId(&string);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(v2 + 16, &SRWLock);
    Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)(v2 + 8), (__int64 *)&v22);
    *(_BYTE *)(v2 + 33) = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&SRWLock);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
LABEL_24:
    v14 = (*((__int64 (__fastcall **)(struct IInspectableVtbl *, __int64))a1->lpVtbl->QueryInterface + 49))(
            a1->lpVtbl,
            3LL);
    v3 = v14;
    if ( v14 >= 0 )
    {
      v4 = 0;
      LOBYTE(v25) = 0;
      Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)&a1[2].lpVtbl[9].GetIids, &SRWLock);
      v15 = 0;
      lpVtbl = a1[2].lpVtbl;
      GetTrustLevel = (struct IUnknown ***)lpVtbl[9].GetTrustLevel;
      GetRuntimeClassName = (struct IUnknown ***)lpVtbl[9].GetRuntimeClassName;
      if ( GetRuntimeClassName != GetTrustLevel )
      {
        do
        {
          if ( (unsigned int)SHIsSameObject(**GetRuntimeClassName, (struct IUnknown *)a1->lpVtbl) )
            ++v15;
          GetRuntimeClassName += 2;
        }
        while ( GetRuntimeClassName != GetTrustLevel );
        if ( v15 > 1 )
          TouchKeyboardExperienceTelemetryLogger::ViewInfoDuplicated();
      }
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
      v3 = 0;
      goto LABEL_36;
    }
    v8 = (unsigned int)v14;
    v9 = 2392LL;
    goto LABEL_26;
  }
  v12 = 2370LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)TitleBar);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&SRWLock);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
LABEL_36:
  WindowsDeleteString(string);
  string = 0LL;
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v29);
LABEL_37:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
  if ( v4 )
  {
    v19 = (*((__int64 (__fastcall **)(struct IInspectableVtbl *, _QWORD))a1->lpVtbl->QueryInterface + 49))(
            a1->lpVtbl,
            0LL);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x921,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
LABEL_41:
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  return v3;
}
