/*
 * XREFs of ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18009F4A4
 * Callers:
 *     ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18007F570 (-InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentati.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800833B0 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB40 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18003AE00 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18003BDA8 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180054EE4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180055490 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18007B108 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18007F4EC (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _lambda_7a72872464965e8179af40f5be21d500_::operator() @ 0x18009F230 (_lambda_7a72872464965e8179af40f5be21d500_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x18014C764 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AE_ea_18014C764.c)
 *     ??0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z @ 0x180247298 (--0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z.c)
 *     ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x18039F448 (--$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIAppl.c)
 *     ??A?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAAAEAUWindowCloakInfo@CDesktopPositioner@@AEBQEAUHWND__@@@Z @ 0x1803A098C (--A-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWND__@@@std@@V-$allocator.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x1803A1E38 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlags@PositionerPropertySetHelpers@@@Z @ 0x1803A2684 (-IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlag.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803A2F50 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 */

__int64 __fastcall CDesktopPositioner::InitializePositionHelper(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        unsigned int *a5)
{
  PositionerPropertySetHelpers *v8; // rcx
  int DetailsForActivation; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  bool v13; // r15
  int v14; // eax
  struct IApplicationView *v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  int RestorePosition; // eax
  struct IApplicationViewPosition *v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v25; // eax
  __int64 v26; // rdx
  struct IApplicationViewOperation *v27; // [rsp+50h] [rbp-B0h] BYREF
  struct IApplicationViewPosition *v28; // [rsp+58h] [rbp-A8h] BYREF
  struct IImmersiveMonitor *v29; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown v30; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT v31; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v32; // [rsp+80h] [rbp-80h] BYREF
  struct IViewGroup *v33; // [rsp+88h] [rbp-78h] BYREF
  struct IApplicationView *v34; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v35; // [rsp+A0h] [rbp-60h] BYREF
  struct IApplicationViewPosition **v36; // [rsp+B0h] [rbp-50h]
  __int64 v37[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-28h]
  _OWORD v40[2]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v37[1] = -2LL;
  v29 = a2;
  v34 = (struct IApplicationView *)a3;
  if ( a5 )
    *a5 = 0;
  wil::try_com_query<IWin32ApplicationView,IApplicationView * &>((__int64)v37, &v29);
  LODWORD(v30.lpVtbl) = 0;
  *(_QWORD *)&v35.left = 0LL;
  *(_QWORD *)&v35.right = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v8,
                           v34,
                           &v30,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v35);
  v11 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    v13 = 1;
    if ( *((_QWORD *)this + 39) )
    {
      v38 = 0LL;
      v39 = 0LL;
      if ( !(unsigned __int8)CDesktopPositioner::IsBackgroundActivation(v10, a2, LODWORD(v30.lpVtbl)) )
      {
        DetailsForActivation = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *, __int64 *))(**((_QWORD **)this + 39) + 80LL))(
                                 *((_QWORD *)this + 39),
                                 a2,
                                 v34,
                                 &v38);
        v11 = DetailsForActivation;
        if ( DetailsForActivation < 0 )
        {
          v12 = 2969LL;
          goto LABEL_9;
        }
      }
      v33 = 0LL;
      v32 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      v14 = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
              this,
              a2,
              (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&v38,
              &v33,
              (struct IApplicationView **)&v32);
      v11 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9E,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
        goto LABEL_52;
      }
      v13 = (unsigned int)SHIsSameObject((struct IUnknown *)a2, v32) != 0;
      if ( v37[0] && (v38 != *(_QWORD *)&GUID_NULL.Data1 || v39 != *(_QWORD *)GUID_NULL.Data4) && v13 )
      {
        if ( a5 )
        {
          *a5 |= 0x10000u;
          DesktopPositionerTelemetry::InitializePositionCloak<IApplicationView * &>(&v29);
          *(_QWORD *)&v31.left = ApplicationViewHelpers::GetWindowForView(
                                   (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                                   v15);
          if ( *(_QWORD *)&v31.left )
          {
            unique_animation_clock::unique_animation_clock(
              (unique_animation_clock *)v40,
              &AnimationClock_TabSwitch,
              0x3E8u,
              0);
            *(_BYTE *)(std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::operator[]((char *)this + 352, &v31) + 2) = 1;
            if ( (int)DwmpBeginTransitionRequest(93LL) >= 0 )
            {
              DwmpTransitionWindow(*(_QWORD *)&v31.left, 3LL);
              *(_BYTE *)(std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::operator[]((char *)this + 352, &v31) + 1) = 1;
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    }
    if ( v37[0] )
    {
LABEL_51:
      v11 = 0;
      goto LABEL_52;
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    v16 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(this, a2, &v27);
    v11 = v16;
    if ( v16 < 0 )
    {
      v17 = 3007LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v16);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      goto LABEL_52;
    }
    if ( !v13 )
    {
      v16 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
              a2,
              v27);
      v11 = v16;
      if ( v16 < 0 )
      {
        v17 = 3090LL;
        goto LABEL_24;
      }
      goto LABEL_50;
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    RestorePosition = CDesktopPositioner::_GetRestorePosition(
                        this,
                        a2,
                        (struct PositionerPropertySetHelpers::ViewSizePreferences *)&v35,
                        &v28);
    v11 = RestorePosition;
    if ( RestorePosition < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC7,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)RestorePosition);
LABEL_29:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      goto LABEL_25;
    }
    v19 = v28;
    if ( v34 && v28 )
    {
      *(_QWORD *)&v31.left = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v28,
                  (__int64)&v31) >= 0 )
      {
        *(_QWORD *)&v35.left = &v31;
        *(_QWORD *)&v35.right = &v34;
        v36 = &v28;
        lambda_7a72872464965e8179af40f5be21d500_::operator()((__int64 **)&v35);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31.left);
      v19 = v28;
    }
    v40[0] = 0uLL;
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, _OWORD *))(*(_QWORD *)v19 + 24LL))(v19, v40);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBF4,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v20);
    }
    v29 = 0LL;
    v31 = (struct tagRECT)v40[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                this,
                a4,
                &v31,
                &v35,
                (enum TRY_POSITION_VIEW_FLAGS *)&v30,
                &v29) >= 0 )
    {
      *(_QWORD *)&v31.left = 0LL;
      v21 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>((void **)&v31);
      v11 = v21;
      if ( v21 < 0 )
      {
        v22 = 3069LL;
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31.left);
LABEL_42:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
        goto LABEL_29;
      }
      v23 = CDesktopPositioner::PositionViewWithOptions(this, a2, &v35, LODWORD(v30.lpVtbl), v27, 7, v29);
      if ( v23 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC02,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v23);
        v21 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v27 + 80LL))(
                v27,
                v28);
        v11 = v21;
        if ( v21 < 0 )
        {
          v22 = 3077LL;
          goto LABEL_41;
        }
        v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                a2,
                v27);
        v11 = v21;
        if ( v21 < 0 )
        {
          v22 = 3078LL;
          goto LABEL_41;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31.left);
      goto LABEL_49;
    }
    v25 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v27 + 80LL))(
            v27,
            v28);
    v11 = v25;
    if ( v25 >= 0 )
    {
      v25 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
              a2,
              v27);
      v11 = v25;
      if ( v25 >= 0 )
      {
LABEL_49:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
LABEL_50:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
        goto LABEL_51;
      }
      v26 = 3085LL;
    }
    else
    {
      v26 = 3084LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_42;
  }
  v12 = 2944LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_52:
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v37);
  return v11;
}
