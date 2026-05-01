/*
 * XREFs of ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18000C750
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18000BDE0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18000C4BC (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB40 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18000CB60 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000DE20 (-GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundati.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x18000E30C (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell.c)
 *     ??$WindowEventDispatcher_TryShowAsStandaloneAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x18000E788 (--$WindowEventDispatcher_TryShowAsStandaloneAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180039014 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180044D90 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009A6C8 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 WindowEventDispatcher::TryShowAsStandaloneAsync(RTL_SRWLOCK *a1, unsigned int a2, unsigned int a3, int a4, ...)
{
  struct Windows::Foundation::Collections::IPropertySet **CachedView; // rax
  struct Windows::Foundation::Collections::IPropertySet *v6; // rbx
  void **v7; // rax
  void *v8; // rdi
  __int64 v9; // rcx
  _QWORD *SharedListener; // rax
  __int64 v11; // rax
  struct Windows::Foundation::Collections::IPropertySet *v12; // rax
  int PendingActivationData; // ecx
  int v14; // eax
  std::_Ref_count_base *v15; // rbx
  int v16; // eax
  struct IInspectable *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v21; // [rsp+28h] [rbp-91h]
  int v22; // [rsp+28h] [rbp-91h]
  void *v23; // [rsp+58h] [rbp-61h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+60h] [rbp-59h] BYREF
  __int64 v25; // [rsp+68h] [rbp-51h] BYREF
  __int64 v26; // [rsp+70h] [rbp-49h] BYREF
  void *v27; // [rsp+78h] [rbp-41h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v28; // [rsp+80h] [rbp-39h] BYREF
  __int64 v29; // [rsp+88h] [rbp-31h] BYREF
  __int64 v30; // [rsp+90h] [rbp-29h] BYREF
  std::_Ref_count_base *v31; // [rsp+98h] [rbp-21h]
  __int64 v32; // [rsp+A0h] [rbp-19h]
  __int64 v33; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-9h] BYREF
  std::_Ref_count_base *v35[2]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  struct IInspectable *v38; // [rsp+108h] [rbp+4Fh] BYREF
  unsigned int v39; // [rsp+110h] [rbp+57h] BYREF
  unsigned int v40; // [rsp+118h] [rbp+5Fh] BYREF
  int v41; // [rsp+120h] [rbp+67h]
  __int64 v42; // [rsp+128h] [rbp+6Fh] BYREF
  va_list va; // [rsp+128h] [rbp+6Fh]
  unsigned __int64 v44; // [rsp+130h] [rbp+77h] BYREF
  va_list va1; // [rsp+130h] [rbp+77h]
  va_list va2; // [rsp+138h] [rbp+7Fh] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v42 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v44 = va_arg(va2, _QWORD);
  v41 = a4;
  v40 = a3;
  v39 = a2;
  v36 = -2LL;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsStandaloneAsync<unsigned int &,unsigned int &>(
    &v39,
    &v40);
  v28 = 0LL;
  v27 = 0LL;
  *(_OWORD *)v35 = 0LL;
  AcquireSRWLockShared(a1 + 57);
  v32 = (__int64)&a1[57];
  CachedView = (struct Windows::Foundation::Collections::IPropertySet **)WindowEventDispatcher::GetCachedView(
                                                                           a1,
                                                                           &v23,
                                                                           v39);
  v6 = *CachedView;
  *CachedView = 0LL;
  v28 = v6;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v23);
  if ( !v6 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9A3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v21);
    __debugbreak();
  }
  v7 = (void **)WindowEventDispatcher::GetCachedView(a1, &v23, v40);
  v8 = *v7;
  *v7 = 0LL;
  v27 = v8;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v23);
  if ( !v8 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9A5,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v21);
    __debugbreak();
  }
  v23 = v8;
  (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
  v24 = v6;
  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 8LL))(v6);
  SharedListener = WindowEventDispatcher::GetSharedListener(v9, &v30, &v24, &v23);
  std::shared_ptr<ViewEventRegistration>::operator=(v35, SharedListener);
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  if ( a1 != (RTL_SRWLOCK *)-456LL )
    ReleaseSRWLockShared(a1 + 57);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v28,
    &v26);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v27,
    &v29);
  v25 = 0LL;
  v11 = *(_QWORD *)v6;
  v25 = 0LL;
  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, __int64 *))(v11 + 400))(v6, &v25);
  v12 = 0LL;
  v24 = 0LL;
  if ( v44 )
  {
    v24 = 0LL;
    PendingActivationData = WindowEventDispatcher::GetPendingActivationData((WindowEventDispatcher *)&a1[3], v44, &v24);
    v12 = v24;
    if ( PendingActivationData < 0 || !v24 )
      v44 = 0LL;
  }
  v33 = v25;
  v34 = (__int64)v12;
  v30 = v29;
  v32 = v26;
  v23 = 0LL;
  v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *>(
          &v23,
          (__int64)va,
          (__int64)va1,
          (__int64)va2,
          (__int64)&v34,
          (__int64)&v33);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9C3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14,
      v22);
  }
  else
  {
    v38 = 0LL;
    v15 = v35[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
    if ( *((_QWORD *)v15 + 3) )
    {
      v16 = Microsoft::WRL::WeakRef::InternalResolve(
              (std::_Ref_count_base *)((char *)v15 + 24),
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v38);
      v17 = v38;
      goto LABEL_13;
    }
  }
  v17 = 0LL;
  v38 = 0LL;
  v16 = -2147024809;
LABEL_13:
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9C7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v22);
    __debugbreak();
  }
  v18 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, void *))v17->lpVtbl->GetIids)(v17, v26, v23);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9C8,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v18,
      v22);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v24);
    v19 = v25;
    if ( !v25 )
      goto LABEL_16;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_16:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v29);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v26);
  if ( v35[1] )
    std::_Ref_count_base::_Decref(v35[1]);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v27);
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v28);
}
