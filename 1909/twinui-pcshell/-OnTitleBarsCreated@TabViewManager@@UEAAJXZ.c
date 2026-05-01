/*
 * XREFs of ?OnTitleBarsCreated@TabViewManager@@UEAAJXZ @ 0x180254540
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180248658 (--0-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1TabViewManager_OnTitleBarsCreated@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18024A150 (--1TabViewManager_OnTitleBarsCreated@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@TabViewManager_OnTitleBarsCreated@TabViewManagerTraceLogging@@QEAAXXZ @ 0x180257E28 (-StartActivity@TabViewManager_OnTitleBarsCreated@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180258844 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProvid.c)
 */

__int64 __fastcall TabViewManager::OnTitleBarsCreated(TabViewManager *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7[2]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v7[1] = -2LL;
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"TabViewManager_OnTitleBarsCreated");
  v8[0] = &TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated::`vftable';
  TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated::StartActivity((TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated *)v8);
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 150);
  if ( v2 )
  {
    v3 = (**v2)(v2, &GUID_0cf8429a_8037_4ebd_83fd_6471d78ca4eb, v7);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5421LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7[0] + 32LL))(v7[0]);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F3,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v4);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v7);
      TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated::~TabViewManager_OnTitleBarsCreated((TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated *)v8);
      return v5;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v7);
  }
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
  TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated::~TabViewManager_OnTitleBarsCreated((TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated *)v8);
  return 0LL;
}
