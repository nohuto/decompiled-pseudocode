/*
 * XREFs of ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180190528 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1802106D0 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x18023B9EC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::SubscribeToServices(ViewEventDispatcher *this, struct IServiceProvider *a2)
{
  char *v4; // rbx
  CCriticalFailureHandler *v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  CCriticalFailureHandler *v9; // rcx
  CCriticalFailureHandler *v10; // rcx
  CCriticalFailureHandler *v11; // rcx
  __int64 v12; // rdx
  CCriticalFailureHandler *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  __int64 v15; // rdx
  CCriticalFailureHandler *v16; // rcx
  __int64 *v17; // rax
  ConnectedStandbyHelper **v18; // rbx
  const char *v19; // r9
  CCriticalFailureHandler *v20; // rcx
  unsigned __int64 *v21; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v22; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  std::_Ref_count_base *v25; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v27; // [rsp+80h] [rbp+8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  __int64 v29; // [rsp+90h] [rbp+18h] BYREF

  v4 = (char *)this + 368;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ProcessLifetimeManagerControl,
         &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
         v4);
  v27 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v5, &v27);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v6 = v27;
  }
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v5,
        &v27,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x319u,
        v21,
        v23);
      v6 = v27;
    }
    if ( v6 < 0 )
    {
      v7 = 794LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &CLSID_ImmersivePlaybackManager,
         &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
         (char *)this + 376);
  v27 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v9, &v27);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v6 = v27;
  }
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        &v27,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x31Fu,
        v21,
        v23);
      v6 = v27;
    }
    if ( v6 < 0 )
    {
      v7 = 800LL;
      goto LABEL_9;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_VirtualDesktopManager,
         &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
         (char *)this + 384);
  v27 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v10, &v27);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v6 = v27;
  }
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v10,
        &v27,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x325u,
        v21,
        v23);
      v6 = v27;
    }
    if ( v6 < 0 )
    {
      v7 = 806LL;
      goto LABEL_9;
    }
  }
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         &v29);
  v27 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v11, &v27);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v6 = v27;
  }
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        &v27,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x32Au,
        v21,
        v23);
      v6 = v27;
    }
    if ( v6 < 0 )
    {
      v12 = 810LL;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
LABEL_71:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      return (unsigned int)v6;
    }
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v29 + 32LL))(
         v29,
         ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 120) >> 64),
         (char *)this + 164);
  v27 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v13, &v27);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v6 = v27;
  }
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v13,
        &v27,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x32Cu,
        v21,
        v23);
      v6 = v27;
    }
    if ( v6 < 0 )
    {
      v12 = 812LL;
      goto LABEL_43;
    }
  }
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &v28);
  v27 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v14, &v27);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v6 = v27;
  }
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v14,
        &v27,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x334u,
        v21,
        v23);
      v6 = v27;
    }
    if ( v6 < 0 )
    {
      v15 = 821LL;
LABEL_70:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      goto LABEL_71;
    }
  }
  v22 = (unsigned __int64 *)((char *)this + 160);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v28 + 24LL))(
         v28,
         &unk_180478A60,
         11LL,
         ((unsigned __int64)this - 48) & -(__int64)(this != (ViewEventDispatcher *)120));
  v27 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v16, &v27);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v6 = v27;
  }
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v16,
        &v27,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x34Bu,
        v22,
        v23);
      v6 = v27;
    }
    if ( v6 < 0 )
    {
      v15 = 844LL;
      goto LABEL_70;
    }
  }
  try
  {
    v17 = std::make_shared<ConnectedStandbyHelper,>(&v24);
    v18 = (ConnectedStandbyHelper **)((char *)this + 416);
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 52, v17);
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
  }
  catch ( ... )
  {
    v27 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x352,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    return (unsigned int)v27;
  }
  v6 = ConnectedStandbyHelper::Initialize(
         *v18,
         (struct IWindowDispatcherConnectedStandby *)(((unsigned __int64)this - 56) & -(__int64)(this != (ViewEventDispatcher *)120)));
  v27 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v20, &v27);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v6 = v27;
  }
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v20,
        &v27,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x353u,
        v22,
        v23);
      v6 = v27;
    }
    if ( v6 < 0 )
    {
      v15 = 851LL;
      goto LABEL_70;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  return 0LL;
}
