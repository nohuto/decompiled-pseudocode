/*
 * XREFs of ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E9DCC
 * Callers:
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E8D50 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E8DF0 (-CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1800FC68C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014426C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180146A28 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018FB24 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 *     ??$?4VSwitcherTabViewManagerWrapper@@@?$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@@Z @ 0x1802659E0 (--$-4VSwitcherTabViewManagerWrapper@@@-$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@$$Q.c)
 *     ??$Make@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@$$QEAPEAUITabViewManager@@@Z @ 0x180266AEC (--$Make@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@Details@WRL@Microsoft@@YA-AV-$ComP.c)
 *     ??$As@UIMultitaskingViewHost@@@?$ComPtr@UIXamlViewHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802E85FC (--$As@UIMultitaskingViewHost@@@-$ComPtr@UIXamlViewHost@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802E8A28 (--1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802E8CDC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManag.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802E94A8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802E9508 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4Rep.c)
 *     ?StartActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802E9804 (-StartActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TY.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x1802EA79C (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1802EC490 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1802ECAAC (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1802ED3F0 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1802EF568 (-CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInter.c)
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F0978 (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 */

__int64 __fastcall CMultitaskingViewManager::_CreateMTVHost(
        __int64 *a1,
        unsigned int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, LPVOID *),
        __int64 a4,
        _QWORD *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct IVirtualDesktopNotificationService **v11; // r12
  const struct _GUID *v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  LPVOID v18; // rbx
  int Instance; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rax
  struct IVirtualDesktopNotificationService *v29; // r8
  __int64 v30; // rax
  _DWORD *v31; // rcx
  _DWORD *v32; // r9
  struct IMultitaskingViewManagerInternal *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  void *v36; // r8
  __int64 v37; // rax
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // esi
  int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  _QWORD *v45; // rdi
  __int64 v46; // rdx
  __int64 *v47; // rbx
  unsigned __int64 v48; // r9
  struct _GUID *v50; // [rsp+30h] [rbp-D0h]
  struct _GUID *v51; // [rsp+40h] [rbp-C0h]
  LPVOID ppv; // [rsp+70h] [rbp-90h] BYREF
  struct IMultitaskingViewManagerInternal *v53; // [rsp+78h] [rbp-88h] BYREF
  struct IMultitaskingData *v54[2]; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v55; // [rsp+90h] [rbp-70h] BYREF
  void *v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h] BYREF
  struct ITabViewManager *v60; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h]
  _QWORD v62[20]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v63[40]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v61 = a4;
  *a5 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v63,
    (__int64)"CreateMultitaskingViewHost");
  v63[0] = &MultitaskingViewTelemetry::CreateMultitaskingViewHost::`vftable';
  MultitaskingViewTelemetry::CreateMultitaskingViewHost::StartActivity((__int64)v63, a2);
  if ( a2 > 8 || (v8 = 278, !_bittest(&v8, a2)) )
  {
    v9 = -2147024809;
    v10 = 260LL;
    goto LABEL_84;
  }
  if ( (int)CMultitaskingViewManager::_FindMTVHost(a1, a2, 0LL, 0LL, 0LL) >= 0 )
  {
    v9 = -2147483635;
    v10 = 265LL;
LABEL_84:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)v9);
    goto LABEL_85;
  }
  v11 = (struct IVirtualDesktopNotificationService **)(a1 + 18);
  v56 = 0LL;
  if ( !a1[15]
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56),
        v13 = VirtualDesktopThumbnailWindowFilter_CreateInstance(
                (struct IVirtualDesktopManagerInternal *)a1[15],
                (struct ITabletModeController *)a1[17],
                *v11,
                v12,
                &v56),
        v9 = v13,
        v13 >= 0) )
  {
    if ( a1[33] )
    {
      if ( a2 == 1 )
      {
        v15 = a1[22];
        LODWORD(ppv) = 0;
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v15 + 32LL))(v15, 1LL, &ppv);
        v9 = v13;
        if ( v13 < 0 )
        {
          v14 = 284LL;
          goto LABEL_12;
        }
      }
      v60 = (struct ITabViewManager *)a1[33];
      ppv = 0LL;
      v16 = Microsoft::WRL::Details::Make<SwitcherTabViewManagerWrapper,ITabViewManager *>((__int64 *)&v55, &v60);
      Microsoft::WRL::ComPtr<ITabViewManager>::operator=<SwitcherTabViewManagerWrapper>((__int64 *)&ppv, v16);
      v17 = (__int64)v55;
      if ( v55 )
      {
        v55 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v17);
      }
      v18 = ppv;
      if ( !ppv )
      {
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x122,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
        goto LABEL_82;
      }
      if ( (LPVOID)a1[33] != ppv )
      {
        v55 = ppv;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v55);
        v55 = (LPVOID)a1[33];
        a1[33] = (__int64)v18;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    }
    *(_OWORD *)v54 = 0LL;
    if ( a3 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      Instance = (**a3)(a3, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3, &ppv);
      v9 = Instance;
      if ( Instance < 0 )
      {
        v20 = 299LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)Instance);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
LABEL_81:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54[1]);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
        goto LABEL_82;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54[1]);
      v51 = (struct _GUID *)a1[26];
      v50 = (struct _GUID *)a1[22];
      Instance = MultitaskingData_CreateInstance(a3, ppv, v56, a1[15], a1[16], a1[18]);
      v9 = Instance;
      if ( Instance < 0 )
      {
        v20 = 312LL;
        goto LABEL_25;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54[1]);
      v51 = (struct _GUID *)a1[26];
      v50 = (struct _GUID *)a1[22];
      v26 = MultitaskingData_CreateInstance(a1[12], a1[13], v56, a1[15], a1[16], *v11);
      v9 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x148,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_81;
      }
    }
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v59 = 0LL;
    v58 = 0LL;
    v57 = 0LL;
    if ( a1[31] && a1[32] && a1[33] )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
      v24 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1[31])(
              a1[31],
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v59);
      v9 = v24;
      if ( v24 < 0 )
      {
        v25 = 337LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)v24);
LABEL_80:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
        goto LABEL_81;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
      v24 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1[32])(
              a1[32],
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v58);
      v9 = v24;
      if ( v24 < 0 )
      {
        v25 = 338LL;
        goto LABEL_38;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
      v24 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1[33])(
              a1[33],
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v57);
      v9 = v24;
      if ( v24 < 0 )
      {
        v25 = 339LL;
        goto LABEL_38;
      }
      v21 = v59;
      v22 = v58;
      v23 = v57;
    }
    v62[1] = a1[11];
    v62[0] = a1;
    if ( !a3 )
      a3 = (__int64 (__fastcall ***)(_QWORD, GUID *, LPVOID *))a1[12];
    v62[3] = a1[14];
    v62[4] = a1[19];
    v62[5] = a1[30];
    v62[6] = a1[20];
    v62[7] = a1[29];
    v62[8] = a1[26];
    v62[9] = a1[25];
    v62[10] = a1[27];
    v62[11] = a1[28];
    v27 = a1[15];
    v62[14] = v21;
    v28 = a1[22];
    v62[12] = v27;
    v29 = *v11;
    v62[17] = v28;
    v30 = a1[21];
    v62[15] = v22;
    v62[13] = v29;
    v62[2] = a3;
    v62[16] = v23;
    v62[18] = v30;
    v53 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
    v53 = 0LL;
    if ( InlineIsEqualGUID(&GUID_4026878b_100e_4920_8bc7_baeed683a086, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v53 = (struct IMultitaskingViewManagerInternal *)a1;
      v33 = (struct IMultitaskingViewManagerInternal *)a1;
      v37 = *a1;
    }
    else
    {
      if ( InlineIsEqualGUID(v31, &GUID_537b455d_1240_433b_82af_10929138b8be) )
      {
        v33 = (struct IMultitaskingViewManagerInternal *)a1;
        v53 = (struct IMultitaskingViewManagerInternal *)a1;
      }
      else
      {
        if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::CanCastTo(
                    (__int64)(a1 + 1),
                    v32) < 0 )
          goto LABEL_50;
        v33 = v53;
      }
      v37 = *(_QWORD *)v33;
    }
    (*(void (__fastcall **)(struct IMultitaskingViewManagerInternal *))(v37 + 8))(v33);
LABEL_50:
    v38 = a2 - 1;
    if ( !v38 )
    {
      wil::Feature<__WilFeatureTraits_Feature_XamlAltTabView>::ReportUsageToService(v35, v34, (__int64)v36);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
      v9 = CAltTabViewHost_CreateInstance(
             v54[1],
             v53,
             (struct IApplicationViewSwitcher *)a1[14],
             (struct IImmersiveAppCrusher *)a1[19],
             (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
             (struct IMultitaskingViewGestureState *)a1[21],
             (struct Windows::Internal::ComposableShell::Tabs::ITabController *)a1[32],
             (struct ITabViewManager *)a1[33],
             v51,
             (void **)v54);
      if ( v9 == -2147019873 )
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v63);
      if ( (v9 & 0x80000000) != 0 )
      {
        v48 = v9;
        v42 = 394LL;
        goto LABEL_73;
      }
      goto LABEL_66;
    }
    v39 = v38 - 1;
    if ( v39 )
    {
      v40 = v39 - 2;
      if ( v40 )
      {
        if ( v40 == 4 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
          v41 = CPPIAllUpViewHost_CreateInstance(
                  v54[1],
                  v53,
                  (struct IApplicationViewSwitcher *)a1[14],
                  (struct IImmersiveAppCrusher *)a1[19],
                  (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
                  (struct ITabletModeViewManager *)a1[23],
                  v50,
                  (void **)v54);
          v9 = v41;
          if ( v41 < 0 )
          {
            v42 = 449LL;
LABEL_72:
            v48 = (unsigned int)v41;
LABEL_73:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v42,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)v48);
            goto LABEL_79;
          }
        }
      }
      else
      {
        wil::Feature<__WilFeatureTraits_Feature_XamlSnapAssistView>::ReportUsageToService(v35, v34, (__int64)v36);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
        v41 = CSnapAssistViewHost_CreateInstance(
                v54[1],
                v53,
                (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
                (struct IImmersiveAppCrusher *)a1[19],
                (struct Windows::Internal::ComposableShell::Tabs::ITabController *)a1[32],
                (struct ITabViewManager *)a1[33],
                v50,
                (void **)v54);
        v9 = v41;
        if ( v41 < 0 )
        {
          v42 = 438LL;
          goto LABEL_72;
        }
      }
LABEL_66:
      v45 = a1 + 34;
      v46 = v45[1];
      if ( v46 != v45[3]
        || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                  (__int64)v45,
                  v46 + 1,
                  v36) >= 0 )
      {
        ++v45[1];
        v47 = (__int64 *)(16LL * v45[1] + *v45 - 16LL);
        if ( v47 )
        {
          *v47 = (__int64)v54[0];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v47);
          v47[1] = (__int64)v54[1];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v47 + 1);
        }
      }
      v41 = (**(__int64 (__fastcall ***)(struct IMultitaskingData *, __int64, _QWORD *))v54[0])(v54[0], v61, a5);
      v9 = v41;
      if ( v41 >= 0 )
      {
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v63);
        v9 = 0;
        goto LABEL_79;
      }
      v42 = 455LL;
      goto LABEL_72;
    }
    wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v35, 3u, (__int64)v36);
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v43 = CoCreateInstance(&CLSID_XamlAllUpViewHost, 0LL, 1u, &GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b, &ppv);
    v9 = v43;
    if ( v43 >= 0 )
    {
      v43 = (*(__int64 (__fastcall **)(LPVOID, _QWORD *))(*(_QWORD *)ppv + 24LL))(ppv, v62);
      v9 = v43;
      if ( v43 >= 0 )
      {
        v43 = Microsoft::WRL::ComPtr<IXamlViewHost>::As<IMultitaskingViewHost>(&ppv, (__int64 *)v54);
        v9 = v43;
        if ( v43 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
          goto LABEL_66;
        }
        v44 = 405LL;
      }
      else
      {
        v44 = 404LL;
      }
    }
    else
    {
      v44 = 403LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v43);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
LABEL_79:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
    goto LABEL_80;
  }
  v14 = 275LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_82:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
LABEL_85:
  MultitaskingViewTelemetry::CreateMultitaskingViewHost::~CreateMultitaskingViewHost((MultitaskingViewTelemetry::CreateMultitaskingViewHost *)v63);
  return v9;
}
