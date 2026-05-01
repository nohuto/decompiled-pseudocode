/*
 * XREFs of ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1800A5478
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18006A0D0 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x180217D90 (-GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIApp.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180043688 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180054380 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054660 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x180072B64 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_KPEBG@TaskFlowDataEngineTelemetry@@SAXAEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_K$$QEAPEBG@Z @ 0x180072BBC (--$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?IsWinRTApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA_NPEAUIApplicationView@@@Z @ 0x180075BE4 (-IsWinRTApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA_NPEAUIA.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18007B278 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x18007F128 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A50E4 (--$_Try_emplace@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@-$map@V-$co.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x1800A5184 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?GetAppViewInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA?AV?$optional@UAppViewInfo@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAUIApplicationView@@@Z @ 0x1800A5334 (-GetAppViewInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA-AV-$optional@U.c)
 *     ?Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@@Z @ 0x1800A53AC (-Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@.c)
 *     ?SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@W4AppIdKind@Activities@Data@56@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A53E4 (-SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplication.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1800A5B44 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x1800A5D2C (-TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  int v7; // r13d
  unsigned int ProcessIdForApplicationView; // ebx
  __int64 v9; // r15
  __int64 **v10; // r12
  struct IApplicationView *v11; // rdx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v12; // rcx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v13; // rcx
  __int64 v14; // rdx
  __int64 AppIdInfoForApplicationView; // rbx
  int v16; // r8d
  RTL_SRWLOCK *v17; // rbx
  int v18; // eax
  __int64 v19; // r15
  bool v20; // r12
  HSTRING_HEADER *v21; // rax
  PVOID v22; // r14
  __int64 v23; // rcx
  int v24; // eax
  const unsigned __int16 *v25; // rdx
  wil::details::in1diag3 *v26; // rcx
  __int64 v27; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _WORD v32[2]; // [rsp+60h] [rbp-E8h] BYREF
  bool IsWinRTApplicationView; // [rsp+64h] [rbp-E4h]
  int Reserved1; // [rsp+68h] [rbp-E0h]
  LPVOID pv; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+78h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+88h] [rbp-C0h]
  unsigned int v39; // [rsp+8Ch] [rbp-BCh]
  HWND WindowForView; // [rsp+90h] [rbp-B8h] BYREF
  LPVOID v41[2]; // [rsp+98h] [rbp-B0h] BYREF
  int v42; // [rsp+A8h] [rbp-A0h] BYREF
  int v43; // [rsp+ACh] [rbp-9Ch]
  const WCHAR *v44; // [rsp+B0h] [rbp-98h] BYREF
  int v45; // [rsp+B8h] [rbp-90h] BYREF
  _QWORD v46[2]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-78h] BYREF
  LPVOID v48; // [rsp+D8h] [rbp-70h]
  __int64 v49; // [rsp+E0h] [rbp-68h]
  HSTRING_HEADER v50; // [rsp+E8h] [rbp-60h] BYREF
  char v51; // [rsp+100h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v49 = -2LL;
  v39 = a3;
  v44 = (const WCHAR *)a1;
  v46[1] = a2;
  v45 = a3;
  v7 = 0;
  v43 = 0;
  v36 = 0LL;
  v32[0] = 0;
  ProcessIdForApplicationView = 0;
  v38 = 0;
  v9 = -1LL;
  Reserved1 = -1;
  pv = 0LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 248), &SRWLock);
  v10 = (__int64 **)(a1 + 256);
  WindowForView = (HWND)a4;
  v11 = (struct IApplicationView *)std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
                                     v10,
                                     (__int64 **)v41,
                                     (unsigned __int64 *)&WindowForView);
  if ( *(__int64 **)v11 == *v10 )
  {
    LODWORD(v41[0]) = 0;
    ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), LPVOID *))(*a4)[27])(
      a4,
      v41);
    if ( LODWORD(v41[0]) != 1 )
    {
      LOBYTE(v32[0]) = 1;
      *a2 = 0LL;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( pv )
        CoTaskMemFree(pv);
LABEL_52:
      ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v32);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v36);
      return (__int64)a2;
    }
  }
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a4, v11);
  if ( !WindowForView )
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
    HIBYTE(v32[0]) = 1;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)v10,
      (struct IApplicationView *)a4);
    *a2 = 0LL;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_52;
  }
  IsWinRTApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::IsWinRTApplicationView(
                             v12,
                             (int (__fastcall ***)(struct IApplicationView *, GUID *, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener **))a4);
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::GetAppViewInfo(v10, &v50, (unsigned __int64)a4);
  if ( v51 && *(_DWORD *)&v50.Reserved.Reserved2[16] )
  {
    ProcessIdForApplicationView = *(_DWORD *)&v50.Reserved.Reserved2[16];
    v38 = *(_DWORD *)&v50.Reserved.Reserved2[16];
  }
  else if ( v39 != 1 )
  {
    ProcessIdForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetProcessIdForApplicationView(
                                    v13,
                                    WindowForView,
                                    (struct IApplicationView *)a4,
                                    IsWinRTApplicationView);
    v38 = ProcessIdForApplicationView;
    if ( ProcessIdForApplicationView )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        v41,
        (__int64)a4);
      std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
        (__int64 *)v10,
        (unsigned __int64)&v47,
        (__int64 *)v41);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v41);
      *(_DWORD *)(v47 + 80) = ProcessIdForApplicationView;
    }
  }
  if ( v51
    && LODWORD(v50.Reserved.Reserved1) != -1
    && (v14 = *(_QWORD *)&v50.Reserved.Reserved2[8], *(_QWORD *)(*(_QWORD *)&v50.Reserved.Reserved2[8] + 16LL)) )
  {
    Reserved1 = (int)v50.Reserved.Reserved1;
    if ( *(_QWORD *)(*(_QWORD *)&v50.Reserved.Reserved2[8] + 24LL) >= 8uLL )
      v14 = **(_QWORD **)&v50.Reserved.Reserved2[8];
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      v41,
      v14);
    v7 = 4;
    v43 = 4;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      &pv,
      v41);
    if ( v41[0] )
      CoTaskMemFree(v41[0]);
  }
  else
  {
    AppIdInfoForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
                                    v13,
                                    &v47,
                                    a4,
                                    ProcessIdForApplicationView);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      &pv,
      (_QWORD *)(AppIdInfoForApplicationView + 8));
    v16 = *(_DWORD *)AppIdInfoForApplicationView;
    Reserved1 = *(_DWORD *)AppIdInfoForApplicationView;
    if ( v48 )
    {
      CoTaskMemFree(v48);
      v16 = Reserved1;
    }
    if ( !pv || v16 == -1 )
    {
      HIBYTE(v32[0]) = 1;
      Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
        (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)v10,
        (struct IApplicationView *)a4);
      *a2 = 0LL;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_52;
    }
    v41[0] = pv;
    do
      ++v9;
    while ( *((_WORD *)pv + v9) );
    v41[1] = (LPVOID)v9;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::SetAppIdInfo(
      (__int64 *)v10,
      (__int64)a4,
      v16,
      (const void **)v41);
  }
  if ( v39 == 1 )
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)v10,
      (struct IApplicationView *)a4);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  GetSystemTimeAsFileTime((LPFILETIME)&SRWLock);
  v17 = (RTL_SRWLOCK *)((unsigned int)SRWLock + ((unsigned __int64)SRWLock >> 32 << 32));
  SRWLock = v17;
  v46[0] = WindowForView;
  v42 = 0;
  v18 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))(*a4)[43])(
          a4,
          &v42);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      296LL,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v18);
LABEL_54:
    wil::details::in1diag3::Throw_Hr(
      v26,
      307LL,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
    return Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor_0(
             v30,
             v29,
             v31);
  }
  v19 = *((_QWORD *)v44 + 34);
  WindowForView = *(HWND *)(*(_QWORD *)v19 + 48LL);
  v20 = v42 != 0;
  if ( pv )
  {
    v44 = (const WCHAR *)pv;
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v50, &v44);
    v43 = v7 | 2;
    v22 = v21[1].Reserved.Reserved1;
  }
  else
  {
    v22 = 0LL;
  }
  v23 = v36;
  v36 = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = ((__int64 (__fastcall *)(__int64, _QWORD, RTL_SRWLOCK *, _QWORD, PVOID, int, bool, bool, unsigned int, __int64 *))WindowForView)(
          v19,
          v39,
          v17,
          v46[0],
          v22,
          Reserved1,
          v20,
          IsWinRTApplicationView,
          v38,
          &v36);
  v26 = retaddr;
  if ( v24 < 0 )
    goto LABEL_54;
  v44 = SQM::CensorAppID((LPCWSTR)pv, v25);
  TaskFlowDataEngineTelemetry::AppExecutionDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::AppViewExecutionState &,__int64 &,unsigned __int64 &,unsigned short const *>(
    &v45,
    (__int64 *)&SRWLock,
    (__int64)v46,
    &v44);
  LOBYTE(v32[0]) = 1;
  if ( pv )
    CoTaskMemFree(pv);
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v32);
  v27 = v36;
  v36 = 0LL;
  *a2 = v27;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v36);
  return (__int64)a2;
}
