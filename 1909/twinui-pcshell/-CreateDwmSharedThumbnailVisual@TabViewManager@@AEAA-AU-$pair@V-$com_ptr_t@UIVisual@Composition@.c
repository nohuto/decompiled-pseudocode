/*
 * XREFs of ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x18024CA68
 * Callers:
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x180253F70 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E800 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIDCompositionDevice2@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UIDCompositionDevice2@@Uerr_exception_policy@wil@@@0@AEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x1800A6930 (--$com_query@UIDCompositionDevice2@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA-AV-$com_.c)
 *     ??$com_query@UIVisual@Composition@UI@Windows@@AEAV?$com_ptr_t@UIDCompositionVisual2@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIDCompositionVisual2@@Uerr_exception_policy@wil@@@0@@Z @ 0x1800A69D0 (--$com_query@UIVisual@Composition@UI@Windows@@AEAV-$com_ptr_t@UIDCompositionVisual2@@Uerr_except.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18013FB90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025FC04 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall TabViewManager::CreateDwmSharedThumbnailVisual(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        float *a6)
{
  struct IApplicationView *v7; // rdx
  const char *v8; // r9
  __int64 WindowForView; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  int v12; // eax
  __int64 *v13; // rax
  __int64 v14; // rcx
  HANDLE hObject; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v17; // [rsp+48h] [rbp-41h] BYREF
  __int128 v18; // [rsp+50h] [rbp-39h] BYREF
  ApplicationViewHelpers *v19; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+68h] [rbp-21h] BYREF
  int v21; // [rsp+78h] [rbp-11h] BYREF
  __int128 v22; // [rsp+7Ch] [rbp-Dh]
  __int128 v23; // [rsp+8Ch] [rbp+3h]
  char v24; // [rsp+9Ch] [rbp+13h]
  int v25; // [rsp+9Dh] [rbp+14h]
  int v26; // [rsp+A1h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  v20[1] = -2LL;
  *(_QWORD *)&v18 = a2;
  v20[0] = a3;
  TabViewManager::TryGetViewForTab(a1, &v19, a4);
  if ( !v19 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2799LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      v8);
    __debugbreak();
  }
  WindowForView = ApplicationViewHelpers::GetWindowForView(
                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
                    v7);
  v23 = 0LL;
  v24 = 0;
  v26 = 0;
  v21 = 9;
  v25 = 1;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = (int)*a6;
  HIDWORD(v18) = (int)a6[1];
  v22 = v18;
  v17 = 0LL;
  hObject = 0LL;
  v10 = (_QWORD *)wil::com_query<IDCompositionDevice2,Windows::UI::Composition::ICompositor * &>((__int64)&v18, v20);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v11 = v17;
  v17 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  v12 = DwmpCreateSharedThumbnailVisual(a5, WindowForView, 2LL, &v21, *v10, &v17, &hObject);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2811LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v12);
  if ( (_QWORD)v18 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 16LL))(v18);
  v13 = (__int64 *)wil::com_query<Windows::UI::Composition::IVisual,wil::com_ptr_t<IDCompositionVisual2,wil::err_exception_policy> &>(
                     (__int64)&v18,
                     &v17);
  v14 = *v13;
  *v13 = 0LL;
  *a2 = v14;
  a2[1] = hObject;
  hObject = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v17 + 16LL))(v17, *v17);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  return a2;
}
