/*
 * XREFs of ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180403B70
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800497EC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180326764 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHidi.c)
 *     ?VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180410480 (-VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePo.c)
 *     ?VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18041D788 (-VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredVi.c)
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18041DB4C (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18041DE98 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180428438 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804284AC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CVirtualDesktopComponent::SubscribeToServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // ebx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v8; // rcx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v10; // rcx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v12; // rcx
  __int64 v13; // rdx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v15; // rcx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v17; // rcx
  __int64 v18; // rcx
  CCriticalFailureHandler *v19; // rcx
  __int64 v20; // rdx
  CCriticalFailureHandler *v21; // rcx
  CCriticalFailureHandler *v22; // rcx
  CCriticalFailureHandler *v23; // rcx
  CCriticalFailureHandler *v24; // rcx
  CCriticalFailureHandler *v25; // rcx
  __int64 v26; // rcx
  CCriticalFailureHandler *v27; // rcx
  CCriticalFailureHandler *v28; // rcx
  __int64 v29; // rdx
  CCriticalFailureHandler *v30; // rcx
  const struct _GUID *v31; // r8
  CCriticalFailureHandler *v32; // rcx
  __int64 v33; // rdx
  CCriticalFailureHandler *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  CCriticalFailureHandler *v37; // rcx
  __int64 v38; // rdx
  CCriticalFailureHandler *v39; // rcx
  __int64 v40; // r8
  HRESULT (__stdcall *v41)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v42; // eax
  HRESULT (__stdcall *v43)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v44; // eax
  HRESULT (__stdcall *v45)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v46; // eax
  __int64 v47; // rdx
  const struct _GUID *v48; // r8
  CCriticalFailureHandler *v49; // rcx
  HRESULT (__stdcall *v50)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v51; // rcx
  unsigned __int64 v52; // r9
  __int64 v53; // rdx
  int v54; // eax
  unsigned __int64 *v56; // [rsp+28h] [rbp-59h]
  unsigned __int64 *v57; // [rsp+28h] [rbp-59h]
  unsigned __int64 *v58; // [rsp+30h] [rbp-51h]
  unsigned __int64 *v59; // [rsp+30h] [rbp-51h]
  struct IVirtualDesktopLock *v60; // [rsp+38h] [rbp-49h]
  void **v61; // [rsp+40h] [rbp-41h]
  void *v62; // [rsp+58h] [rbp-29h] BYREF
  __int64 v63; // [rsp+60h] [rbp-21h] BYREF
  struct ITabViewManager *v64; // [rsp+68h] [rbp-19h] BYREF
  __int64 v65; // [rsp+70h] [rbp-11h] BYREF
  struct IInspectable *v66; // [rsp+78h] [rbp-9h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *v67; // [rsp+80h] [rbp-1h] BYREF
  __int64 v68; // [rsp+88h] [rbp+7h] BYREF
  RTL_SRWLOCK *v69[9]; // [rsp+90h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  unsigned __int64 *v71; // [rsp+F0h] [rbp+6Fh] BYREF
  void *v72; // [rsp+F8h] [rbp+77h] BYREF
  unsigned int v73; // [rsp+100h] [rbp+7Fh] BYREF

  v69[1] = (RTL_SRWLOCK *)-2LL;
  v63 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v63);
  Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
               a2,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &v63);
  LODWORD(v71) = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v72) >= 0 )
  {
    switch ( (_DWORD)v72 )
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
        LODWORD(v71) = Instance;
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
      v5,
      (int *)&v71,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0xD5u,
      v56,
      v58);
    Instance = (int)v71;
  }
  if ( Instance >= 0 )
  {
LABEL_19:
    v68 = 0LL;
    v7 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v68);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v7)(
                 a2,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &v68);
    LODWORD(v71) = Instance;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_31:
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v8,
            (int *)&v71,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xD9u,
            v56,
            v58);
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD9,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_230:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v68);
          goto LABEL_231;
        }
      }
      v65 = 0LL;
      v9 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
      Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v9)(
                   a2,
                   &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                   &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                   &v65);
      LODWORD(v71) = Instance;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_49:
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v10,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xDDu,
              v56,
              v58);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xDD,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_229:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
            goto LABEL_230;
          }
        }
        v64 = 0LL;
        v67 = 0LL;
        v66 = 0LL;
        if ( *((_QWORD *)this + 23) )
        {
          v11 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct ITabViewManager **))v11)(
                       a2,
                       &unk_1805274C0,
                       &GUID_d1710073_c814_4a0c_9685_00e44547418f,
                       &v64);
          LODWORD(v71) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v12, (int *)&v71);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v12,
                (int *)&v71,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xE5u,
                v56,
                v58);
              Instance = (int)v71;
            }
            if ( Instance < 0 )
            {
              v13 = 229LL;
LABEL_194:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v13,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                (const char *)(unsigned int)Instance);
              goto LABEL_228;
            }
          }
          v14 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **))v14)(
                       a2,
                       &unk_1805274A0,
                       &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8,
                       &v67);
          LODWORD(v71) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v71);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v15,
                (int *)&v71,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xE8u,
                v56,
                v58);
              Instance = (int)v71;
            }
            if ( Instance < 0 )
            {
              v13 = 232LL;
              goto LABEL_194;
            }
          }
          v16 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct IInspectable **))v16)(
                       a2,
                       &unk_1805274B0,
                       &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                       &v66);
          LODWORD(v71) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v17, (int *)&v71);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v17,
                (int *)&v71,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xEBu,
                v56,
                v58);
              Instance = (int)v71;
            }
            if ( Instance < 0 )
            {
              v13 = 235LL;
              goto LABEL_194;
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), v69);
        v18 = *((_QWORD *)this + 23);
        if ( v18 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, struct ITabViewManager *))(*(_QWORD *)v18 + 32LL))(v18, v64);
          LODWORD(v71) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v71);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v19,
                (int *)&v71,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xF2u,
                v56,
                v58);
              Instance = (int)v71;
            }
            if ( Instance < 0 )
            {
              v20 = 242LL;
LABEL_138:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v20,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                (const char *)(unsigned int)Instance);
LABEL_175:
              Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v69);
LABEL_228:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
              goto LABEL_229;
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
          Instance = VirtualDesktopGroupedViewsEventListener_CreateInstance(
                       v64,
                       v67,
                       v66,
                       *((struct IVirtualDesktopManagerPrivate **)this + 15),
                       *((struct IVirtualDesktopPinnedAppsPrivate **)this + 20),
                       *((struct IVirtualDesktopGroupedViewsPolicy **)this + 25),
                       *((struct IVirtualDesktopLock **)this + 13),
                       (const struct _GUID *)v61,
                       (void **)this + 24);
          LODWORD(v71) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v21, (int *)&v71);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v21,
                (int *)&v71,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xFBu,
                v56,
                v58);
              Instance = (int)v71;
            }
            if ( Instance < 0 )
            {
              v20 = 251LL;
              goto LABEL_138;
            }
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 152LL))(
                     *((_QWORD *)this + 15),
                     v63);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v22, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v22,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFDu,
              v56,
              v58);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v20 = 253LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 48LL))(
                     *((_QWORD *)this + 14),
                     v63);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v23, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v23,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFEu,
              v56,
              v58);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v20 = 254LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 24LL))(
                     *((_QWORD *)this + 18),
                     v63);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v24, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v24,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFFu,
              v56,
              v58);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v20 = 255LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 24LL))(
                     *((_QWORD *)this + 17),
                     v63);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v25, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v25,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x100u,
              v56,
              v58);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v20 = 256LL;
            goto LABEL_138;
          }
        }
        v26 = *((_QWORD *)this + 20);
        if ( v26 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 72LL))(v26, v63);
          LODWORD(v71) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v27, (int *)&v71);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v27,
                (int *)&v71,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0x104u,
                v56,
                v58);
              Instance = (int)v71;
            }
            if ( Instance < 0 )
            {
              v20 = 260LL;
              goto LABEL_138;
            }
          }
        }
        v72 = 0LL;
        Instance = CVirtualDesktopApplicationViewEventListener_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopSwitchAnimator **)this + 16),
                     *((struct IVirtualDesktopForegroundPolicy **)this + 14),
                     *((struct IVirtualDesktopWindowMoveManager **)this + 17),
                     *((struct IVirtualDesktopPinnedAppsPrivate **)this + 20),
                     *((struct IVirtualDesktopLock **)this + 13),
                     (const struct _GUID *)v60,
                     &v72);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v28, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v28,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x10Fu,
              v57,
              v59);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v29 = 271LL;
LABEL_155:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v29,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
            goto LABEL_173;
          }
        }
        Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v68 + 24LL))(
                     v68,
                     v72,
                     (char *)this + 208);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v30, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v30,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x112u,
              v57,
              v59);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v29 = 274LL;
            goto LABEL_155;
          }
        }
        v62 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        Instance = VirtualDesktopTabletModeNotificationListener_CreateInstance(
                     *((struct IVirtualDesktopTabletModePolicy **)this + 19),
                     a2,
                     v31,
                     &v62);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v32, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v32,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x118u,
              v57,
              v59);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v33 = 280LL;
LABEL_172:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v33,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
LABEL_173:
            v35 = v72;
            if ( v72 )
            {
              v72 = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
            }
            goto LABEL_175;
          }
        }
        Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v65 + 72LL))(
                     v65,
                     v62,
                     (char *)this + 212);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v34, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v34,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x11Au,
              v57,
              v59);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v33 = 282LL;
            goto LABEL_172;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        v36 = v72;
        if ( v72 )
        {
          v72 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v36 + 16LL))(v36);
        }
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v69);
        Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v65 + 24LL))(v65, &v73);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v37, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v37,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x11Fu,
              v57,
              v59);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v13 = 287LL;
            goto LABEL_194;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 19) + 32LL))(
                     *((_QWORD *)this + 19),
                     v73,
                     0LL);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v39, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v39,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x120u,
              v57,
              v59);
            Instance = (int)v71;
          }
          if ( Instance < 0 )
          {
            v13 = 288LL;
            goto LABEL_194;
          }
        }
        if ( *((_QWORD *)this + 21) )
        {
          v62 = 0LL;
          v41 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
          v42 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, void **))v41)(
                  a2,
                  &unk_180527480,
                  &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                  &v62);
          Instance = v42;
          if ( v42 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x125,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v42);
LABEL_206:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
            goto LABEL_228;
          }
          v72 = 0LL;
          v43 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
          v44 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, void **))v43)(
                  a2,
                  &unk_180527490,
                  &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
                  &v72);
          Instance = v44;
          if ( v44 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x128,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v44);
LABEL_205:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
            goto LABEL_206;
          }
          v71 = 0LL;
          v45 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v71);
          v46 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, unsigned __int64 **))v45)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                  &v71);
          Instance = v46;
          if ( v46 < 0 )
          {
            v47 = 299LL;
LABEL_204:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v47,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v46);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v71);
            goto LABEL_205;
          }
          v57 = v71;
          v46 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, void *))(**((_QWORD **)this + 21) + 24LL))(
                  *((_QWORD *)this + 21),
                  v62,
                  v63,
                  v72);
          Instance = v46;
          if ( v46 < 0 )
          {
            v47 = 301LL;
            goto LABEL_204;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v71);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        }
        wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsageToService(
          (__int64)v39,
          v38,
          v40);
        v62 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        Instance = CVirtualDesktopHolographicViewTransitionNotification_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopLock **)this + 13),
                     v48,
                     &v62);
        LODWORD(v71) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v49, (int *)&v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v71;
        }
        if ( Instance >= 0 )
          goto LABEL_216;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v49,
            (int *)&v71,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x136u,
            v57,
            v59);
          Instance = (int)v71;
        }
        if ( Instance >= 0 )
        {
LABEL_216:
          v72 = 0LL;
          v50 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void **))v50)(
                       a2,
                       &GUID_5090de35_ed23_43be_9714_586c5041026a,
                       &GUID_5090de35_ed23_43be_9714_586c5041026a,
                       &v72);
          LODWORD(v71) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v51, (int *)&v71);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v71;
          }
          if ( Instance >= 0 )
            goto LABEL_224;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v51,
              (int *)&v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x13Au,
              v57,
              v59);
            Instance = (int)v71;
          }
          if ( Instance >= 0 )
          {
LABEL_224:
            v54 = (*(__int64 (__fastcall **)(void *, void *, char *))(*(_QWORD *)v72 + 24LL))(
                    v72,
                    v62,
                    (char *)this + 216);
            Instance = v54;
            if ( v54 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
              Instance = 0;
              goto LABEL_228;
            }
            v52 = (unsigned int)v54;
            v53 = 315LL;
          }
          else
          {
            v52 = (unsigned int)Instance;
            v53 = 314LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v53,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)v52);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x136,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
        }
        goto LABEL_206;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v72) >= 0 )
      {
        switch ( (_DWORD)v72 )
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
            LODWORD(v71) = Instance;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_49;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v72) >= 0 )
    {
      switch ( (_DWORD)v72 )
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
          LODWORD(v71) = Instance;
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
LABEL_231:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v63);
  return (unsigned int)Instance;
}
