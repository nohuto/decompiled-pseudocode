/*
 * XREFs of ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18034A75C
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18034ACDC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801226FC (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D63C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B26C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4Reporti.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803496D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManag.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180349DA0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4Rep.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18034CF70 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x18034D58C (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18034DED0 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180350058 (-CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInter.c)
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180351468 (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 */

__int64 CMultitaskingViewManager::_CreateDCompMTVHost(
        __int64 *a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 a4,
        ...)
{
  _QWORD *v4; // r13
  __int64 v5; // rsi
  const struct _GUID *v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int Instance; // eax
  __int64 v14; // rdx
  int v15; // eax
  _DWORD *v16; // rcx
  _DWORD *v17; // r9
  struct IMultitaskingViewManagerInternal *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // r8
  __int64 v22; // rax
  int v23; // r15d
  int v24; // r15d
  int v25; // r15d
  int v26; // eax
  __int64 v27; // rdx
  const char *v28; // r9
  _QWORD *v29; // r14
  __int64 v30; // rdx
  __int64 *v31; // rbx
  struct _GUID *v33; // [rsp+30h] [rbp-41h]
  struct _GUID *v34; // [rsp+40h] [rbp-31h]
  __int64 v35; // [rsp+70h] [rbp-1h] BYREF
  void *v36; // [rsp+78h] [rbp+7h] BYREF
  struct IMultitaskingData *v37[2]; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]
  struct IMultitaskingViewManagerInternal *v39; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v40; // [rsp+E8h] [rbp+77h]
  _QWORD *v41; // [rsp+F0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+7Fh]
  va_list va1; // [rsp+F8h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v41 = va_arg(va1, _QWORD *);
  v40 = a4;
  v4 = v41;
  v5 = a4;
  v36 = 0LL;
  *v41 = 0LL;
  if ( a1[15] )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    v10 = VirtualDesktopThumbnailWindowFilter_CreateInstance(
            (struct IVirtualDesktopManagerInternal *)a1[15],
            (struct ITabletModeController *)a1[17],
            (struct IVirtualDesktopNotificationService *)a1[18],
            v9,
            &v36);
    if ( v10 < 0 )
    {
      v11 = 347LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_48:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      return (unsigned int)v10;
    }
  }
  if ( a1[33] )
  {
    if ( a2 == 1 )
    {
      v12 = a1[22];
      LODWORD(v41) = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v12 + 32LL))(v12, 1LL, (_QWORD **)va);
      if ( v10 < 0 )
      {
        v11 = 354LL;
        goto LABEL_8;
      }
    }
  }
  *(_OWORD *)v37 = 0LL;
  if ( a3 )
  {
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    Instance = (**a3)(a3, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3, &v35);
    v10 = Instance;
    if ( Instance < 0 )
    {
      v14 = 363LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
LABEL_47:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37[1]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
      goto LABEL_48;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37[1]);
    v34 = (struct _GUID *)a1[26];
    v33 = (struct _GUID *)a1[22];
    Instance = MultitaskingData_CreateInstance(a3, v35, v36, a1[15], a1[16], a1[18]);
    v10 = Instance;
    if ( Instance < 0 )
    {
      v14 = 377LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37[1]);
    v34 = (struct _GUID *)a1[26];
    v33 = (struct _GUID *)a1[22];
    v15 = MultitaskingData_CreateInstance(a1[12], a1[13], v36, a1[15], a1[16], a1[18]);
    v10 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_47;
    }
    v5 = v40;
  }
  v39 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
  v39 = 0LL;
  if ( InlineIsEqualGUID(&GUID_4026878b_100e_4920_8bc7_baeed683a086, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v39 = (struct IMultitaskingViewManagerInternal *)a1;
    v18 = (struct IMultitaskingViewManagerInternal *)a1;
    v22 = *a1;
  }
  else
  {
    if ( InlineIsEqualGUID(v16, &GUID_537b455d_1240_433b_82af_10929138b8be) )
    {
      v18 = (struct IMultitaskingViewManagerInternal *)a1;
      v39 = (struct IMultitaskingViewManagerInternal *)a1;
    }
    else
    {
      if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::CanCastTo(
                  (__int64)(a1 + 1),
                  v17) < 0 )
        goto LABEL_27;
      v18 = v39;
    }
    v22 = *(_QWORD *)v18;
  }
  (*(void (__fastcall **)(struct IMultitaskingViewManagerInternal *))(v22 + 8))(v18);
LABEL_27:
  v23 = a2 - 1;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( !v24 )
    {
      wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v20, 3u, (__int64)v21);
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        443LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        v28);
      __debugbreak();
    }
    v25 = v24 - 2;
    if ( v25 )
    {
      if ( v25 == 4 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
        v26 = CPPIAllUpViewHost_CreateInstance(
                v37[1],
                v39,
                (struct IApplicationViewSwitcher *)a1[14],
                (struct IImmersiveAppCrusher *)a1[19],
                (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
                (struct ITabletModeViewManager *)a1[23],
                v33,
                (void **)v37);
        v10 = v26;
        if ( v26 < 0 )
        {
          v27 = 472LL;
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)v26);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
          goto LABEL_47;
        }
      }
    }
    else
    {
      wil::Feature<__WilFeatureTraits_Feature_XamlSnapAssistView>::ReportUsageToService(v20, v19, (__int64)v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
      v26 = CSnapAssistViewHost_CreateInstance(
              v37[1],
              v39,
              (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
              (struct IImmersiveAppCrusher *)a1[19],
              (struct Windows::Internal::ComposableShell::Tabs::ITabController *)a1[32],
              (struct ITabViewManager *)a1[33],
              v33,
              (void **)v37);
      v10 = v26;
      if ( v26 < 0 )
      {
        v27 = 457LL;
        goto LABEL_46;
      }
    }
  }
  else
  {
    wil::Feature<__WilFeatureTraits_Feature_XamlAltTabView>::ReportUsageToService(v20, 3u, (__int64)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
    v26 = CAltTabViewHost_CreateInstance(
            v37[1],
            v39,
            (struct IApplicationViewSwitcher *)a1[14],
            (struct IImmersiveAppCrusher *)a1[19],
            (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
            (struct IMultitaskingViewGestureState *)a1[21],
            (struct Windows::Internal::ComposableShell::Tabs::ITabController *)a1[32],
            (struct ITabViewManager *)a1[33],
            v34,
            (void **)v37);
    v10 = v26;
    if ( v26 == -2147019873 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37[1]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
      v10 = -2147019873;
      goto LABEL_48;
    }
    if ( v26 < 0 )
    {
      v27 = 420LL;
      goto LABEL_46;
    }
  }
  v29 = a1 + 35;
  v30 = v29[1];
  if ( v30 != v29[3]
    || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)v29,
              v30 + 1,
              v21) >= 0 )
  {
    ++v29[1];
    v31 = (__int64 *)(16LL * v29[1] + *v29 - 16LL);
    if ( v31 )
    {
      *v31 = (__int64)v37[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v31);
      v31[1] = (__int64)v37[1];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v31 + 1);
    }
  }
  v26 = (**(__int64 (__fastcall ***)(struct IMultitaskingData *, __int64, _QWORD *))v37[0])(v37[0], v5, v4);
  v10 = v26;
  if ( v26 < 0 )
  {
    v27 = 478LL;
    goto LABEL_46;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
  return 0LL;
}
