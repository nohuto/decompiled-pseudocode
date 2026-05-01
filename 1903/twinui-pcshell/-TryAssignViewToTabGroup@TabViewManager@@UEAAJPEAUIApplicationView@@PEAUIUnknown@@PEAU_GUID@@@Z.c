/*
 * XREFs of ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18023F180
 * Callers:
 *     _lambda_7776713b7958a1ab94e34a9b72bfa77e_::operator() @ 0x18022B220 (_lambda_7776713b7958a1ab94e34a9b72bfa77e_--operator().c)
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180235400 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x18016284C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x18022CF68 (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 *     ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18022EC20 (-EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18022F2AC (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 *     ?GetActivationValueSet@TabViewManager@@AEAA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18022F380 (-GetActivationValueSet@TabViewManager@@AEAA-AV-$com_ptr_t@UIPropertySet@Collections@Foundation@W.c)
 *     ?InsertBadgeGlyph@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUHSTRING__@@11@Z @ 0x180231790 (-InsertBadgeGlyph@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAU.c)
 *     _anonymous_namespace_::IsTabGroupAppManaged @ 0x180231E50 (_anonymous_namespace_--IsTabGroupAppManaged.c)
 *     ?IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z @ 0x180231F94 (-IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180241A48 (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableSh.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802422F8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TabViewManager::TryAssignViewToTabGroup(
        TabViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct _GUID *a4)
{
  TabViewManager *v7; // r15
  int v8; // eax
  bool IsTabGroupAppManaged; // al
  const char *v10; // r9
  __int64 result; // rax
  int v12; // eax
  struct IApplicationView *v13; // rdx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v14; // rbx
  HWND WindowForView; // rax
  TabViewManager *v16; // rcx
  __int64 v17; // r8
  int v18; // edi
  HSTRING_HEADER *v19; // rdi
  int inserted; // eax
  int updated; // eax
  int v22; // eax
  int v23; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int16 v24; // [rsp+34h] [rbp-124h] BYREF
  struct IUnknown *v25; // [rsp+38h] [rbp-120h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v26; // [rsp+40h] [rbp-118h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v27; // [rsp+48h] [rbp-110h] BYREF
  LPVOID v28[4]; // [rsp+50h] [rbp-108h] BYREF
  LPVOID v29[4]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v30[24]; // [rsp+90h] [rbp-C8h] BYREF
  int v31; // [rsp+A8h] [rbp-B0h]
  __int64 v32; // [rsp+C0h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-90h] BYREF
  HSTRING v34; // [rsp+E0h] [rbp-78h]
  HSTRING_HEADER v35; // [rsp+E8h] [rbp-70h] BYREF
  HSTRING v36; // [rsp+100h] [rbp-58h]
  HSTRING_HEADER v37; // [rsp+108h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v32 = -2LL;
  TabViewManagerTraceLogging::WatchCurrentThread(v29, "TabViewManager_TryAssignViewToTabGroup");
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
  *a4 = 0uLL;
  v7 = (TabViewManager *)((char *)this - 136);
  try
  {
    TabViewManager::GetActivationValueSet(
      (__int64)this - 136,
      (__int64 *)&v25,
      (void (__fastcall ***)(_QWORD, GUID *, void **))a2);
    v8 = TabViewManager::EvaluateViewGroupingAndManagement(
           this,
           (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
           v25,
           &v23);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1318LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    IsTabGroupAppManaged = anonymous_namespace_::IsTabGroupAppManaged(
                             (__int64)v25,
                             (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2);
    if ( !v23 && !IsTabGroupAppManaged )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
      if ( v31 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v30);
LABEL_8:
      wil::details::StoredCallContextInfo::~StoredCallContextInfo(v29);
      return 0LL;
    }
    v26 = 0LL;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v26);
    v27 = 0LL;
    v12 = TabViewManager::ConnectTabToView(
            (TabViewManager *)((char *)this - 136),
            a2,
            (struct Windows::Foundation::Collections::IPropertySet *)v25,
            &v27,
            &v26);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1330LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v12);
    v14 = v26;
    if ( !v26 )
    {
LABEL_26:
      if ( v27 )
      {
        v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, HSTRING_HEADER *))(*(_QWORD *)v27 + 48LL))(
                v27,
                &hstringHeader);
        if ( v22 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1354LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v22);
        *a4 = *(struct _GUID *)&hstringHeader.Reserved.Reserved1;
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
      if ( v31 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v30);
      goto LABEL_8;
    }
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                            v13);
    if ( WindowForView )
      LOBYTE(WindowForView) = TabViewManager::IsWindowRunningInElevatedToken(WindowForView);
    if ( !(_BYTE)WindowForView )
    {
LABEL_23:
      if ( v23 )
      {
        updated = TabViewManager::UpdateTabDisplayName(v16, a2, v14);
        if ( updated < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x543,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)updated);
      }
      goto LABEL_26;
    }
    memset(v28, 0, 24);
    v18 = -2147467259;
    if ( Windows::Internal::ResourceString::FindAndSize(
           &_ImageBase,
           0x3521u,
           v17,
           (const unsigned __int16 **)&hstringHeader,
           &v24) )
    {
      v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              v28,
              (__int64)hstringHeader.Reserved.Reserved1,
              v24);
      if ( v18 >= 0 )
      {
        v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)v28);
        v34 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Segoe MDL2 Assets", 0x12u, 0x11u);
        v36 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v35, &word_1804F3524, 2u, 1u);
        inserted = TabViewManager::InsertBadgeGlyph(v7, v14, v36, v34, (HSTRING)v19[1].Reserved.Reserved1);
        if ( inserted < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x53D,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)inserted);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v28);
        goto LABEL_23;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53B,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v18);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v28);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
    if ( v31 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v30);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v29);
    result = (unsigned int)v18;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x550,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v10);
  }
  return result;
}
