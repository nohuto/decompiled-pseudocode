/*
 * XREFs of ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@1USize@Foundation@5@W4ViewGroupingPreference@WindowManagement@ApplicationModel@Internal@5@PEAUIAsyncCallback@@@Z @ 0x18022C6BC
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180225AF0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18001A034 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18001B2A0 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180025ED4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009090C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ViewSizePreference@ViewManagement@UI@7@3AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x18020F980 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x180222EC4 (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 */

// Hidden C++ exception states: #wind=8
__int64 WindowEventDispatcher::TryShowAsViewModeAsync(RTL_SRWLOCK *a1, int a2, int a3, unsigned int a4, ...)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 *CachedView; // rax
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 *SharedListener; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+58h] [rbp-51h] BYREF
  void *v17; // [rsp+60h] [rbp-49h] BYREF
  __int64 v18; // [rsp+68h] [rbp-41h] BYREF
  __int64 v19; // [rsp+70h] [rbp-39h] BYREF
  __int64 v20; // [rsp+78h] [rbp-31h] BYREF
  __int64 v21; // [rsp+80h] [rbp-29h] BYREF
  __int64 v22; // [rsp+88h] [rbp-21h] BYREF
  __int64 v23; // [rsp+90h] [rbp-19h] BYREF
  std::_Ref_count_base *v24; // [rsp+98h] [rbp-11h]
  std::_Ref_count_base *v25[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+37h]
  __int64 v28; // [rsp+E8h] [rbp+3Fh] BYREF
  int v29; // [rsp+F0h] [rbp+47h] BYREF
  int v30; // [rsp+F8h] [rbp+4Fh] BYREF
  unsigned int v31; // [rsp+100h] [rbp+57h] BYREF
  __int64 v32; // [rsp+108h] [rbp+5Fh] BYREF
  va_list va; // [rsp+108h] [rbp+5Fh]
  __int64 v34; // [rsp+110h] [rbp+67h] BYREF
  va_list va1; // [rsp+110h] [rbp+67h]
  __int64 v36; // [rsp+118h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+118h] [rbp+6Fh]
  __int64 v38; // [rsp+120h] [rbp+77h]
  va_list va3; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v32 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v34 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v36 = va_arg(va3, _QWORD);
  v38 = va_arg(va3, _QWORD);
  v31 = a4;
  v30 = a3;
  v29 = a2;
  v26 = -2LL;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
    (__int64)&v29,
    (__int64)&v30);
  v20 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v5 = a1 + 58;
  AcquireSRWLockShared(a1 + 58);
  v22 = (__int64)&a1[58];
  CachedView = WindowEventDispatcher::GetCachedView((__int64)a1, &v28, v29);
  v7 = *CachedView;
  *CachedView = 0LL;
  v20 = v7;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v28);
  if ( !v7 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2409LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v8 = WindowEventDispatcher::GetCachedView((__int64)a1, &v28, v30);
  v9 = *v8;
  *v8 = 0LL;
  v19 = v9;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v28);
  if ( !v9 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2411LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v28 = v7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v16 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  SharedListener = WindowEventDispatcher::GetSharedListener(v10, &v23, &v16, &v28);
  std::shared_ptr<ViewEventRegistration>::operator=(v25, SharedListener);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  if ( v5 )
    ReleaseSRWLockShared(v5);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v20,
    (__int64)&v18);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v19,
    (__int64)&v21);
  LODWORD(v28) = v38;
  v23 = v21;
  v22 = v18;
  v16 = 0LL;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,Windows::Foundation::Size &,enum Windows::UI::ViewManagement::ViewGrouping,IAsyncCallback * &>(
          &v16,
          &v22,
          &v23,
          &v31,
          (__int64 *)va,
          (__int64 *)va1,
          (__int64 *)va2,
          &v28,
          (__int64 *)va3);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2429LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v13 = AgileGitPtr::CopyLocal(
          (std::_Ref_count_base *)((char *)v25[0] + 24),
          &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e,
          &v17);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2432LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, v18, v16);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2433LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
  if ( v25[1] )
    std::_Ref_count_base::_Decref(v25[1]);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v19);
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v20);
}
