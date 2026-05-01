/*
 * XREFs of ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18037E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802AEC94 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHidi.c)
 *     ?VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18038AF24 (-VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePo.c)
 *     ?VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18039825C (-VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredVi.c)
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180398B3C (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180398E88 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CVirtualDesktopComponent::SubscribeToServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  CCriticalFailureHandler *v4; // rcx
  int Instance; // ebx
  CCriticalFailureHandler *v6; // rcx
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  __int64 v9; // rdx
  CCriticalFailureHandler *v10; // rcx
  CCriticalFailureHandler *v11; // rcx
  __int64 v12; // rcx
  CCriticalFailureHandler *v13; // rcx
  __int64 v14; // rdx
  CCriticalFailureHandler *v15; // rcx
  CCriticalFailureHandler *v16; // rcx
  CCriticalFailureHandler *v17; // rcx
  CCriticalFailureHandler *v18; // rcx
  CCriticalFailureHandler *v19; // rcx
  __int64 v20; // rcx
  CCriticalFailureHandler *v21; // rcx
  CCriticalFailureHandler *v22; // rcx
  __int64 v23; // rdx
  CCriticalFailureHandler *v24; // rcx
  const struct _GUID *v25; // r8
  CCriticalFailureHandler *v26; // rcx
  __int64 v27; // rdx
  CCriticalFailureHandler *v28; // rcx
  CCriticalFailureHandler *v29; // rcx
  __int64 v30; // rdx
  CCriticalFailureHandler *v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  const struct _GUID *v37; // r8
  CCriticalFailureHandler *v38; // rcx
  CCriticalFailureHandler *v39; // rcx
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  int v42; // eax
  unsigned __int64 *v44; // [rsp+28h] [rbp-59h]
  unsigned __int64 *v45; // [rsp+28h] [rbp-59h]
  unsigned __int64 *v46; // [rsp+30h] [rbp-51h]
  unsigned __int64 *v47; // [rsp+30h] [rbp-51h]
  struct IVirtualDesktopLock *v48; // [rsp+38h] [rbp-49h]
  void **v49; // [rsp+40h] [rbp-41h]
  void *v50; // [rsp+58h] [rbp-29h] BYREF
  __int64 v51; // [rsp+60h] [rbp-21h] BYREF
  struct ITabViewManager *v52; // [rsp+68h] [rbp-19h] BYREF
  __int64 v53; // [rsp+70h] [rbp-11h] BYREF
  struct IInspectable *v54; // [rsp+78h] [rbp-9h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *v55; // [rsp+80h] [rbp-1h] BYREF
  __int64 v56; // [rsp+88h] [rbp+7h] BYREF
  RTL_SRWLOCK *v57[9]; // [rsp+90h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  unsigned __int64 *v59; // [rsp+F0h] [rbp+6Fh] BYREF
  void *v60; // [rsp+F8h] [rbp+77h] BYREF
  unsigned int v61; // [rsp+100h] [rbp+7Fh] BYREF

  v57[1] = (RTL_SRWLOCK *)-2LL;
  v51 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
  Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
               a2,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &v51);
  LODWORD(v59) = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v60) >= 0 )
  {
    switch ( (_DWORD)v60 )
    {
      case 2:
        Instance = -2023406815;
        goto LABEL_11;
      case 3:
        Instance = -2023406814;
        goto LABEL_11;
      case 4:
        Instance = -2147418094;
        goto LABEL_11;
      case 5:
        Instance = -2147022986;
LABEL_11:
        LODWORD(v59) = Instance;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_13:
  if ( Instance >= 0 )
    goto LABEL_19;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v4,
      (int *)&v59,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0xD5u,
      v44,
      v46);
    Instance = (int)v59;
  }
  if ( Instance >= 0 )
  {
LABEL_19:
    v56 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                 a2,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &v56);
    LODWORD(v59) = Instance;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_31:
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v6,
            (int *)&v59,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xD9u,
            v44,
            v46);
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD9,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_227:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
          goto LABEL_228;
        }
      }
      v53 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
      Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                   a2,
                   &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                   &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                   &v53);
      LODWORD(v59) = Instance;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_49:
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v7,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xDDu,
              v44,
              v46);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xDD,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_226:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
            goto LABEL_227;
          }
        }
        v52 = 0LL;
        v55 = 0LL;
        v54 = 0LL;
        if ( *((_QWORD *)this + 23) )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct ITabViewManager **))a2->lpVtbl->QueryService)(
                       a2,
                       &unk_180484740,
                       &GUID_c07fc549_09c7_480a_855c_3d8a695f82c3,
                       &v52);
          LODWORD(v59) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v8, (int *)&v59);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v8,
                (int *)&v59,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xE5u,
                v44,
                v46);
              Instance = (int)v59;
            }
            if ( Instance < 0 )
            {
              v9 = 229LL;
LABEL_191:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v9,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                (const char *)(unsigned int)Instance);
              goto LABEL_225;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **))a2->lpVtbl->QueryService)(
                       a2,
                       &unk_180484720,
                       &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8,
                       &v55);
          LODWORD(v59) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v10, (int *)&v59);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v10,
                (int *)&v59,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xE8u,
                v44,
                v46);
              Instance = (int)v59;
            }
            if ( Instance < 0 )
            {
              v9 = 232LL;
              goto LABEL_191;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct IInspectable **))a2->lpVtbl->QueryService)(
                       a2,
                       &unk_180484730,
                       &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                       &v54);
          LODWORD(v59) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v11, (int *)&v59);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v11,
                (int *)&v59,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xEBu,
                v44,
                v46);
              Instance = (int)v59;
            }
            if ( Instance < 0 )
            {
              v9 = 235LL;
              goto LABEL_191;
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), v57);
        v12 = *((_QWORD *)this + 23);
        if ( v12 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, struct ITabViewManager *))(*(_QWORD *)v12 + 32LL))(v12, v52);
          LODWORD(v59) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v13, (int *)&v59);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v13,
                (int *)&v59,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xF2u,
                v44,
                v46);
              Instance = (int)v59;
            }
            if ( Instance < 0 )
            {
              v14 = 242LL;
LABEL_138:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v14,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                (const char *)(unsigned int)Instance);
LABEL_174:
              Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v57);
LABEL_225:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
              goto LABEL_226;
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
          Instance = VirtualDesktopGroupedViewsEventListener_CreateInstance(
                       v52,
                       v55,
                       v54,
                       *((struct IVirtualDesktopManagerPrivate **)this + 15),
                       *((struct IVirtualDesktopPinnedAppsPrivate **)this + 20),
                       *((struct IVirtualDesktopGroupedViewsPolicy **)this + 25),
                       *((struct IVirtualDesktopLock **)this + 13),
                       (const struct _GUID *)v49,
                       (void **)this + 24);
          LODWORD(v59) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v59);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v15,
                (int *)&v59,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xFBu,
                v44,
                v46);
              Instance = (int)v59;
            }
            if ( Instance < 0 )
            {
              v14 = 251LL;
              goto LABEL_138;
            }
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 152LL))(
                     *((_QWORD *)this + 15),
                     v51);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v16, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v16,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFDu,
              v44,
              v46);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v14 = 253LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 48LL))(
                     *((_QWORD *)this + 14),
                     v51);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v17, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v17,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFEu,
              v44,
              v46);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v14 = 254LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 24LL))(
                     *((_QWORD *)this + 18),
                     v51);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v18, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v18,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFFu,
              v44,
              v46);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v14 = 255LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 24LL))(
                     *((_QWORD *)this + 17),
                     v51);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v19,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x100u,
              v44,
              v46);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v14 = 256LL;
            goto LABEL_138;
          }
        }
        v20 = *((_QWORD *)this + 20);
        if ( v20 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 72LL))(v20, v51);
          LODWORD(v59) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v21, (int *)&v59);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v21,
                (int *)&v59,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0x104u,
                v44,
                v46);
              Instance = (int)v59;
            }
            if ( Instance < 0 )
            {
              v14 = 260LL;
              goto LABEL_138;
            }
          }
        }
        v50 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
        Instance = CVirtualDesktopApplicationViewEventListener_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopSwitchAnimator **)this + 16),
                     *((struct IVirtualDesktopForegroundPolicy **)this + 14),
                     *((struct IVirtualDesktopWindowMoveManager **)this + 17),
                     *((struct IVirtualDesktopPinnedAppsPrivate **)this + 20),
                     *((struct IVirtualDesktopLock **)this + 13),
                     (const struct _GUID *)v48,
                     &v50);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v22, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v22,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x10Fu,
              v45,
              v47);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v23 = 271LL;
LABEL_155:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_173:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
            goto LABEL_174;
          }
        }
        Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v56 + 24LL))(
                     v56,
                     v50,
                     (char *)this + 208);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v24, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v24,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x112u,
              v45,
              v47);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v23 = 274LL;
            goto LABEL_155;
          }
        }
        v60 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        Instance = VirtualDesktopTabletModeNotificationListener_CreateInstance(
                     *((struct IVirtualDesktopTabletModePolicy **)this + 19),
                     a2,
                     v25,
                     &v60);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v26, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v26,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x118u,
              v45,
              v47);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v27 = 280LL;
LABEL_172:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v27,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
            goto LABEL_173;
          }
        }
        Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v53 + 72LL))(
                     v53,
                     v60,
                     (char *)this + 212);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v28, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v28,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x11Au,
              v45,
              v47);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v27 = 282LL;
            goto LABEL_172;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v57);
        Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v53 + 24LL))(v53, &v61);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v29, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v29,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x11Fu,
              v45,
              v47);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v9 = 287LL;
            goto LABEL_191;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 19) + 32LL))(
                     *((_QWORD *)this + 19),
                     v61,
                     0LL);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v31, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v31,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x120u,
              v45,
              v47);
            Instance = (int)v59;
          }
          if ( Instance < 0 )
          {
            v9 = 288LL;
            goto LABEL_191;
          }
        }
        if ( *((_QWORD *)this + 21) )
        {
          v50 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
          v33 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, void **))a2->lpVtbl->QueryService)(
                  a2,
                  &unk_180484710,
                  &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                  &v50);
          Instance = v33;
          if ( v33 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x125,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v33);
LABEL_203:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
            goto LABEL_225;
          }
          v60 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
          v34 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, void **))a2->lpVtbl->QueryService)(
                  a2,
                  &unk_180484700,
                  &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
                  &v60);
          Instance = v34;
          if ( v34 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x128,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v34);
LABEL_202:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
            goto LABEL_203;
          }
          v59 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v59);
          v35 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, unsigned __int64 **))a2->lpVtbl->QueryService)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                  &v59);
          Instance = v35;
          if ( v35 < 0 )
          {
            v36 = 299LL;
LABEL_201:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v36,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v35);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v59);
            goto LABEL_202;
          }
          v45 = v59;
          v35 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, void *))(**((_QWORD **)this + 21) + 24LL))(
                  *((_QWORD *)this + 21),
                  v50,
                  v51,
                  v60);
          Instance = v35;
          if ( v35 < 0 )
          {
            v36 = 301LL;
            goto LABEL_201;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v59);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
        }
        wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsageToService(
          (__int64)v31,
          v30,
          v32);
        v50 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
        Instance = CVirtualDesktopHolographicViewTransitionNotification_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopLock **)this + 13),
                     v37,
                     &v50);
        LODWORD(v59) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v38, (int *)&v59);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v59;
        }
        if ( Instance >= 0 )
          goto LABEL_213;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v38,
            (int *)&v59,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x136u,
            v45,
            v47);
          Instance = (int)v59;
        }
        if ( Instance >= 0 )
        {
LABEL_213:
          v60 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void **))a2->lpVtbl->QueryService)(
                       a2,
                       &GUID_5090de35_ed23_43be_9714_586c5041026a,
                       &GUID_5090de35_ed23_43be_9714_586c5041026a,
                       &v60);
          LODWORD(v59) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v39, (int *)&v59);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v59;
          }
          if ( Instance >= 0 )
            goto LABEL_221;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v39,
              (int *)&v59,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x13Au,
              v45,
              v47);
            Instance = (int)v59;
          }
          if ( Instance >= 0 )
          {
LABEL_221:
            v42 = (*(__int64 (__fastcall **)(void *, void *, char *))(*(_QWORD *)v60 + 24LL))(
                    v60,
                    v50,
                    (char *)this + 216);
            Instance = v42;
            if ( v42 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
              Instance = 0;
              goto LABEL_225;
            }
            v40 = (unsigned int)v42;
            v41 = 315LL;
          }
          else
          {
            v40 = (unsigned int)Instance;
            v41 = 314LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v41,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)v40);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x136,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
        }
        goto LABEL_203;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v60) >= 0 )
      {
        switch ( (_DWORD)v60 )
        {
          case 2:
            Instance = -2023406815;
            goto LABEL_47;
          case 3:
            Instance = -2023406814;
            goto LABEL_47;
          case 4:
            Instance = -2147418094;
            goto LABEL_47;
          case 5:
            Instance = -2147022986;
LABEL_47:
            LODWORD(v59) = Instance;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_49;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v60) >= 0 )
    {
      switch ( (_DWORD)v60 )
      {
        case 2:
          Instance = -2023406815;
          goto LABEL_29;
        case 3:
          Instance = -2023406814;
          goto LABEL_29;
        case 4:
          Instance = -2147418094;
          goto LABEL_29;
        case 5:
          Instance = -2147022986;
LABEL_29:
          LODWORD(v59) = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
    (const char *)(unsigned int)Instance);
LABEL_228:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
  return (unsigned int)Instance;
}
