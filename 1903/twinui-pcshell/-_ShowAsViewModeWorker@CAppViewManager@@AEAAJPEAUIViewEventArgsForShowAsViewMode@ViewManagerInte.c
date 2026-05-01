/*
 * XREFs of ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180138674
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::Invoke @ 0x1801314B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1801314B0.c)
 * Callees:
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x18000F8BC (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18000FD64 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800103D0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180010FF0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180030A98 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003DBCC (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180065238 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18007B5AC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010CF08 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_18010CF08.c)
 *     ??$?0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z @ 0x18012C684 (--$-0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18012C6D0 (--$ActivateInstance@V-$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Win.c)
 *     ??$As@UIPropertySet@Collections@Foundation@Windows@@@?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18012C770 (--$As@UIPropertySet@Collections@Foundation@Windows@@@-$ComPtr@UIModalExperienceDefaultOptions@Mo.c)
 *     ??0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18012D828 (--0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18012DD98 (--1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012DF8C (--4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18012F4A0 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132300 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     ?SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x1801323F8 (-SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x1801324A0 (-SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Win.c)
 *     ?SetTargetPresenterKind@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ApplicationWindowPresenterKind@WindowManagement@UI@5@@Z @ 0x180132618 (-SetTargetPresenterKind@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Intern.c)
 *     ?SetTargetViewMode@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ApplicationViewMode@ViewManagement@UI@5@@Z @ 0x1801326BC (-SetTargetViewMode@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverlayEnterStyle@@@Z @ 0x1801332EC (-StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverla.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016F604 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=29
__int64 __fastcall CAppViewManager::_ShowAsViewModeWorker(
        IUnknown **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2,
        struct IPresentationRequestedArgs *a3)
{
  float v3; // xmm2_4
  __int64 (__fastcall *v7)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  const unsigned __int16 *v22; // rdx
  __int64 *v23; // rax
  int v24; // eax
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  char v32; // di
  __int64 v33; // r8
  __int64 v34; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v35; // rbx
  __int64 (__fastcall *v36)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *); // rdi
  int v37; // eax
  __int64 v38; // rdx
  HRESULT v39; // eax
  __int64 v40; // rdx
  LPVOID v41; // rbx
  __int64 (__fastcall *v42)(LPVOID, void *, GUID *, void **); // rdi
  int v43; // eax
  __int64 v44; // rdx
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // r8
  __int64 (__fastcall *v46)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v47; // eax
  int v48; // eax
  int v49; // ebx
  bool v50; // di
  HWND v51; // r14
  HRESULT v52; // eax
  void *v53; // rbx
  __int64 (__fastcall *v54)(void *, HWND, HSTRING *); // rdi
  int v55; // eax
  HSTRING v56; // rbx
  int (__fastcall *v57)(HSTRING, GUID *, HWND *); // rdi
  struct IApplicationView *v58; // rdx
  int v59; // eax
  __int64 *p_ppvOut; // rcx
  __int64 *v61; // rcx
  HRESULT Service; // eax
  HWND v63; // rbx
  __int64 (__fastcall *v64)(HWND, HWND, HSTRING *); // rdi
  int v65; // eax
  HSTRING v66; // rbx
  __int64 (__fastcall *v67)(HSTRING, HSTRING_HEADER *); // rdi
  int v68; // eax
  BOOL v69; // edi
  const WCHAR *Reserved1; // rbx
  int v71; // eax
  __int64 v72; // rdx
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v73; // rdx
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v74; // rdx
  int v75; // eax
  __int64 v76; // rdx
  LPVOID v77; // rcx
  struct IAsyncCallback *v78; // rdi
  struct IAsyncCallback *v79; // rax
  struct IAsyncCallback *v80; // rbx
  int v81; // eax
  LPVOID v82; // rcx
  HSTRING string; // [rsp+48h] [rbp-C0h] BYREF
  HWND v85; // [rsp+50h] [rbp-B8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v86; // [rsp+58h] [rbp-B0h] BYREF
  void *ppvOut; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v88; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v89)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-98h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp-90h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v91; // [rsp+80h] [rbp-88h] BYREF
  int v92; // [rsp+88h] [rbp-80h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v93; // [rsp+90h] [rbp-78h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v94; // [rsp+98h] [rbp-70h] BYREF
  HWND v95; // [rsp+A0h] [rbp-68h] BYREF
  int v96; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING v99; // [rsp+D0h] [rbp-38h]
  HSTRING_HEADER v100; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING v101; // [rsp+F0h] [rbp-18h]
  _BYTE v102[48]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD *v103; // [rsp+128h] [rbp+20h]
  _QWORD v104[40]; // [rsp+238h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3C0h] [rbp+2B8h]

  v97 = -2LL;
  v93 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v93);
  v8 = v7(a2, &v93);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = WindowFromViewWrapper(
           (__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v93,
           &v85);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2233LL;
      goto LABEL_5;
    }
    v94 = 0LL;
    v11 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v94);
    v12 = v11(a2, &v94);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 2237LL;
LABEL_69:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_149;
    }
    v12 = WindowFromViewWrapper(
            (__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v94,
            &v95);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 2238LL;
      goto LABEL_69;
    }
    v92 = 0;
    wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(v15, v14, v16);
    v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, int *))(*(_QWORD *)a2 + 72LL))(
            a2,
            &v92);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 2243LL;
      goto LABEL_69;
    }
    wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(v18, v17, v19);
    if ( (unsigned int)(v92 - 1) <= 1 )
    {
      v85 = 0LL;
      v20 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v94,
              (__int64 *)&v85);
      v9 = v20;
      if ( v20 < 0 )
      {
        v21 = 2250LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v20);
LABEL_57:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v85);
LABEL_149:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v94);
        goto LABEL_150;
      }
      v20 = (*(__int64 (__fastcall **)(HWND, __int64 *))(*(_QWORD *)v85 + 48LL))(v85, &v88);
      v9 = v20;
      if ( v20 < 0 )
      {
        v21 = 2252LL;
        goto LABEL_17;
      }
      v89 = 0LL;
      v23 = (__int64 *)Windows::Internal::StringReference::StringReference(
                         (HSTRING *)&hstringHeader,
                         (const unsigned __int16 (*)[62])v22);
      v24 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>>(
              *v23,
              (__int64 *)&v89);
      v9 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8D2,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v24);
LABEL_56:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v89);
        goto LABEL_57;
      }
      v91 = 0LL;
      v25 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>::As<Windows::Foundation::Collections::IPropertySet>(
              &v89,
              (__int64 *)&v91);
      v9 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8D5,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v25);
LABEL_55:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v91);
        goto LABEL_56;
      }
      v86 = v91;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v86);
      v99 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ModalExperienceOption.ShouldDisplayFullscreen",
        0x2Eu,
        0x2Du);
      v27 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
              v99,
              v26,
              0);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2264LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v27);
LABEL_54:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v86);
        goto LABEL_55;
      }
      v99 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ModalExperienceOption.SuppressSplashscreen",
        0x2Bu,
        0x2Au);
      v27 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
              v99,
              v29,
              1);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2265LL;
        goto LABEL_40;
      }
      v99 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ModalExperienceOption.SuppressTitleBar",
        0x27u,
        0x26u);
      v27 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
              v99,
              v30,
              0);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2266LL;
        goto LABEL_40;
      }
      v99 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ModalExperienceOption.LinkAsTreeNode",
        0x25u,
        0x24u);
      v27 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
              v99,
              v31,
              1);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2267LL;
        goto LABEL_40;
      }
      v32 = v92 == 1;
      v99 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ModalExperienceOption.DismissOnIdle",
        0x24u,
        0x23u);
      v27 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
              v99,
              v33,
              v32);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2270LL;
        goto LABEL_40;
      }
      v99 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ModalExperienceOption.ShouldLightDismiss",
        0x29u,
        0x28u);
      v27 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
              v99,
              v34,
              v32);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2271LL;
        goto LABEL_40;
      }
      v27 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, HWND *))(*(_QWORD *)a2 + 96LL))(
              a2,
              &v95);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2274LL;
        goto LABEL_40;
      }
      v27 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), HWND))(*v89)[6])(v89, v95);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2275LL;
        goto LABEL_40;
      }
      v27 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v89)[10])(v89, 0LL);
      v9 = v27;
      if ( v27 < 0 )
      {
        v28 = 2276LL;
        goto LABEL_40;
      }
      string = 0LL;
      v35 = v93;
      v36 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)v93 + 528LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v37 = v36(v35, &string);
      v9 = v37;
      if ( v37 < 0 )
      {
        v38 = 2279LL;
LABEL_45:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v37);
LABEL_53:
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_54;
      }
      v37 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), HSTRING))(*v89)[12])(
              v89,
              string);
      v9 = v37;
      if ( v37 < 0 )
      {
        v38 = 2280LL;
        goto LABEL_45;
      }
      ppvOut = 0LL;
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      v39 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
      v9 = v39;
      if ( v39 < 0 )
      {
        v40 = 2285LL;
LABEL_52:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v40,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v39);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_53;
      }
      v41 = ppv;
      v42 = *(__int64 (__fastcall **)(LPVOID, void *, GUID *, void **))(*(_QWORD *)ppv + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v39 = v42(v41, &unk_1804E9308, &GUID_73ef35c2_3adf_4ac8_8383_0850e26e9683, &ppvOut);
      v9 = v39;
      if ( v39 < 0 )
      {
        v40 = 2286LL;
        goto LABEL_52;
      }
      v39 = (*(__int64 (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)ppvOut + 48LL))(
              ppvOut,
              v93,
              (unsigned int)v88,
              v89);
      v9 = v39;
      if ( v39 < 0 )
      {
        v40 = 2288LL;
        goto LABEL_52;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v86);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v91);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v89);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v85);
LABEL_148:
      v9 = 0;
      goto LABEL_149;
    }
    v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64 *))(*(_QWORD *)a2 + 64LL))(
            a2,
            &v88);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 2293LL;
      goto LABEL_69;
    }
    hstringHeader.Reserved.Reserved1 = 0LL;
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = 0;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, HSTRING_HEADER *))(*(_QWORD *)a2 + 80LL))(
            a2,
            &hstringHeader);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 2296LL;
      goto LABEL_69;
    }
    v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, char *))(*(_QWORD *)a2 + 88LL))(
            a2,
            &hstringHeader.Reserved.Reserved2[4]);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 2297LL;
      goto LABEL_69;
    }
    v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, char *))(*(_QWORD *)a2 + 112LL))(
            a2,
            &hstringHeader.Reserved.Reserved2[8]);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 2298LL;
      goto LABEL_69;
    }
    v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, int *))(*(_QWORD *)a2 + 96LL))(
            a2,
            &v96);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 2301LL;
      goto LABEL_69;
    }
    v86 = 0LL;
    v43 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v86);
    v9 = v43;
    if ( v43 < 0 )
    {
      v44 = 2305LL;
LABEL_74:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v44,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v43);
LABEL_135:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v86);
      goto LABEL_149;
    }
    v101 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v100, L"ClientRequestedNavigationType", 0x1Eu, 0x1Du);
    v43 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
            v101,
            v45,
            2u);
    v9 = v43;
    if ( v43 < 0 )
    {
      v44 = 2307LL;
      goto LABEL_74;
    }
    v91 = 0LL;
    v46 = **(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v91);
    v47 = v46(a2, &GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684, &v91);
    if ( v47 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2315LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v47);
      __debugbreak();
    }
    ppv = 0LL;
    v48 = (*(__int64 (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, LPVOID *))(*(_QWORD *)v91 + 48LL))(
            v91,
            &ppv);
    v9 = v48;
    if ( v48 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90E,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v48);
LABEL_132:
      v77 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v77 + 16LL))(v77);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v91);
      goto LABEL_135;
    }
    v49 = 0;
    if ( ppv
      && (*(int (__fastcall **)(LPVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)ppv + 48LL))(
           ppv,
           &v89) >= 0 )
    {
      v49 = (int)v89;
      if ( (_DWORD)v89 )
      {
        if ( (_DWORD)v89 == 1 )
          LODWORD(v88) = 1;
      }
      else
      {
        LODWORD(v88) = 0;
      }
    }
    v50 = 1;
    CAppViewManagerTelemetry::EnterCompactOverlayModeForView::EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v102);
    v51 = v85;
    if ( v49 == 2 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v52 = IUnknown_QueryService(
              this[15],
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &ppvOut);
      v9 = v52;
      if ( v52 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x92C,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v52);
LABEL_95:
        p_ppvOut = (__int64 *)&ppvOut;
LABEL_96:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(p_ppvOut);
LABEL_131:
        CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v102);
        goto LABEL_132;
      }
      string = 0LL;
      v53 = ppvOut;
      v54 = *(__int64 (__fastcall **)(void *, HWND, HSTRING *))(*(_QWORD *)ppvOut + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
      v55 = v54(v53, v51, &string);
      v9 = v55;
      if ( v55 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x92F,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v55);
LABEL_94:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
        goto LABEL_95;
      }
      v85 = 0LL;
      v56 = string;
      v57 = **(int (__fastcall ***)(HSTRING, GUID *, HWND *))string;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v85);
      if ( v57(v56, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v85) < 0
        || FullScreenPositionerHelpers::IsFullScreenModeDisabledForView((FullScreenPositionerHelpers *)string, v58) )
      {
        v50 = 0;
      }
      else
      {
        v50 = 1;
        v59 = ViewModePreferencesHelpers::SetTargetPresenterKind(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
                2u);
        v9 = v59;
        if ( v59 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x937,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v59);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v85);
          goto LABEL_94;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v85);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
      v61 = (__int64 *)&ppvOut;
      goto LABEL_122;
    }
    if ( (_DWORD)v88 != 1 )
    {
      if ( (_DWORD)v88 )
        goto LABEL_136;
      v75 = ViewModePreferencesHelpers::SetTargetViewMode((Windows::Internal::ShellHelpers::PropertySetHelper *)&v86, 0);
      v9 = v75;
      if ( v75 < 0 )
      {
        v76 = 2391LL;
LABEL_130:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v76,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v75);
        goto LABEL_131;
      }
      MoveTryPositionPropertiesToPropertySet(v51, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v86);
LABEL_127:
      if ( !v50 )
      {
        v75 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64))(*(_QWORD *)a2 + 104LL))(
                a2,
                1LL);
        v9 = v75;
        if ( v75 < 0 )
        {
          v76 = 2420LL;
          goto LABEL_130;
        }
LABEL_143:
        if ( *v103 == 1 )
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v102);
        CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v102);
        v82 = ppv;
        if ( ppv )
        {
          ppv = 0LL;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v82 + 16LL))(v82);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v91);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v86);
        goto LABEL_148;
      }
LABEL_136:
      ppvOut = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppvOut);
      v85 = (HWND)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v85);
      v78 = 0LL;
      v79 = (struct IAsyncCallback *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v80 = v79;
      if ( v79 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v79);
        *((_QWORD *)v80 + 2) = 0LL;
        if ( (HWND *)((char *)v80 + 16) != &v85 )
        {
          *((_QWORD *)v80 + 2) = a2;
          v85 = 0LL;
        }
        *(_QWORD *)v80 = off_180434DC8;
        v78 = v80;
      }
      string = (HSTRING)v78;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v85);
      v81 = CAppViewManager::_ShowViewAsyncWorker(
              (CAppViewManager *)this,
              v51,
              v95,
              (const struct CAppViewManager::ShowViewAsyncOptions *)&hstringHeader,
              v86,
              v78,
              a3);
      if ( v81 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x970,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v81);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_143;
    }
    v85 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v85);
    Service = IUnknown_QueryService(
                this[15],
                &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                (void **)&v85);
    v9 = Service;
    if ( Service < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93D,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)Service);
LABEL_120:
      p_ppvOut = (__int64 *)&v85;
      goto LABEL_96;
    }
    string = 0LL;
    v63 = v85;
    v64 = *(__int64 (__fastcall **)(HWND, HWND, HSTRING *))(*(_QWORD *)v85 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
    v65 = v64(v63, v51, &string);
    v9 = v65;
    if ( v65 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x940,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v65);
LABEL_119:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
      goto LABEL_120;
    }
    memset(&v100, 0, sizeof(v100));
    v66 = string;
    v67 = *(__int64 (__fastcall **)(HSTRING, HSTRING_HEADER *))(*(_QWORD *)string + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v100);
    *(_QWORD *)&v100.Reserved.Reserved2[8] = -1LL;
    *(_QWORD *)&v100.Reserved.Reserved2[16] = -1LL;
    v68 = v67(v66, &v100);
    v9 = v68;
    if ( v68 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x942,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v68);
LABEL_118:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v100);
      goto LABEL_119;
    }
    v69 = v95 != v51;
    Reserved1 = (const WCHAR *)v100.Reserved.Reserved1;
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v104,
      (__int64)"EnterCompactOverlayModeForView");
    v104[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
    CAppViewManagerTelemetry::EnterCompactOverlayModeForView::StartActivity((__int64)v104, Reserved1, !v69);
    CAppViewManagerTelemetry::EnterCompactOverlayModeForView::operator=((__int64)v102, (__int64)v104);
    CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v104);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v71 = IUnknown_QueryService(
            this[15],
            &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
            &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
            &ppvOut);
    v9 = v71;
    if ( v71 >= 0 )
    {
      v71 = (*(__int64 (__fastcall **)(void *, HSTRING, BOOL, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)ppvOut + 96LL))(
              ppvOut,
              string,
              v69,
              &v89);
      v9 = v71;
      if ( v71 >= 0 )
      {
        v50 = (_DWORD)v89 != 0;
        if ( (_DWORD)v89 )
        {
          v71 = ViewModePreferencesHelpers::SetTargetViewMode(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v86,
                  v88);
          v9 = v71;
          if ( v71 < 0 )
          {
            v72 = 2383LL;
            goto LABEL_117;
          }
          v71 = ViewModePreferencesHelpers::SetSizeHintWidth((ViewModePreferencesHelpers *)&v86, v73, v3);
          v9 = v71;
          if ( v71 < 0 )
          {
            v72 = 2384LL;
            goto LABEL_117;
          }
          v71 = ViewModePreferencesHelpers::SetSizeHintHeight((ViewModePreferencesHelpers *)&v86, v74, v3);
          v9 = v71;
          if ( v71 < 0 )
          {
            v72 = 2385LL;
            goto LABEL_117;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v100);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
        v61 = (__int64 *)&v85;
LABEL_122:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v61);
        goto LABEL_127;
      }
      v72 = 2378LL;
    }
    else
    {
      v72 = 2375LL;
    }
LABEL_117:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v72,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v71);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_118;
  }
  v10 = 2232LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_150:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v93);
  return v9;
}
