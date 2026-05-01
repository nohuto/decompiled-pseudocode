/*
 * XREFs of ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180291754
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x1802A85E0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180014890 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800180B0 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018134 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Z @ 0x18001A63C (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Found.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800219D4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationReq.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180025C00 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180025D60 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180062390 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AB50 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180128EB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x18019D3E0 (-GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA-AVHString@Wrappers@W.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180285F24 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4View.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAPEAVViewEventDispatcher@@@Z @ 0x180286238 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGPEAVViewE.c)
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18028638C (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManage_ea_18028638C.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x18028BAF8 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@E@Z @ 0x18028DA84 (-SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     ?StartActivity@RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKKH@Z @ 0x18028E0CC (-StartActivity@RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKKH@Z.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1802927D4 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802933B0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180294DFC (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x18029510C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     ?_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z @ 0x18029543C (-_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180295548 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1802A4880 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x1802A4FF0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?GetHostIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_K@Z @ 0x1802A5300 (-GetHostIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_K@Z.c)
 *     ?SetMainViewStatusForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x1802A97E0 (-SetMainViewStatusForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall ViewEventDispatcher::ViewNavigationRequested(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 (__fastcall ***a5)(_QWORD, GUID *, __int64 *))
{
  unsigned int v7; // edi
  __int64 v9; // r13
  RTL_SRWLOCK *v10; // r12
  int v11; // eax
  HSTRING_HEADER *v12; // rax
  char v13; // dl
  __int64 v14; // rcx
  __int64 v15; // r8
  HSTRING_HEADER *v16; // rax
  __int64 v17; // r8
  char v18; // al
  unsigned int v19; // ebx
  HSTRING_HEADER *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  int AppUserModelIdForView; // eax
  int HostIdForView; // eax
  HSTRING_HEADER *v25; // rax
  __int64 v26; // r8
  int v27; // eax
  char v28; // cl
  bool v29; // bl
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v30; // rdx
  const unsigned __int16 *v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rbx
  int v35; // eax
  int v36; // r15d
  struct IViewWrapperInternal *v37; // rbx
  void (__fastcall *v38)(struct IViewWrapperInternal *, GUID *, struct ViewEventDispatcher **); // rdi
  char v39; // di
  unsigned int lpVtbl_high; // ebx
  int v41; // eax
  const unsigned __int16 *v42; // rax
  int v43; // eax
  struct IViewWrapperInternal *v44; // rcx
  int v45; // eax
  UINT32 *v46; // rdx
  HSTRING v47; // rcx
  int v48; // eax
  int v49; // eax
  int MatchingViewEventRegistration; // eax
  int valid; // eax
  RTL_SRWLOCK *v52; // rcx
  int v53; // eax
  __int64 v54; // rbx
  struct IInspectable *v55; // rcx
  int v56; // eax
  const char *v57; // r9
  char v58; // [rsp+40h] [rbp-288h]
  struct IInspectable *StringRawBuffer; // [rsp+48h] [rbp-280h] BYREF
  struct IViewWrapperInternal *v60; // [rsp+50h] [rbp-278h] BYREF
  char v61[8]; // [rsp+58h] [rbp-270h] BYREF
  struct IViewWrapperInternal *v62; // [rsp+60h] [rbp-268h] BYREF
  struct IViewWrapperInternal *Data; // [rsp+68h] [rbp-260h] BYREF
  __int64 v64; // [rsp+70h] [rbp-258h] BYREF
  struct IUnknown *v65; // [rsp+78h] [rbp-250h] BYREF
  struct ViewEventDispatcher *v66; // [rsp+80h] [rbp-248h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-240h] BYREF
  struct IInspectable *v68; // [rsp+90h] [rbp-238h] BYREF
  __int64 (__fastcall ***v69)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-230h] BYREF
  PSRWLOCK SRWLock; // [rsp+A0h] [rbp-228h] BYREF
  HSTRING string; // [rsp+A8h] [rbp-220h] BYREF
  int v72; // [rsp+B0h] [rbp-218h] BYREF
  struct IUnknown *v73; // [rsp+B8h] [rbp-210h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-208h] BYREF
  struct MsgString *v75; // [rsp+C8h] [rbp-200h] BYREF
  struct IUnknown *v76; // [rsp+D0h] [rbp-1F8h] BYREF
  unsigned __int64 v77; // [rsp+D8h] [rbp-1F0h] BYREF
  __int64 (__fastcall ***v78)(_QWORD, GUID *, __int64 *); // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-1E0h]
  __int64 v80; // [rsp+F0h] [rbp-1D8h]
  HSTRING_HEADER v81; // [rsp+F8h] [rbp-1D0h] BYREF
  __int64 v82; // [rsp+110h] [rbp-1B8h]
  HSTRING_HEADER v83; // [rsp+118h] [rbp-1B0h] BYREF
  _QWORD v84[40]; // [rsp+140h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v80 = -2LL;
  LODWORD(v73) = a4;
  v7 = a2;
  LODWORD(v76) = a2;
  v9 = (__int64)a5;
  v79 = a1;
  v67 = a2;
  LODWORD(v68) = a3;
  v78 = a5;
  LODWORD(v62) = 0;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v84,
    (__int64)"RequestNavigateToView");
  v84[0] = &ViewManagerInteropTraceLogging::RequestNavigateToView::`vftable';
  ViewManagerInteropTraceLogging::RequestNavigateToView::StartActivity(
    (ViewManagerInteropTraceLogging::RequestNavigateToView *)v84,
    v7,
    a3,
    a4,
    a5 != 0LL);
  if ( !*(_BYTE *)(a1 + 288) )
  {
    ViewManagerBridge::CloseViewForScenario(*(_QWORD *)(a1 + 496), v7, 0LL, 3LL);
    goto LABEL_85;
  }
  v60 = 0LL;
  v64 = 0LL;
  v58 = 0;
  v10 = (RTL_SRWLOCK *)(a1 + 280);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 280));
  SRWLock = (PSRWLOCK)(a1 + 280);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
  try
  {
    ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, v7, &v60);
    if ( v60 )
    {
      v36 = -2147024809;
      goto LABEL_59;
    }
    v65 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v65);
    v11 = ViewEventDispatcher::_RemovePendingViewReferenceForViewInstanceId((ViewEventDispatcher *)a1, v7, &v65);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        135LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    v69 = a5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v69);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, (const WCHAR **)off_180487E90);
    Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v69,
      &string,
      (HSTRING)v12[1].Reserved.Reserved1,
      L"Windows.Internal.ShellExperience.TopLevelApplication");
    v82 = 0LL;
    v72 = 0;
    wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::ReportUsageToService(
      v14,
      v13,
      v15);
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v83, (const WCHAR **)off_180487E98);
    LODWORD(v62) = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                &v69,
                (__int64)v16[1].Reserved.Reserved1,
                v17,
                &v72) < 0
      || (v18 = 0, !v72) )
    {
      v18 = 1;
    }
    if ( v18 )
    {
      StringRawBuffer = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
      if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(
                  (ViewEventDispatcher *)a1,
                  a3,
                  (struct IViewWrapperInternal **)&StringRawBuffer) >= 0 )
      {
        v19 = ((__int64 (__fastcall *)(struct IInspectable *))StringRawBuffer->lpVtbl[15].Release)(StringRawBuffer);
        v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v83, (const WCHAR **)off_180487E98);
        v22 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v69,
                (HSTRING)v20[1].Reserved.Reserved1,
                v21,
                v19);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA3,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v22);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
    }
    AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(*(ViewManagerBridge **)(a1 + 496), v65, &v75);
    if ( AppUserModelIdForView < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        168LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)AppUserModelIdForView);
    v81.Reserved.Reserved1 = &v75;
    v81.Reserved.Reserved2[8] = 1;
    v77 = -1LL;
    HostIdForView = ViewManagerBridge::GetHostIdForView(*(ViewManagerBridge **)(a1 + 496), v65, &v77);
    if ( HostIdForView < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        175LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HostIdForView);
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v83, (const WCHAR **)off_180487EA0);
    v27 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
            &v69,
            (__int64)v25[1].Reserved.Reserved1,
            v26,
            v61);
    v28 = v61[0];
    if ( v27 < 0 )
      v28 = 1;
    if ( (a4 & 0x10) != 0 || (v29 = 1, !v28) )
      v29 = 0;
    ViewManagerBridge::SetMainViewStatusForView(*(ViewManagerBridge **)(a1 + 496), v65, v29);
    if ( !v29 )
    {
      if ( a5 )
      {
        v45 = Windows::Internal::Shell::Desktop::ViewManagerInterop::SetAppActivationPolicy(
                (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v69,
                v30);
        if ( v45 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x113,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v45);
      }
      v36 = -2147024809;
LABEL_50:
      if ( v60 )
      {
LABEL_57:
        MsgRelease(v75);
        WindowsDeleteString(string);
        string = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v65);
LABEL_59:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v64);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(a1, v60, &v64);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            309LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        if ( v58 )
        {
          (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64, _QWORD))(*(_QWORD *)v60 + 672LL))(
            v60,
            -(__int64)(v64 != 0) & (v64 + 8),
            0LL);
          valid = ViewEventDispatcher::_AddValidView((ViewEventDispatcher *)a1, v60);
          if ( valid < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              317LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)valid);
        }
        if ( v10 )
          ReleaseSRWLockExclusive(v10);
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v60 + 720LL))(v60, v7);
        if ( v58 )
        {
          v52 = *(RTL_SRWLOCK **)(v64 + 32);
          SRWLock = v52;
          if ( v52 )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v52->Ptr + 1))(v52);
          ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v60, 0LL, a5, &SRWLock);
        }
        v74 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v74);
        v53 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForNavigationRequest,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Foundation::Collections::IPropertySet * &>(
                &v74,
                (__int64 *)&v78);
        if ( v53 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            332LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v53);
        try
        {
          StringRawBuffer = 0LL;
          v54 = v64;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
          if ( *(_QWORD *)(v54 + 32) )
          {
            v36 = Microsoft::WRL::WeakRef::InternalResolve(
                    (Microsoft::WRL::WeakRef *)(v54 + 32),
                    &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
                    &StringRawBuffer);
            v55 = StringRawBuffer;
          }
          else
          {
            v55 = 0LL;
            StringRawBuffer = 0LL;
          }
          if ( v36 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              340LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)v36);
          v56 = ((__int64 (__fastcall *)(struct IInspectable *, struct IViewWrapperInternal *, __int64))v55->lpVtbl->GetIids)(
                  v55,
                  v60,
                  v74);
          if ( v56 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              341LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)v56);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x157,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            v57);
          v9 = (__int64)v78;
        }
        (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64, __int64))(*(_QWORD *)v60 + 728LL))(v60, v9, v74);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v74);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v64);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        goto LABEL_85;
      }
      v66 = (struct ViewEventDispatcher *)a1;
      v46 = 0LL;
      v47 = string;
      if ( ((unsigned __int8)v73 & 8) != 0 )
      {
        LODWORD(v73) = 0;
        StringRawBuffer = (struct IInspectable *)WindowsGetStringRawBuffer(string, 0LL);
        Data = (struct IViewWrapperInternal *)MsgStringGetData(v75);
        v76 = v65;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        v48 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
                &v60,
                &v67,
                &v76,
                (__int64 *)&Data,
                &StringRawBuffer,
                &v73,
                &v66);
        if ( v48 >= 0 )
        {
LABEL_56:
          v58 = 1;
          goto LABEL_57;
        }
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          292LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v48);
      }
      StringRawBuffer = (struct IInspectable *)WindowsGetStringRawBuffer(v47, v46);
      Data = (struct IViewWrapperInternal *)MsgStringGetData(v75);
      v73 = v65;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
      v49 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,ViewEventDispatcher *>(
              &v60,
              &v67,
              &v73,
              (const unsigned __int16 **)&Data,
              (const unsigned __int16 **)&StringRawBuffer,
              &v66);
      if ( v49 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          302LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v49);
      goto LABEL_56;
    }
    Data = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
    v31 = WindowsGetStringRawBuffer(string, 0LL);
    if ( (int)ViewEventDispatcher::_ViewFromHostIdAndExperienceId((ViewEventDispatcher *)a1, v77, v31, &Data) < 0 )
    {
      v36 = -2147024809;
      goto LABEL_45;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v64);
    v32 = ViewEventDispatcher::_FindMatchingViewEventRegistration(a1, Data, &v64);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        207LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v32);
    StringRawBuffer = 0LL;
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&StringRawBuffer);
    v33 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSelectTargetView,ViewEventArgsForSelectTargetView,Windows::Foundation::Collections::IPropertySet * &,unsigned int &>(
            &StringRawBuffer,
            (__int64 *)&v78,
            (int *)&v68);
    if ( v33 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        210LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v33);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &SRWLock,
      0LL);
    v68 = 0LL;
    v34 = v64;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v68);
    if ( *(_QWORD *)(v34 + 32) )
    {
      v35 = Microsoft::WRL::WeakRef::InternalResolve(
              (Microsoft::WRL::WeakRef *)(v34 + 32),
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v68);
      v36 = -2147024809;
    }
    else
    {
      v68 = 0LL;
      v36 = -2147024809;
      v35 = -2147024809;
    }
    if ( v35 >= 0 )
    {
      v66 = 0LL;
      v37 = Data;
      v38 = **(void (__fastcall ***)(struct IViewWrapperInternal *, GUID *, struct ViewEventDispatcher **))Data;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
      v38(v37, &GUID_f4a53d68_890b_4931_bdbf_71158377eece, &v66);
      ((void (__fastcall *)(struct IInspectable *, struct ViewEventDispatcher *, struct IInspectable *))v68->lpVtbl->GetIids)(
        v68,
        v66,
        StringRawBuffer);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v68);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 280));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &SRWLock,
      (RTL_SRWLOCK *)(a1 + 280));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
    v39 = 1;
    v62 = 0LL;
    lpVtbl_high = HIDWORD(StringRawBuffer[12].lpVtbl);
    if ( LOBYTE(StringRawBuffer[12].lpVtbl) )
    {
      if ( lpVtbl_high )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        v41 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, lpVtbl_high, &v62);
        if ( v41 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFE,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v41);
        if ( v62 )
          goto LABEL_43;
      }
      else
      {
        v39 = 0;
      }
    }
    if ( v39 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
      v42 = WindowsGetStringRawBuffer(string, 0LL);
      v43 = ViewEventDispatcher::_ViewFromHostIdAndExperienceId((ViewEventDispatcher *)a1, v77, v42, &v62);
      if ( v43 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x108,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v43);
    }
LABEL_43:
    v44 = v60;
    v60 = v62;
    v62 = v44;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&StringRawBuffer);
    v10 = SRWLock;
    v7 = (unsigned int)v76;
LABEL_45:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Data);
    goto LABEL_50;
  }
  catch ( ... )
  {
    ViewManagerBridge::CloseViewForScenario(*(_QWORD *)(v79 + 496), v67, 0LL, 1LL);
  }
LABEL_85:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v84, 0);
  v84[0] = &ViewManagerInteropTraceLogging::RequestNavigateToView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v84);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v84);
}
