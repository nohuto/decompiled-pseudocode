/*
 * XREFs of ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180019BBC
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006F7F0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18001A034 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18001B2A0 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18001C430 (-GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundati.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18001C5EC (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell.c)
 *     ??$WindowEventDispatcher_TryShowAsStandaloneAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x18001CA68 (--$WindowEventDispatcher_TryShowAsStandaloneAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180025ED4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009090C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 WindowEventDispatcher::TryShowAsStandaloneAsync(RTL_SRWLOCK *a1, unsigned int a2, unsigned int a3, int a4, ...)
{
  struct Windows::Foundation::Collections::IPropertySet **CachedView; // rax
  struct Windows::Foundation::Collections::IPropertySet *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 SharedListener; // rax
  struct Windows::Foundation::Collections::IPropertySet *v11; // rax
  int PendingActivationData; // ecx
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  int v18; // [rsp+28h] [rbp-71h]
  int v19; // [rsp+28h] [rbp-71h]
  __int64 v20; // [rsp+48h] [rbp-51h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v21; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+58h] [rbp-41h] BYREF
  __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+68h] [rbp-31h] BYREF
  __int64 v25; // [rsp+70h] [rbp-29h] BYREF
  __int64 v26; // [rsp+78h] [rbp-21h] BYREF
  std::_Ref_count_base *v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+90h] [rbp-9h] BYREF
  std::_Ref_count_base *v30[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  void *v33; // [rsp+E8h] [rbp+4Fh] BYREF
  unsigned int v34; // [rsp+F0h] [rbp+57h] BYREF
  unsigned int v35; // [rsp+F8h] [rbp+5Fh] BYREF
  int v36; // [rsp+100h] [rbp+67h] BYREF
  __int64 v37; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va; // [rsp+108h] [rbp+6Fh]
  unsigned __int64 v39; // [rsp+110h] [rbp+77h] BYREF
  va_list va1; // [rsp+110h] [rbp+77h]
  va_list va2; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v37 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  v36 = a4;
  v35 = a3;
  v34 = a2;
  v31 = -2LL;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsStandaloneAsync<unsigned int &,unsigned int &>(
    &v34,
    &v35);
  v24 = 0LL;
  v23 = 0LL;
  *(_OWORD *)v30 = 0LL;
  AcquireSRWLockShared(a1 + 58);
  v28 = (__int64)&a1[58];
  CachedView = (struct Windows::Foundation::Collections::IPropertySet **)WindowEventDispatcher::GetCachedView(
                                                                           a1,
                                                                           &v20,
                                                                           v34);
  v6 = *CachedView;
  *CachedView = 0LL;
  v24 = v6;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v20);
  if ( !v6 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x90B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v18);
    __debugbreak();
  }
  v7 = (__int64 *)WindowEventDispatcher::GetCachedView(a1, &v20, v35);
  v8 = *v7;
  *v7 = 0LL;
  v23 = v8;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v20);
  if ( !v8 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x90D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v18);
    __debugbreak();
  }
  v20 = v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v21 = v6;
  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 8LL))(v6);
  SharedListener = WindowEventDispatcher::GetSharedListener(v9, &v26, &v21, &v20);
  std::shared_ptr<ViewEventRegistration>::operator=(v30, SharedListener);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  if ( a1 != (RTL_SRWLOCK *)-464LL )
    ReleaseSRWLockShared(a1 + 58);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v24,
    &v22);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v23,
    &v25);
  v11 = 0LL;
  v21 = 0LL;
  if ( v39 )
  {
    v21 = 0LL;
    PendingActivationData = WindowEventDispatcher::GetPendingActivationData((WindowEventDispatcher *)&a1[3], v39, &v21);
    v11 = v21;
    if ( PendingActivationData < 0 || !v21 )
      v39 = 0LL;
  }
  v29 = v11;
  v26 = v25;
  v28 = v22;
  v20 = 0LL;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *>(
          (unsigned int)&v20,
          (unsigned int)&v28,
          (unsigned int)&v26,
          (unsigned int)&v36,
          (__int64)va,
          (__int64)va1,
          (__int64)va2,
          (__int64)&v29);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x927,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v13,
      v19);
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x92B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14,
      v19);
    __debugbreak();
  }
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v14 = AgileGitPtr::CopyLocal(
          (std::_Ref_count_base *)((char *)v30[0] + 24),
          &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e,
          &v33);
  v15 = retaddr;
  if ( v14 < 0 )
    goto LABEL_20;
  v16 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v33 + 24LL))(v33, v22, v20);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x92C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v19);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v25);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
  if ( v30[1] )
    std::_Ref_count_base::_Decref(v30[1]);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v23);
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v24);
}
