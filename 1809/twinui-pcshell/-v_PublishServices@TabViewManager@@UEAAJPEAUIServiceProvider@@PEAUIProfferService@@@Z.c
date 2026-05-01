/*
 * XREFs of ?v_PublishServices@TabViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801F1FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VBrokeredViewTabConverterImpl@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAU23456@@Details@WRL@Microsoft@@YAJPEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAU34567@@Z @ 0x1801CD07C (--$MakeAndInitialize@VBrokeredViewTabConverterImpl@@UIBrokeredViewTabConverter@Tabs@ComposableSh.c)
 *     ??$MakeAndInitialize@VTabAppPolicySettings@@UIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIServiceProvider@@@Z @ 0x1801CF93C (--$MakeAndInitialize@VTabAppPolicySettings@@UIBrokeredTabAppPolicySettings@Tabs@ComposableShell@.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1801EFC44 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::v_PublishServices(
        TabViewManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  int v9[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID v12[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v13[24]; // [rsp+68h] [rbp-A0h] BYREF
  int v14; // [rsp+80h] [rbp-88h]
  __int64 v15; // [rsp+98h] [rbp-70h]
  __int128 v16; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-50h]
  __int64 v18; // [rsp+C0h] [rbp-48h]
  __int128 v19; // [rsp+C8h] [rbp-40h]
  __int64 v20; // [rsp+D8h] [rbp-30h]
  __int64 v21; // [rsp+E0h] [rbp-28h]
  __int128 v22; // [rsp+E8h] [rbp-20h]
  __int64 *v23; // [rsp+F8h] [rbp-10h]
  __int64 v24; // [rsp+100h] [rbp-8h]
  __int128 v25; // [rsp+108h] [rbp+0h]
  __int64 v26; // [rsp+118h] [rbp+10h]
  __int64 v27; // [rsp+120h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v15 = -2LL;
  *(_QWORD *)v9 = a2;
  TabViewManagerTraceLogging::WatchCurrentThread((__int64)v12, (__int64)"TabViewManager_v_PublishServices");
  v10 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<TabAppPolicySettings,Windows::Internal::ComposableShell::Tabs::IBrokeredTabAppPolicySettings,IServiceProvider * &>(
         &v10,
         (__int64 *)v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C8,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  *(_QWORD *)v9 = 0LL;
  v11 = ((unsigned __int64)this + 104) & -(__int64)(this != (TabViewManager *)48);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<BrokeredViewTabConverterImpl,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &>(
         (BrokeredViewTabConverterImpl **)v9,
         (__int64 *)&v11);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 715LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v9);
LABEL_6:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
    if ( v14 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
    goto LABEL_13;
  }
  v16 = xmmword_1804774F0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = xmmword_180477500;
  v20 = *(_QWORD *)v9;
  v21 = 0LL;
  v22 = xmmword_180477510;
  v23 = v10;
  v24 = 0LL;
  v25 = xmmword_180477520;
  v26 = *((_QWORD *)this + 165);
  v27 = 0LL;
  v6 = CImmersiveShellComponent::RegisterServiceInformation(
         this,
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v16,
         4LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 724LL;
    goto LABEL_5;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
  v5 = 0;
LABEL_13:
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v12);
  return v5;
}
