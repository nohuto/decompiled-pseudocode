/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18037D5B0
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18037D250 (--$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008578E (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1803116B0 (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18037F794 (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180380350 (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x180380A1C (-CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@.c)
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803815C0 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803821E8 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x18038305C (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEA.c)
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1803834F8 (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803840FC (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180384580 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 *     ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180385954 (-CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVis.c)
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18038AFCC (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x18038BAAC (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x18038C134 (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18038C3A8 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18038D1B8 (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1803912D4 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180395618 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x180395DBC (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803965DC (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
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
  __int64 v26; // r8
  struct IVirtualDesktopManagerPrivate **v27; // rdi
  CCriticalFailureHandler *v28; // rcx
  __int64 v29; // r9
  unsigned int v30; // esi
  CCriticalFailureHandler *v31; // rcx
  CCriticalFailureHandler *v32; // rcx
  CCriticalFailureHandler *v33; // rcx
  const struct _GUID *v34; // rdx
  CCriticalFailureHandler *v35; // rcx
  __int64 v36; // rdx
  const struct _GUID *v37; // r8
  CCriticalFailureHandler *v38; // rcx
  const struct _GUID *v39; // r9
  CCriticalFailureHandler *v40; // rcx
  CCriticalFailureHandler *v41; // rcx
  unsigned int v42; // esi
  __int64 v43; // rdx
  CCriticalFailureHandler *v44; // rcx
  const struct _GUID *v45; // rdx
  CCriticalFailureHandler *v46; // rcx
  struct IVirtualDesktopPinnedAppsPrivate **v47; // r15
  CCriticalFailureHandler *v48; // rcx
  CCriticalFailureHandler *v49; // rcx
  CCriticalFailureHandler *v50; // rcx
  CCriticalFailureHandler *v51; // rcx
  unsigned __int64 *v53; // [rsp+28h] [rbp-E0h]
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
  unsigned __int64 *v64; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v65; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v66; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v67; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v68; // [rsp+30h] [rbp-D8h]
  const struct _GUID *v69; // [rsp+40h] [rbp-C8h]
  int v70; // [rsp+58h] [rbp-B0h] BYREF
  int v71; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v72[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct IVirtualDesktopCollection *v73; // [rsp+68h] [rbp-A0h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v74; // [rsp+70h] [rbp-98h] BYREF
  struct IVirtualDesktopNotification *v75; // [rsp+78h] [rbp-90h] BYREF
  struct IVirtualDesktopPersistence *v76; // [rsp+80h] [rbp-88h] BYREF
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v77; // [rsp+88h] [rbp-80h] BYREF
  struct IVirtualDesktopRegistryHelpers *v78; // [rsp+90h] [rbp-78h] BYREF
  __int64 v79; // [rsp+98h] [rbp-70h] BYREF
  void *v80; // [rsp+A0h] [rbp-68h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v81; // [rsp+A8h] [rbp-60h] BYREF
  struct IVirtualDesktopFactory *v82[3]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v83; // [rsp+C8h] [rbp-40h] BYREF
  struct IVirtualDesktopManagerPrivate *v84; // [rsp+D8h] [rbp-30h]
  __int64 v85; // [rsp+E0h] [rbp-28h]
  __int128 v86; // [rsp+E8h] [rbp-20h]
  void *v87; // [rsp+F8h] [rbp-10h]
  __int64 v88; // [rsp+100h] [rbp-8h]
  __int128 v89; // [rsp+108h] [rbp+0h]
  struct IVirtualDesktopNotification *v90; // [rsp+118h] [rbp+10h]
  __int64 v91; // [rsp+120h] [rbp+18h]
  GUID v92; // [rsp+128h] [rbp+20h]
  __int64 v93; // [rsp+138h] [rbp+30h]
  __int64 v94; // [rsp+140h] [rbp+38h]
  __int128 v95; // [rsp+148h] [rbp+40h]
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v96; // [rsp+158h] [rbp+50h]
  __int64 v97; // [rsp+160h] [rbp+58h]
  __int128 v98; // [rsp+168h] [rbp+60h]
  __int64 v99; // [rsp+178h] [rbp+70h]
  __int64 v100; // [rsp+180h] [rbp+78h]
  GUID v101; // [rsp+188h] [rbp+80h]
  __int64 v102; // [rsp+198h] [rbp+90h]
  __int64 v103; // [rsp+1A0h] [rbp+98h]
  __int128 v104; // [rsp+1A8h] [rbp+A0h]
  struct IVirtualDesktopPinnedAppsPrivate *v105; // [rsp+1B8h] [rbp+B0h]
  __int64 v106; // [rsp+1C0h] [rbp+B8h]
  __int128 v107; // [rsp+1C8h] [rbp+C0h]
  __int64 v108; // [rsp+1D8h] [rbp+D0h]
  __int64 v109; // [rsp+1E0h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v82[1] = (struct IVirtualDesktopFactory *)-2LL;
  v2 = (void **)((char *)this + 144);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Instance = CVirtualDesktopLock_CreateInstance(v3, v2);
  v70 = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72[1]) >= 0 )
  {
    switch ( v72[1] )
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
        v70 = Instance;
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
      &v70,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0x38u,
      v53,
      v64);
    Instance = v70;
  }
  if ( Instance >= 0 )
  {
LABEL_19:
    UniqueContext = SHTaskPoolGetUniqueContext(v4);
    v75 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v75);
    Instance = CVirtualDesktopNotifications_CreateInstance(
                 UniqueContext,
                 (struct IVirtualDesktopLock *)*v2,
                 v7,
                 (void **)&v75);
    v70 = Instance;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_31:
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v8,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x3Eu,
            v53,
            v64);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_222:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v75);
          return (unsigned int)Instance;
        }
      }
      v74 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v74);
      Instance = CVirtualDesktopVisibilityPolicy_CreateInstance(v75, v9, (void **)&v74);
      v70 = Instance;
      if ( CRVPrivate::cfhImmersiveShellStartup )
        goto LABEL_49;
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72[1]) >= 0 )
      {
        switch ( v72[1] )
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
            v70 = Instance;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_49:
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v10,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x42u,
            v53,
            v64);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x42,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_221:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v74);
          goto LABEL_222;
        }
      }
      v82[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v82);
      Instance = CVirtualDesktopFactory_CreateInstance(v74, (struct IVirtualDesktopLock *)*v2, v11, (void **)v82);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v12, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v12,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x46u,
            v53,
            v64);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x46,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_220:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v82);
          goto LABEL_221;
        }
      }
      v78 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v78);
      Instance = VirtualDesktopRegistryHelpers_CreateInstance(v13, (void **)&v78);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v14, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v14,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x4Au,
            v53,
            v64);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4A,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_219:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v78);
          goto LABEL_220;
        }
      }
      v76 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v76);
      Instance = VirtualDesktopPersistence_CreateInstance(v78, v15, (void **)&v76);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v16, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v16,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x4Eu,
            v53,
            v64);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4E,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_218:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v76);
          goto LABEL_219;
        }
      }
      v73 = 0LL;
      ThreadUILanguage_0 = GetThreadUILanguage_0();
      v18 = (unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v73);
      Instance = CVirtualDesktopCollection_CreateInstance(v82[0], v76, v18, v19, (void **)&v73);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v20, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v20,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x52u,
            v54,
            v64);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x52,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_217:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v73);
          goto LABEL_218;
        }
      }
      v81 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v81);
      Instance = CVirtualDesktopDefaultForegroundHandler_CreateInstance(v21, (void **)&v81);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v22, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v22,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x56u,
            v54,
            v64);
          Instance = v70;
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
LABEL_216:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v81);
          goto LABEL_217;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
      Instance = CVirtualDesktopForegroundPolicy_CreateInstance(v73, v74, v81, v24, (void **)this + 19);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v25, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v25,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x5Cu,
            v55,
            v64);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          v23 = 92LL;
          goto LABEL_133;
        }
      }
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)v25, 3u, v26);
      v27 = (struct IVirtualDesktopManagerPrivate **)((char *)this + 160);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
      Instance = CVirtualDesktopManager_CreateInstance(
                   v73,
                   v74,
                   v75,
                   *((struct IVirtualDesktopForegroundPolicy **)this + 19),
                   v76,
                   *((struct IVirtualDesktopGroupedViewsPolicy **)this + 30),
                   (struct IVirtualDesktopLock *)*v2,
                   v69,
                   (void **)this + 20);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v28, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        v30 = 114;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v28,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x72u,
            v56,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
          goto LABEL_132;
      }
      Instance = wil::wnf_query_nothrow<enum _TABLETMODESTATE>((__int64)v28, (char *)&v71, v72, v29);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v31, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        v30 = 118;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v31,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x76u,
            v56,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
          goto LABEL_132;
      }
      v72[0] &= -((_BYTE)v71 != 0);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
      v57 = (unsigned __int64 *)*v2;
      Instance = VirtualDesktopTabletModePolicy_CreateInstance(v72[0], v73, *v27, v74);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v32, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v32,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x83u,
            v57,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          v23 = 131LL;
          goto LABEL_133;
        }
      }
      v58 = (unsigned __int64 *)*((_QWORD *)this + 24);
      Instance = (*(__int64 (__fastcall **)(struct IVirtualDesktopPersistence *, _QWORD, struct IVirtualDesktopManagerPrivate *, struct IVirtualDesktopCollection *))(*(_QWORD *)v76 + 40LL))(
                   v76,
                   v72[0],
                   *v27,
                   v73);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v33, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        v30 = 135;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v33,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x87u,
            v58,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
LABEL_132:
          v23 = v30;
          goto LABEL_133;
        }
      }
      v77 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
      Instance = VirtualDesktopAnimationSyncNotifications_CreateInstance(UniqueContext, v34, (void **)&v77);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v35, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v35,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x8Cu,
            v58,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          v36 = 140LL;
LABEL_150:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v36,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_215:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
          goto LABEL_216;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
      Instance = VirtualDesktopSwitchAnimator_CreateInstance(*v27, v77, v37, (void **)this + 21);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v38, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v38,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x91u,
            v58,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          v36 = 145LL;
          goto LABEL_150;
        }
      }
      v80 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v80);
      Instance = CVirtualDesktopHotkeyHandler_CreateInstance(
                   *v27,
                   *((struct IVirtualDesktopSwitchAnimator **)this + 21),
                   (struct IVirtualDesktopLock *)*v2,
                   v39,
                   &v80);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v40, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v40,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x98u,
            v59,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x98,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_214:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v80);
          goto LABEL_215;
        }
      }
      v79 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v79);
      Instance = (**(__int64 (__fastcall ***)(struct IVirtualDesktopNotification *, GUID *, __int64 *))v75)(
                   v75,
                   &GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68,
                   &v79);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v41, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        v42 = 155;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v41,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x9Bu,
            v59,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
          goto LABEL_166;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
      v60 = (unsigned __int64 *)*v2;
      Instance = VirtualDesktopAcessibility_CreateInstance(v72[0], v79, v73, *v27);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v44, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        v42 = 164;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v44,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xA4u,
            v60,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
          goto LABEL_166;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
      Instance = VirtualDesktopGestureHandler_CreateInstance(*v27, v45, (void **)this + 26);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v46, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        v42 = 166;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v46,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xA6u,
            v60,
            v65);
          Instance = v70;
        }
        if ( Instance < 0 )
          goto LABEL_166;
      }
      v47 = (struct IVirtualDesktopPinnedAppsPrivate **)((char *)this + 200);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
      Instance = VirtualDesktopPinnedAppsHandler_CreateInstance(
                   *v27,
                   v78,
                   v74,
                   *((struct IVirtualDesktopGroupedViewsPolicy **)this + 30),
                   (struct IVirtualDesktopLock *)*v2,
                   (const struct _GUID *)v65,
                   (void **)this + 25);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v48, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        v42 = 174;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v48,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xAEu,
            v61,
            v66);
          Instance = v70;
        }
        if ( Instance < 0 )
          goto LABEL_166;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
      Instance = VirtualDesktopWindowMoveManager_CreateInstance(
                   *v27,
                   v73,
                   v74,
                   *v47,
                   (const struct _GUID *)v61,
                   (void **)this + 22);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v49, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v49,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xB5u,
            v62,
            v67);
          Instance = v70;
        }
        if ( Instance < 0 )
        {
          v43 = 181LL;
          goto LABEL_211;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
      Instance = VirtualDesktopsApi_CreateInstance(
                   *v27,
                   v73,
                   v74,
                   *((struct IVirtualDesktopWindowMoveManager **)this + 22),
                   *((struct IVirtualDesktopLock **)this + 18),
                   (const struct _GUID *)v67,
                   (void **)this + 23);
      v70 = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v50, &v70);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v70;
      }
      if ( Instance >= 0 )
        goto LABEL_203;
      v42 = 189;
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v50,
          &v70,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xBDu,
          v63,
          v68);
        Instance = v70;
      }
      if ( Instance < 0 )
      {
LABEL_166:
        v43 = v42;
      }
      else
      {
LABEL_203:
        v83 = *(_OWORD *)&SID_VirtualDesktopManager.Revision;
        v84 = *v27;
        v85 = 0LL;
        v86 = *(_OWORD *)&SID_VirtualDesktopHotkeyHandler.Revision;
        v87 = v80;
        v88 = 0LL;
        v89 = *(_OWORD *)&SID_VirtualDesktopNotificationService.Revision;
        v90 = v75;
        v91 = 0LL;
        v92 = IID_IVirtualDesktopManager;
        v93 = *((_QWORD *)this + 23);
        v94 = 0LL;
        v95 = *(_OWORD *)&SID_VirtualDesktopAnimationSyncNotificationService.Revision;
        v96 = v77;
        v97 = 0LL;
        v98 = *(_OWORD *)&SID_VirtualDesktopTabletModePolicyService.Revision;
        v99 = *((_QWORD *)this + 24);
        v100 = 0LL;
        v101 = IID_IVirtualDesktopAccessibility;
        v102 = *((_QWORD *)this + 27);
        v103 = 0LL;
        v104 = *(_OWORD *)&SID_VirtualDesktopPinnedApps.Revision;
        v105 = *v47;
        v106 = 0LL;
        v107 = *(_OWORD *)&SID_VirtualDesktopGestureHandler.Revision;
        v108 = *((_QWORD *)this + 26);
        v109 = 0LL;
        Instance = CImmersiveShellComponent::RegisterServiceInformation(
                     (CVirtualDesktopComponent *)((char *)this + 40),
                     (const struct CImmersiveShellComponent::ISC_SERVICE *)&v83,
                     9LL);
        v70 = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v51, &v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v70;
        }
        if ( Instance >= 0 )
          goto LABEL_212;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v51,
            &v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xCBu,
            v63,
            v68);
          Instance = v70;
        }
        if ( Instance >= 0 )
        {
LABEL_212:
          Instance = 0;
          goto LABEL_213;
        }
        v43 = 203LL;
      }
LABEL_211:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v43,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
LABEL_213:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v79);
      goto LABEL_214;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72[1]) >= 0 )
    {
      switch ( v72[1] )
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
          v70 = Instance;
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
