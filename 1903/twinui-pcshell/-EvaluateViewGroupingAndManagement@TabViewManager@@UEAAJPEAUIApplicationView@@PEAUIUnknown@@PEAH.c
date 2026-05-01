/*
 * XREFs of ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18022EC20
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18023F180 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800997E8 (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     ??$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180099930 (--$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32Appl.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802422F8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x180243D28 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 *     ?ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z @ 0x180245B54 (-ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z.c)
 *     ?GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18040F0FC (-GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::EvaluateViewGroupingAndManagement(
        TabViewManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IUnknown *a3,
        int *a4)
{
  __int64 result; // rax
  int v8; // eax
  bool v9; // bl
  struct IApplicationView *v10; // rdx
  HWND WindowForView; // rax
  const char *v12; // r9
  bool v13; // bl
  struct IApplicationView *v14; // rdx
  HWND FrameWindowForView; // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v19[2]; // [rsp+20h] [rbp-88h] BYREF
  LPVOID v20[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v21[24]; // [rsp+50h] [rbp-58h] BYREF
  int v22; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v24; // [rsp+B0h] [rbp+8h]
  __int64 (__fastcall ***v25)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+B8h] [rbp+10h] BYREF
  struct IUnknown *v26; // [rsp+C0h] [rbp+18h] BYREF
  struct IServiceProvider *v27; // [rsp+C8h] [rbp+20h] BYREF

  v26 = a3;
  v25 = a2;
  v19[1] = (struct Windows::Foundation::Collections::IPropertySet *)-2LL;
  *a4 = 0;
  TabViewManagerTraceLogging::WatchCurrentThread(v20, "TabViewManager_EvaluateViewGroupingAndManagement");
  if ( !*((_BYTE *)this + 1308) )
  {
    if ( v22 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v21);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v20);
    return 0LL;
  }
  try
  {
    v8 = ((__int64 (*)(void))(*a2)[51])();
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1153LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    if ( !v24 )
    {
      (**a2)((ApplicationViewHelpers *)a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, (__int64 *)v19);
      v9 = v19[0] != 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v19);
      if ( v9 )
      {
        WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v10);
        SetPropW(WindowForView, L"AppOptOutOfTabbing", HANDLE_FLAG_INHERIT);
      }
      if ( v22 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v21);
LABEL_12:
      wil::details::StoredCallContextInfo::~StoredCallContextInfo(v20);
      return 0LL;
    }
    wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(&v27, &v26);
    (**a2)((ApplicationViewHelpers *)a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, (__int64 *)v19);
    v13 = v19[0] != 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v19);
    if ( v13 )
    {
      FrameWindowForView = ApplicationViewHelpers::GetFrameWindowForView((ApplicationViewHelpers *)a2, v14);
      RemovePropW(FrameWindowForView, L"AppOptOutOfTabbing");
      if ( TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(
             (struct IServiceProvider *)(((unsigned __int64)this - 80) & -(__int64)(this != (TabViewManager *)136)),
             v27,
             0LL,
             *((struct IWin32ApplicationView **)this + 133),
             v19[0])
        && TabAppPolicySettings::ViewUsesCustomTabsWhenLaunchedIntoNewGroup((struct IApplicationView *)a2) )
      {
        SetPropW(FrameWindowForView, L"WindowHasAppManagedTabs", HANDLE_FLAG_INHERIT);
        v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), _QWORD))(*a2)[52])(
                a2,
                0LL);
        v17 = retaddr;
        if ( v16 < 0 )
        {
          v18 = 1185LL;
LABEL_21:
          wil::details::in1diag3::_Log_Hr(
            v17,
            (void *)v18,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v16);
          goto LABEL_22;
        }
        goto LABEL_22;
      }
      if ( GetPropW(FrameWindowForView, L"WindowHasAppManagedTabs") )
      {
        v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), _QWORD))(*a2)[52])(
                a2,
                0LL);
        v17 = retaddr;
        if ( v16 < 0 )
        {
          v18 = 1191LL;
          goto LABEL_21;
        }
LABEL_22:
        *a4 = 0;
        goto LABEL_25;
      }
      *a4 = 1;
    }
    else
    {
      wil::com_query<IWin32ApplicationView,IApplicationView * &>((__int64)v19, &v25);
      TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(
        (struct IServiceProvider *)(((unsigned __int64)this - 80) & -(__int64)(this != (TabViewManager *)136)),
        v27,
        v19[0],
        *((struct IWin32ApplicationView **)this + 133),
        v19[0]);
      *a4 = 1;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v19);
    }
LABEL_25:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
    if ( v22 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v21);
    goto LABEL_12;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4BD,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v12);
  }
  return result;
}
