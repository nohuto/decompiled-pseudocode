/*
 * XREFs of ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A7B48
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x1802A85E0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180025808 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180025C00 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??_9ISwitchItemController@@$BHA@AA @ 0x1800D5390 (--_9ISwitchItemController@@$BHA@AA.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMA@AA @ 0x1800D6DD0 (--_9IPropertyValue@Foundation@Windows@@$BMA@AA.c)
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18028FFB0 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180290380 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@W4ViewGrouping@345@PEAUIAsyncCallback@@@Z @ 0x1802906B0 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390__&__1_long___lambda_18f2e6e28967ea052376c138380b4390__&_ @ 0x1802A2924 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802A2924.c)
 *     ??$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI00@Z @ 0x1802A3164 (--$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLog.c)
 *     ??$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEA_K@Z @ 0x1802A33D4 (--$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@View.c)
 *     ??$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEAM1@Z @ 0x1802A3564 (--$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@Vie.c)
 *     ??1OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802A4040 (--1OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellWinRtApi@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802A8EF8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellWinRtApi@@@wil@@CAX_NW4Repor.c)
 *     ?StartActivity@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1802AABFC (-StartActivity@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXKK.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall ViewManagerBridge::OnRequestApplicationViewSwitcherOperation(
        ViewManagerBridge *this,
        unsigned int a2,
        int a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v8; // rbx
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int PropVal; // edi
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  HSTRING v24; // rdi
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // r8
  int v39; // eax
  HSTRING v40; // rdi
  int v41; // eax
  __int64 v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v45; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Foundation::IPropertyValue *v48; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h] BYREF
  int v50; // [rsp+68h] [rbp-98h] BYREF
  int v51; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+74h] [rbp-8Ch]
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+84h] [rbp-7Ch]
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57[2]; // [rsp+90h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING v59; // [rsp+B8h] [rbp-48h]
  _QWORD v60[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v57[1] = -2LL;
  v50 = a3;
  v8 = *((_QWORD *)this + 13);
  v57[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v53 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v54 = a2;
  v55 = a3;
  v9 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390_____1_long___lambda_18f2e6e28967ea052376c138380b4390____(
         &v49,
         &v53);
  v11 = *v9;
  v56 = *v9;
  *v9 = 0LL;
  v12 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
      v12,
      v10);
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v60,
    (__int64)"OnRequestApplicationViewSwitcherOperation");
  v60[0] = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::StartActivity(
    (ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *)v60,
    a2,
    a3);
  v47 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v47);
  v59 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v14 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v13, &v51);
  PropVal = v14;
  if ( v14 >= 0 )
  {
    if ( v51 )
    {
      if ( v51 == 1 )
      {
        v59 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
        v27 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v26, &v44);
        PropVal = v27;
        if ( v27 < 0 )
        {
          v16 = (unsigned int)v27;
          v17 = 1510LL;
          goto LABEL_50;
        }
        v59 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
        v29 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v28, &v45);
        PropVal = v29;
        if ( v29 < 0 )
        {
          v16 = (unsigned int)v29;
          v17 = 1513LL;
          goto LABEL_50;
        }
        v59 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_vsp", 0x10u, 0xFu);
        v31 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v30, &v46);
        PropVal = v31;
        if ( v31 < 0 )
        {
          v16 = (unsigned int)v31;
          v17 = 1516LL;
          goto LABEL_50;
        }
        ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::SwitchAsync<unsigned int &,unsigned int &,unsigned int &>(
          (__int64)v60,
          &v44,
          (int *)&v45,
          (int *)&v46);
        ViewEventDispatcher::SwitchAsync(*((_QWORD *)this + 10), v44, v45, v46, v11);
        goto LABEL_52;
      }
      if ( v51 != 2 )
      {
        PropVal = -2147024809;
        v17 = 1560LL;
LABEL_49:
        v16 = (unsigned int)PropVal;
        goto LABEL_50;
      }
      v59 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryShowAsViewModeAsync_ViewId",
        0x1Eu,
        0x1Du);
      v19 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v18, &v46);
      PropVal = v19;
      if ( v19 < 0 )
      {
        v16 = (unsigned int)v19;
        v17 = 1530LL;
        goto LABEL_50;
      }
      v59 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryShowAsViewModeAsync_ApplicationViewMode",
        0x2Bu,
        0x2Au);
      v21 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v20, &v45);
      PropVal = v21;
      if ( v21 < 0 )
      {
        v16 = (unsigned int)v21;
        v17 = 1533LL;
        goto LABEL_50;
      }
      v59 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryShowAsViewModeAsync_ViewModePreferences_ViewSizePreference",
        0x3Eu,
        0x3Du);
      v23 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v22, &v44);
      PropVal = v23;
      if ( v23 < 0 )
      {
        v16 = (unsigned int)v23;
        v17 = 1536LL;
        goto LABEL_50;
      }
      v59 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryShowAsViewModeAsync_ViewModePreferences_CustomSize",
        0x36u,
        0x35u);
      v24 = v59;
      v49 = 0LL;
      v48 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
      PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v47,
                  v24,
                  &v48);
      if ( PropVal >= 0 )
      {
        v25 =  Windows::Foundation::IPropertyValue::`vcall'{192,{flat}}((__int64)v48);
        PropVal = v25;
        if ( v25 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
          PropVal = 0;
          goto LABEL_24;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v25);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
LABEL_24:
      if ( PropVal < 0 )
      {
        v17 = 1539LL;
        goto LABEL_49;
      }
      v52 = 0;
      wil::Feature<__WilFeatureTraits_Feature_TabShellWinRtApi>::ReportUsageToService();
      ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsViewModeAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,float &,float &>(
        (__int64)v60,
        (int *)&v46,
        &v50,
        (int *)&v45,
        &v44,
        (float *)&v49,
        (float *)&v49 + 1);
      ViewEventDispatcher::TryShowAsViewModeAsync(*((_QWORD *)this + 10), v46, a3, v45, v44, v49, v52, v11);
LABEL_52:
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v60, 0);
      PropVal = 0;
      goto LABEL_53;
    }
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"TryShowAsStandaloneAsync_IdToShow",
      0x22u,
      0x21u);
    v33 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v32, &v50);
    PropVal = v33;
    if ( v33 < 0 )
    {
      v16 = (unsigned int)v33;
      v17 = 1483LL;
      goto LABEL_50;
    }
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"TryShowAsStandaloneAsync_IdAnchor",
      0x22u,
      0x21u);
    v35 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v34, &v44);
    PropVal = v35;
    if ( v35 < 0 )
    {
      v16 = (unsigned int)v35;
      v17 = 1486LL;
      goto LABEL_50;
    }
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"TryShowAsStandaloneAsync_avspToShow",
      0x24u,
      0x23u);
    v37 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v36, &v45);
    PropVal = v37;
    if ( v37 < 0 )
    {
      v16 = (unsigned int)v37;
      v17 = 1489LL;
      goto LABEL_50;
    }
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"TryShowAsStandaloneAsync_avspAnchor",
      0x24u,
      0x23u);
    v39 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, (__int64)v59, v38, &v46);
    PropVal = v39;
    if ( v39 < 0 )
    {
      v16 = (unsigned int)v39;
      v17 = 1492LL;
      goto LABEL_50;
    }
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"NavigationRequestIdForBaseActivation",
      0x25u,
      0x24u);
    v40 = v59;
    v49 = 0LL;
    v48 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v47,
                v40,
                &v48);
    if ( PropVal >= 0 )
    {
      v41 =  ISwitchItemController::`vcall'{112,{flat}}((__int64)v48);
      PropVal = v41;
      if ( v41 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
        PropVal = 0;
        goto LABEL_47;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v41);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
LABEL_47:
    if ( PropVal < 0 )
    {
      v17 = 1495LL;
      goto LABEL_49;
    }
    ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsStandaloneAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
      (__int64)v60,
      &v50,
      &v44,
      (int *)&v45,
      (int *)&v46,
      (__int64)&v49);
    LODWORD(v43) = v46;
    ViewEventDispatcher::TryShowAsStandaloneAsync(*((RTL_SRWLOCK **)this + 10), v50, v44, v45, v43, v49, v11);
    goto LABEL_52;
  }
  v16 = (unsigned int)v14;
  v17 = 1477LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)v16);
LABEL_53:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
  ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::~OnRequestApplicationViewSwitcherOperation((ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *)v60);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v57);
  return (unsigned int)PropVal;
}
