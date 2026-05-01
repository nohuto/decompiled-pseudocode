/*
 * XREFs of ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10
 * Callers:
 *     ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180055AE0 (-InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAK@Z @ 0x18033D560 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180022574 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180027110 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180028738 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180055F30 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??B?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x18009A9DC (--B-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     _lambda_8c85894c38574ac9f74aa209c69d94d2_::operator() @ 0x18009A9F0 (_lambda_8c85894c38574ac9f74aa209c69d94d2_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z @ 0x1801F60B0 (--0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x18033A3F8 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x18033A43C (--$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIAppl.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x18033CE94 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlags@PositionerPropertySetHelpers@@@Z @ 0x18033D614 (-IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlag.c)
 */

__int64 __fastcall CDesktopPositioner::InitializePositionHelper(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        unsigned int *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  bool v12; // r14
  int v13; // eax
  struct IApplicationView *v14; // rdx
  __int64 v15; // rcx
  CDesktopPositioner *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  struct IApplicationViewOperation *v19; // rbx
  int RestorePosition; // esi
  __int64 v21; // rdx
  struct IUnknown v23; // [rsp+30h] [rbp-59h] BYREF
  struct IApplicationViewOperation *v24; // [rsp+38h] [rbp-51h] BYREF
  struct IUnknown *v25; // [rsp+40h] [rbp-49h] BYREF
  struct IApplicationView *v26; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD *v29; // [rsp+70h] [rbp-19h] BYREF
  struct IApplicationView **v30; // [rsp+78h] [rbp-11h]
  struct IUnknown *v31; // [rsp+80h] [rbp-9h]
  __int64 v32; // [rsp+88h] [rbp-1h]
  __int64 v33; // [rsp+90h] [rbp+7h] BYREF
  __int64 v34; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v32 = -2LL;
  v28[0] = a2;
  v26 = (struct IApplicationView *)a3;
  if ( a4 )
    *a4 = 0;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v27);
  LODWORD(v23.lpVtbl) = 0;
  v29 = 0LL;
  v30 = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           v26,
                           &v23,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v29);
  v10 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    v11 = 2925LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
LABEL_39:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v27);
    return v10;
  }
  v12 = 1;
  if ( *((_QWORD *)this + 39) )
  {
    v33 = 0LL;
    v34 = 0LL;
    if ( !(unsigned __int8)CDesktopPositioner::IsBackgroundActivation(v9, a2, LODWORD(v23.lpVtbl)) )
    {
      DetailsForActivation = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *, __int64 *))(**((_QWORD **)this + 39) + 72LL))(
                               *((_QWORD *)this + 39),
                               a2,
                               v26,
                               &v33);
      v10 = DetailsForActivation;
      if ( DetailsForActivation < 0 )
      {
        v11 = 2950LL;
        goto LABEL_9;
      }
    }
    v24 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v13 = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
            this,
            a2,
            (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&v33,
            &v24,
            (struct IApplicationView **)&v25);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8B,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      goto LABEL_39;
    }
    v12 = (unsigned int)SHIsSameObject((struct IUnknown *)a2, v25) != 0;
    if ( v27 && (v33 != *(_QWORD *)&GUID_NULL.Data1 || v34 != *(_QWORD *)GUID_NULL.Data4) && v12 )
    {
      if ( a4 )
      {
        *a4 |= 0x10000u;
        DesktopPositionerTelemetry::InitializePositionCloak<IApplicationView * &>(v28);
        v23.lpVtbl = (struct IUnknownVtbl *)ApplicationViewHelpers::GetWindowForView(
                                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                                              v14);
        if ( v23.lpVtbl )
        {
          unique_animation_clock::unique_animation_clock(
            (unique_animation_clock *)v28,
            &AnimationClock_TabSwitch,
            0x3E8u,
            0);
          std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
            (__int64 *)this + 44,
            (__int64)v28,
            (unsigned __int64 *)&v23);
          *(_BYTE *)(v28[0] + 42LL) = 1;
          if ( (int)DwmpBeginTransitionRequest(93LL) >= 0 )
          {
            DwmpTransitionWindow(v23.lpVtbl, 3LL);
            std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
              (__int64 *)this + 44,
              (__int64)v28,
              (unsigned __int64 *)&v23);
            *(_BYTE *)(v28[0] + 41LL) = 1;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  v15 = v27;
  if ( v27 )
    goto LABEL_41;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  v17 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(v16, a2, &v24);
  v10 = v17;
  if ( v17 < 0 )
  {
    v18 = 2988LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    goto LABEL_39;
  }
  v19 = v24;
  if ( v12 )
  {
    v23.lpVtbl = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    RestorePosition = CDesktopPositioner::_GetRestorePosition(
                        this,
                        a2,
                        (struct PositionerPropertySetHelpers::ViewSizePreferences *)&v29,
                        (struct IApplicationViewPosition **)&v23);
    if ( RestorePosition < 0 )
    {
      v21 = 2995LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)RestorePosition);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v10 = RestorePosition;
      goto LABEL_39;
    }
    if ( v26
      && (unsigned int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator int Microsoft::WRL::Details::BoolStruct::*(&v23) != -1 )
    {
      v28[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(&v23, v28) >= 0 )
      {
        v29 = v28;
        v30 = &v26;
        v31 = &v23;
        lambda_8c85894c38574ac9f74aa209c69d94d2_::operator()(&v29);
      }
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)v28);
    }
    RestorePosition = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IUnknownVtbl *))(*(_QWORD *)v19 + 80LL))(
                        v19,
                        v23.lpVtbl);
    if ( RestorePosition < 0 )
    {
      v21 = 3036LL;
      goto LABEL_27;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  v17 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
          a2,
          v19);
  v10 = v17;
  if ( v17 < 0 )
  {
    v18 = 3039LL;
    goto LABEL_38;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  v15 = v27;
  if ( v27 )
LABEL_41:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return 0LL;
}
