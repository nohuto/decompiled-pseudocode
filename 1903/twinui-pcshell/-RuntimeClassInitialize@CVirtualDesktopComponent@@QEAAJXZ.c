/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1803E3550
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803E3210 (--$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180040A08 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180054460 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008848E (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180116064 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180371CC0 (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E57B8 (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E6390 (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E695C (-CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@.c)
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E7580 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E81D0 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E8EFC (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEA.c)
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1803E9424 (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803EA00C (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x1803EA490 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 *     ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803EB3C4 (-CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVis.c)
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F0DE8 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1803F18AC (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F1F24 (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F2198 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F2F38 (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F7150 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FB8B8 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FC05C (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FC8DC (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180408E08 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CVirtualDesktopComponent::RuntimeClassInitialize(CVirtualDesktopComponent *this)
{
  void **v2; // r12
  const struct _GUID *v3; // rcx
  CCriticalFailureHandler *v4; // rcx
  int Instance; // ebx
  unsigned int UniqueContext; // r15d
  const struct _GUID *v7; // r8
  CCriticalFailureHandler *v8; // rcx
  const struct _GUID *v9; // rdx
  CCriticalFailureHandler *v10; // rcx
  const struct _GUID *v11; // r8
  CCriticalFailureHandler *v12; // rcx
  const struct _GUID *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  const struct _GUID *v15; // rdx
  CCriticalFailureHandler *v16; // rcx
  LANGID ThreadUILanguage_0; // ax
  bool v18; // bl
  const struct _GUID *v19; // r9
  CCriticalFailureHandler *v20; // rcx
  const struct _GUID *v21; // rcx
  CCriticalFailureHandler *v22; // rcx
  __int64 v23; // rdx
  const struct _GUID *v24; // r9
  CCriticalFailureHandler *v25; // rcx
  struct IVirtualDesktopManagerPrivate **v26; // rsi
  CCriticalFailureHandler *v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // edi
  CCriticalFailureHandler *v30; // rcx
  CCriticalFailureHandler *v31; // rcx
  CCriticalFailureHandler *v32; // rcx
  const struct _GUID *v33; // rdx
  CCriticalFailureHandler *v34; // rcx
  __int64 v35; // rdx
  const struct _GUID *v36; // r8
  CCriticalFailureHandler *v37; // rcx
  const struct _GUID *v38; // r9
  CCriticalFailureHandler *v39; // rcx
  struct IVirtualDesktopNotification *v40; // rbx
  __int64 (__fastcall *v41)(struct IVirtualDesktopNotification *, GUID *, __int64 *); // rdi
  CCriticalFailureHandler *v42; // rcx
  unsigned int v43; // edi
  CCriticalFailureHandler *v44; // rcx
  const struct _GUID *v45; // rdx
  CCriticalFailureHandler *v46; // rcx
  struct IVirtualDesktopPinnedAppsPrivate **v47; // r15
  CCriticalFailureHandler *v48; // rcx
  CCriticalFailureHandler *v49; // rcx
  __int64 v50; // rdx
  CCriticalFailureHandler *v51; // rcx
  CCriticalFailureHandler *v52; // rcx
  unsigned __int64 *v54; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v55; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v56; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v57; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v58; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v59; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v60; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v61; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v62; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v63; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v64; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v65; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v66; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v67; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v68; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v69; // [rsp+30h] [rbp-D8h]
  const struct _GUID *v70; // [rsp+40h] [rbp-C8h]
  int v71; // [rsp+58h] [rbp-B0h] BYREF
  int v72; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v73[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct IVirtualDesktopCollection *v74; // [rsp+68h] [rbp-A0h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v75; // [rsp+70h] [rbp-98h] BYREF
  struct IVirtualDesktopNotification *v76; // [rsp+78h] [rbp-90h] BYREF
  struct IVirtualDesktopPersistence *v77; // [rsp+80h] [rbp-88h] BYREF
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v78; // [rsp+88h] [rbp-80h] BYREF
  struct IVirtualDesktopRegistryHelpers *v79; // [rsp+90h] [rbp-78h] BYREF
  __int64 v80; // [rsp+98h] [rbp-70h] BYREF
  void *v81; // [rsp+A0h] [rbp-68h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v82; // [rsp+A8h] [rbp-60h] BYREF
  struct IVirtualDesktopFactory *v83[3]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v84; // [rsp+C8h] [rbp-40h] BYREF
  struct IVirtualDesktopManagerPrivate *v85; // [rsp+D8h] [rbp-30h]
  __int64 v86; // [rsp+E0h] [rbp-28h]
  __int128 v87; // [rsp+E8h] [rbp-20h]
  void *v88; // [rsp+F8h] [rbp-10h]
  __int64 v89; // [rsp+100h] [rbp-8h]
  __int128 v90; // [rsp+108h] [rbp+0h]
  struct IVirtualDesktopNotification *v91; // [rsp+118h] [rbp+10h]
  __int64 v92; // [rsp+120h] [rbp+18h]
  GUID v93; // [rsp+128h] [rbp+20h]
  __int64 v94; // [rsp+138h] [rbp+30h]
  __int64 v95; // [rsp+140h] [rbp+38h]
  __int128 v96; // [rsp+148h] [rbp+40h]
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v97; // [rsp+158h] [rbp+50h]
  __int64 v98; // [rsp+160h] [rbp+58h]
  __int128 v99; // [rsp+168h] [rbp+60h]
  __int64 v100; // [rsp+178h] [rbp+70h]
  __int64 v101; // [rsp+180h] [rbp+78h]
  GUID v102; // [rsp+188h] [rbp+80h]
  __int64 v103; // [rsp+198h] [rbp+90h]
  __int64 v104; // [rsp+1A0h] [rbp+98h]
  __int128 v105; // [rsp+1A8h] [rbp+A0h]
  struct IVirtualDesktopPinnedAppsPrivate *v106; // [rsp+1B8h] [rbp+B0h]
  __int64 v107; // [rsp+1C0h] [rbp+B8h]
  __int128 v108; // [rsp+1C8h] [rbp+C0h]
  __int64 v109; // [rsp+1D8h] [rbp+D0h]
  __int64 v110; // [rsp+1E0h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v83[1] = (struct IVirtualDesktopFactory *)-2LL;
  v2 = (void **)((char *)this + 144);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Instance = CVirtualDesktopLock_CreateInstance(v3, v2);
  v71 = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v73[1]) >= 0 )
  {
    switch ( v73[1] )
    {
      case 2u:
        Instance = -2023406815;
        goto LABEL_11;
      case 3u:
        Instance = -2023406814;
        goto LABEL_11;
      case 4u:
        Instance = -2147418094;
        goto LABEL_11;
      case 5u:
        Instance = -2147022986;
LABEL_11:
        v71 = Instance;
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
      &v71,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0x38u,
      v54,
      v65);
    Instance = v71;
  }
  if ( Instance >= 0 )
  {
LABEL_19:
    UniqueContext = SHTaskPoolGetUniqueContext(v4);
    v76 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v76);
    Instance = CVirtualDesktopNotifications_CreateInstance(
                 UniqueContext,
                 (struct IVirtualDesktopLock *)*v2,
                 v7,
                 (void **)&v76);
    v71 = Instance;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_31:
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v8,
            &v71,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x3Eu,
            v54,
            v65);
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_221:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v76);
          return (unsigned int)Instance;
        }
      }
      v75 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v75);
      Instance = CVirtualDesktopVisibilityPolicy_CreateInstance(v76, v9, (void **)&v75);
      v71 = Instance;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_49:
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v10,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x42u,
              v54,
              v65);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x42,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_220:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v75);
            goto LABEL_221;
          }
        }
        v83[0] = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v83);
        Instance = CVirtualDesktopFactory_CreateInstance(v75, (struct IVirtualDesktopLock *)*v2, v11, (void **)v83);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v12, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v12,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x46u,
              v54,
              v65);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x46,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_219:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v83);
            goto LABEL_220;
          }
        }
        v79 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v79);
        Instance = VirtualDesktopRegistryHelpers_CreateInstance(v13, (void **)&v79);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v14, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v14,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x4Au,
              v54,
              v65);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4A,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_218:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v79);
            goto LABEL_219;
          }
        }
        v77 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
        Instance = VirtualDesktopPersistence_CreateInstance(v79, v15, (void **)&v77);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v16, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v16,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x4Eu,
              v54,
              v65);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4E,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_217:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
            goto LABEL_218;
          }
        }
        v74 = 0LL;
        ThreadUILanguage_0 = GetThreadUILanguage_0();
        v18 = (unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v74);
        Instance = CVirtualDesktopCollection_CreateInstance(v83[0], v77, v18, v19, (void **)&v74);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v20, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v20,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x52u,
              v55,
              v65);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x52,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_216:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v74);
            goto LABEL_217;
          }
        }
        v82 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v82);
        Instance = CVirtualDesktopDefaultForegroundHandler_CreateInstance(v21, (void **)&v82);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v22, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v22,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x56u,
              v55,
              v65);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            v23 = 86LL;
LABEL_133:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_215:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v82);
            goto LABEL_216;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
        Instance = CVirtualDesktopForegroundPolicy_CreateInstance(v74, v75, v82, v24, (void **)this + 19);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v25, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v25,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x5Cu,
              v56,
              v65);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            v23 = 92LL;
            goto LABEL_133;
          }
        }
        wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)v25, 3u);
        v26 = (struct IVirtualDesktopManagerPrivate **)((char *)this + 160);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
        Instance = CVirtualDesktopManager_CreateInstance(
                     v74,
                     v75,
                     v76,
                     *((struct IVirtualDesktopForegroundPolicy **)this + 19),
                     v77,
                     *((struct IVirtualDesktopGroupedViewsPolicy **)this + 30),
                     (struct IVirtualDesktopLock *)*v2,
                     v70,
                     (void **)this + 20);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v27, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          v29 = 114;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v27,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x72u,
              v57,
              v66);
            Instance = v71;
          }
          if ( Instance < 0 )
            goto LABEL_132;
        }
        Instance = wil::wnf_query_nothrow<enum _TABLETMODESTATE>((__int64)v27, (char *)&v72, (__int64)v73, v28);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v30, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          v29 = 118;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v30,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x76u,
              v57,
              v66);
            Instance = v71;
          }
          if ( Instance < 0 )
            goto LABEL_132;
        }
        v73[0] &= -((_BYTE)v72 != 0);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
        v58 = (unsigned __int64 *)*v2;
        Instance = VirtualDesktopTabletModePolicy_CreateInstance(v73[0], v74, *v26, v75);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v31, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v31,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x83u,
              v58,
              v66);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            v23 = 131LL;
            goto LABEL_133;
          }
        }
        v59 = (unsigned __int64 *)*((_QWORD *)this + 24);
        Instance = (*(__int64 (__fastcall **)(struct IVirtualDesktopPersistence *, _QWORD, struct IVirtualDesktopManagerPrivate *, struct IVirtualDesktopCollection *))(*(_QWORD *)v77 + 40LL))(
                     v77,
                     v73[0],
                     *v26,
                     v74);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v32, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          v29 = 135;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v32,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x87u,
              v59,
              v66);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
LABEL_132:
            v23 = v29;
            goto LABEL_133;
          }
        }
        v78 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v78);
        Instance = VirtualDesktopAnimationSyncNotifications_CreateInstance(UniqueContext, v33, (void **)&v78);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v34, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v34,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x8Cu,
              v59,
              v66);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            v35 = 140LL;
LABEL_150:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v35,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_214:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v78);
            goto LABEL_215;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
        Instance = VirtualDesktopSwitchAnimator_CreateInstance(*v26, v78, v36, (void **)this + 21);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v37, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v37,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x91u,
              v59,
              v66);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            v35 = 145LL;
            goto LABEL_150;
          }
        }
        v81 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v81);
        Instance = CVirtualDesktopHotkeyHandler_CreateInstance(
                     *v26,
                     *((struct IVirtualDesktopSwitchAnimator **)this + 21),
                     (struct IVirtualDesktopLock *)*v2,
                     v38,
                     &v81);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v39, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v39,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x98u,
              v60,
              v66);
            Instance = v71;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x98,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_213:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v81);
            goto LABEL_214;
          }
        }
        v80 = 0LL;
        v40 = v76;
        v41 = **(__int64 (__fastcall ***)(struct IVirtualDesktopNotification *, GUID *, __int64 *))v76;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v80);
        Instance = v41(v40, &GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68, &v80);
        v71 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v42, &v71);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v71;
        }
        if ( Instance >= 0 )
          goto LABEL_186;
        v43 = 155;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v42,
            &v71,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x9Bu,
            v60,
            v66);
          Instance = v71;
        }
        if ( Instance >= 0 )
        {
LABEL_186:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
          v61 = (unsigned __int64 *)*v2;
          Instance = VirtualDesktopAcessibility_CreateInstance(v73[0], v80, v74, *v26);
          v71 = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v44, &v71);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = v71;
          }
          if ( Instance >= 0 )
            goto LABEL_225;
          v43 = 164;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v44,
              &v71,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xA4u,
              v61,
              v66);
            Instance = v71;
          }
          if ( Instance >= 0 )
          {
LABEL_225:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
            Instance = VirtualDesktopGestureHandler_CreateInstance(*v26, v45, (void **)this + 26);
            v71 = Instance;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v46, &v71);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              Instance = v71;
            }
            if ( Instance >= 0 )
              goto LABEL_226;
            v43 = 166;
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v46,
                &v71,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xA6u,
                v61,
                v66);
              Instance = v71;
            }
            if ( Instance >= 0 )
            {
LABEL_226:
              v47 = (struct IVirtualDesktopPinnedAppsPrivate **)((char *)this + 200);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
              Instance = VirtualDesktopPinnedAppsHandler_CreateInstance(
                           *v26,
                           v79,
                           v75,
                           *((struct IVirtualDesktopGroupedViewsPolicy **)this + 30),
                           (struct IVirtualDesktopLock *)*v2,
                           (const struct _GUID *)v66,
                           (void **)this + 25);
              v71 = Instance;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v48, &v71);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                Instance = v71;
              }
              if ( Instance >= 0 )
                goto LABEL_187;
              v43 = 174;
              if ( Instance != -2147024882 && Instance != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v48,
                  &v71,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                  0xAEu,
                  v62,
                  v67);
                Instance = v71;
              }
              if ( Instance >= 0 )
              {
LABEL_187:
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
                Instance = VirtualDesktopWindowMoveManager_CreateInstance(
                             *v26,
                             v74,
                             v75,
                             *v47,
                             (const struct _GUID *)v62,
                             (void **)this + 22);
                v71 = Instance;
                if ( !CRVPrivate::cfhImmersiveShellStartup )
                {
                  CCriticalFailureHandler::GetFakeFailure(v49, &v71);
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  Instance = v71;
                }
                if ( Instance < 0 )
                {
                  if ( Instance != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v49,
                      &v71,
                      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                      0xB5u,
                      v63,
                      v68);
                    Instance = v71;
                  }
                  if ( Instance < 0 )
                  {
                    v50 = 181LL;
LABEL_210:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v50,
                      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                      (const char *)(unsigned int)Instance);
LABEL_212:
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v80);
                    goto LABEL_213;
                  }
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
                Instance = VirtualDesktopsApi_CreateInstance(
                             *v26,
                             v74,
                             v75,
                             *((struct IVirtualDesktopWindowMoveManager **)this + 22),
                             *((struct IVirtualDesktopLock **)this + 18),
                             (const struct _GUID *)v68,
                             (void **)this + 23);
                v71 = Instance;
                if ( !CRVPrivate::cfhImmersiveShellStartup )
                {
                  CCriticalFailureHandler::GetFakeFailure(v51, &v71);
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  Instance = v71;
                }
                if ( Instance >= 0 )
                  goto LABEL_208;
                v43 = 189;
                if ( Instance != -2147024882 && Instance != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v51,
                    &v71,
                    L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                    0xBDu,
                    v64,
                    v69);
                  Instance = v71;
                }
                if ( Instance >= 0 )
                {
LABEL_208:
                  v84 = *(_OWORD *)&SID_VirtualDesktopManager.Revision;
                  v85 = *v26;
                  v86 = 0LL;
                  v87 = *(_OWORD *)&SID_VirtualDesktopHotkeyHandler.Revision;
                  v88 = v81;
                  v89 = 0LL;
                  v90 = *(_OWORD *)&SID_VirtualDesktopNotificationService.Revision;
                  v91 = v76;
                  v92 = 0LL;
                  v93 = IID_IVirtualDesktopManager;
                  v94 = *((_QWORD *)this + 23);
                  v95 = 0LL;
                  v96 = *(_OWORD *)&SID_VirtualDesktopAnimationSyncNotificationService.Revision;
                  v97 = v78;
                  v98 = 0LL;
                  v99 = *(_OWORD *)&SID_VirtualDesktopTabletModePolicyService.Revision;
                  v100 = *((_QWORD *)this + 24);
                  v101 = 0LL;
                  v102 = IID_IVirtualDesktopAccessibility;
                  v103 = *((_QWORD *)this + 27);
                  v104 = 0LL;
                  v105 = *(_OWORD *)&SID_VirtualDesktopPinnedApps.Revision;
                  v106 = *v47;
                  v107 = 0LL;
                  v108 = *(_OWORD *)&SID_VirtualDesktopGestureHandler.Revision;
                  v109 = *((_QWORD *)this + 26);
                  v110 = 0LL;
                  Instance = CImmersiveShellComponent::RegisterServiceInformation(
                               (CVirtualDesktopComponent *)((char *)this + 40),
                               (const struct CImmersiveShellComponent::ISC_SERVICE *)&v84,
                               9LL);
                  v71 = Instance;
                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                  {
                    CCriticalFailureHandler::GetFakeFailure(v52, &v71);
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    Instance = v71;
                  }
                  if ( Instance >= 0 )
                    goto LABEL_211;
                  v43 = 203;
                  if ( Instance != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v52,
                      &v71,
                      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                      0xCBu,
                      v64,
                      v69);
                    Instance = v71;
                  }
                  if ( Instance >= 0 )
                  {
LABEL_211:
                    Instance = 0;
                    goto LABEL_212;
                  }
                }
              }
            }
          }
        }
        v50 = v43;
        goto LABEL_210;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v73[1]) >= 0 )
      {
        switch ( v73[1] )
        {
          case 2u:
            Instance = -2023406815;
            goto LABEL_47;
          case 3u:
            Instance = -2023406814;
            goto LABEL_47;
          case 4u:
            Instance = -2147418094;
            goto LABEL_47;
          case 5u:
            Instance = -2147022986;
LABEL_47:
            v71 = Instance;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_49;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v73[1]) >= 0 )
    {
      switch ( v73[1] )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_29;
        case 3u:
          Instance = -2023406814;
          goto LABEL_29;
        case 4u:
          Instance = -2147418094;
          goto LABEL_29;
        case 5u:
          Instance = -2147022986;
LABEL_29:
          v71 = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
