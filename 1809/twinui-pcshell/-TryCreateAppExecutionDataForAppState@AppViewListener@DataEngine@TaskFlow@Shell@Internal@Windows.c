/*
 * XREFs of ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008E870
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180065BF0 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x1801AD6C0 (-GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIApp.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18004D3F8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18005EDB8 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?IsWinRTApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA_NPEAUIApplicationView@@@Z @ 0x18006D3D8 (-IsWinRTApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA_NPEAUIA.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x18006E870 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1800796E8 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180088C90 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_KPEBG@TaskFlowDataEngineTelemetry@@SAXAEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_K$$QEAPEBG@Z @ 0x18008DBB4 (--$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008E4D8 (--$_Try_emplace@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@-$map@V-$co.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x18008E57C (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?GetAppViewInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA?AV?$optional@UAppViewInfo@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAUIApplicationView@@@Z @ 0x18008E724 (-GetAppViewInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA-AV-$optional@U.c)
 *     ?Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@@Z @ 0x18008E7A4 (-Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@.c)
 *     ?SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@W4AppIdKind@Activities@Data@56@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008E7DC (-SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplication.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x18008EF8C (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x18008F17C (-TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801AD2AC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  int v7; // r13d
  unsigned int ProcessIdForApplicationView; // ebx
  __int64 v9; // r12
  __int64 **v10; // r15
  struct IApplicationView *v11; // rdx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v12; // rcx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v13; // rcx
  char *v14; // rdx
  const char *v15; // r9
  int *AppIdInfoForApplicationView; // rbx
  int v17; // r8d
  RTL_SRWLOCK *v18; // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  bool v21; // r12
  HSTRING_HEADER *v22; // rax
  PVOID v23; // r14
  __int64 v24; // r15
  __int64 v25; // rcx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 v28; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _WORD v33[2]; // [rsp+60h] [rbp-F8h] BYREF
  bool IsWinRTApplicationView; // [rsp+64h] [rbp-F4h]
  int Reserved1; // [rsp+68h] [rbp-F0h]
  LPVOID pv; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+78h] [rbp-E0h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-D8h] BYREF
  int v39; // [rsp+88h] [rbp-D0h]
  unsigned int v40; // [rsp+8Ch] [rbp-CCh]
  unsigned int v41; // [rsp+90h] [rbp-C8h]
  LPVOID v42[2]; // [rsp+98h] [rbp-C0h] BYREF
  HWND WindowForView; // [rsp+A8h] [rbp-B0h] BYREF
  int v44; // [rsp+B0h] [rbp-A8h] BYREF
  int v45; // [rsp+B8h] [rbp-A0h] BYREF
  const WCHAR *v46; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v47[2]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-80h] BYREF
  LPVOID v49; // [rsp+E0h] [rbp-78h]
  __int64 v50; // [rsp+E8h] [rbp-70h]
  HSTRING_HEADER v51; // [rsp+F0h] [rbp-68h] BYREF
  char v52; // [rsp+108h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v50 = -2LL;
  v41 = a3;
  v46 = (const WCHAR *)a1;
  v47[1] = a2;
  v45 = a3;
  v7 = 0;
  v39 = 0;
  v37 = 0LL;
  v33[0] = 0;
  ProcessIdForApplicationView = 0;
  v40 = 0;
  v9 = -1LL;
  Reserved1 = -1;
  pv = 0LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 104), &SRWLock);
  WindowForView = (HWND)a4;
  v10 = (__int64 **)(a1 + 112);
  v11 = (struct IApplicationView *)std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
                                     v10,
                                     (__int64 **)v42,
                                     (unsigned __int64 *)&WindowForView);
  if ( *(__int64 **)v11 == *v10 )
  {
    LODWORD(v42[0]) = 0;
    ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), LPVOID *))(*a4)[27])(
      a4,
      v42);
    if ( LODWORD(v42[0]) != 1 )
    {
      LOBYTE(v33[0]) = 1;
      *a2 = 0LL;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( pv )
        CoTaskMemFree(pv);
LABEL_53:
      ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v33);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v37);
      return (__int64)a2;
    }
  }
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a4, v11);
  if ( !WindowForView )
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
    HIBYTE(v33[0]) = 1;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)v10,
      (struct IApplicationView *)a4);
    *a2 = 0LL;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_53;
  }
  IsWinRTApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::IsWinRTApplicationView(
                             v12,
                             (struct IApplicationView *)a4);
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::GetAppViewInfo(v10, &v51, (unsigned __int64)a4);
  if ( v52 && *(_DWORD *)&v51.Reserved.Reserved2[16] )
  {
    ProcessIdForApplicationView = *(_DWORD *)&v51.Reserved.Reserved2[16];
    v40 = *(_DWORD *)&v51.Reserved.Reserved2[16];
  }
  else if ( v41 != 1 )
  {
    ProcessIdForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetProcessIdForApplicationView(
                                    v13,
                                    WindowForView,
                                    (struct IApplicationView *)a4,
                                    IsWinRTApplicationView);
    v40 = ProcessIdForApplicationView;
    if ( ProcessIdForApplicationView )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        v42,
        (__int64)a4);
      std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
        (__int64 *)v10,
        (__int64)&v48,
        (__int64 *)v42);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v42);
      *(_DWORD *)(v48 + 80) = ProcessIdForApplicationView;
    }
  }
  if ( v52
    && LODWORD(v51.Reserved.Reserved1) != -1
    && (v14 = *(char **)&v51.Reserved.Reserved2[8], *(_QWORD *)(*(_QWORD *)&v51.Reserved.Reserved2[8] + 16LL)) )
  {
    Reserved1 = (int)v51.Reserved.Reserved1;
    if ( *(_QWORD *)(*(_QWORD *)&v51.Reserved.Reserved2[8] + 24LL) >= 8uLL )
      v14 = **(char ***)&v51.Reserved.Reserved2[8];
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
      v42,
      v14,
      0xFFFFFFFFFFFFFFFFuLL);
    v39 = 8;
    if ( !v42[0] )
    {
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0xD86,
        (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
        v15);
LABEL_55:
      wil::details::in1diag3::Throw_Hr(
        v20,
        238LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v19);
LABEL_56:
      wil::details::in1diag3::Throw_Hr(
        v27,
        249LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v26);
      __debugbreak();
      return Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor_0(
               v31,
               v30,
               v32);
    }
    v7 = 4;
    v39 = 4;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      &pv,
      v42);
    if ( v42[0] )
      CoTaskMemFree(v42[0]);
  }
  else
  {
    AppIdInfoForApplicationView = (int *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
                                           v13,
                                           &v48,
                                           a4,
                                           ProcessIdForApplicationView);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      &pv,
      AppIdInfoForApplicationView + 2);
    v17 = *AppIdInfoForApplicationView;
    Reserved1 = *AppIdInfoForApplicationView;
    if ( v49 )
    {
      CoTaskMemFree(v49);
      v17 = Reserved1;
    }
    if ( !pv || v17 == -1 )
    {
      HIBYTE(v33[0]) = 1;
      Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
        (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)v10,
        (struct IApplicationView *)a4);
      *a2 = 0LL;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_53;
    }
    v42[0] = pv;
    do
      ++v9;
    while ( *((_WORD *)pv + v9) );
    v42[1] = (LPVOID)v9;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::SetAppIdInfo(
      (__int64 *)v10,
      (__int64)a4,
      v17,
      (const void **)v42);
  }
  if ( v41 == 1 )
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)v10,
      (struct IApplicationView *)a4);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  GetSystemTimeAsFileTime((LPFILETIME)&SRWLock);
  v18 = (RTL_SRWLOCK *)((unsigned int)SRWLock + ((unsigned __int64)SRWLock >> 32 << 32));
  SRWLock = v18;
  v47[0] = WindowForView;
  v44 = 0;
  v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))(*a4)[43])(
          a4,
          &v44);
  v20 = retaddr;
  if ( v19 < 0 )
    goto LABEL_55;
  v21 = v44 != 0;
  if ( pv )
  {
    WindowForView = (HWND)pv;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v51, (const WCHAR **)&WindowForView);
    v39 = v7 | 2;
    v23 = v22[1].Reserved.Reserved1;
  }
  else
  {
    v23 = 0LL;
  }
  v24 = *((_QWORD *)v46 + 16);
  v25 = v37;
  v37 = 0LL;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, RTL_SRWLOCK *, _QWORD, PVOID, int, bool, bool, unsigned int, __int64 *))(*(_QWORD *)v24 + 48LL))(
          v24,
          v41,
          v18,
          v47[0],
          v23,
          Reserved1,
          v21,
          IsWinRTApplicationView,
          v40,
          &v37);
  v27 = retaddr;
  if ( v26 < 0 )
    goto LABEL_56;
  v46 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath((LPCWSTR)pv);
  TaskFlowDataEngineTelemetry::AppExecutionDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::AppViewExecutionState &,__int64 &,unsigned __int64 &,unsigned short const *>(
    &v45,
    (__int64 *)&SRWLock,
    (__int64)v47,
    &v46);
  LOBYTE(v33[0]) = 1;
  if ( pv )
    CoTaskMemFree(pv);
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v33);
  v28 = v37;
  v37 = 0LL;
  *a2 = v28;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v37);
  return (__int64)a2;
}
