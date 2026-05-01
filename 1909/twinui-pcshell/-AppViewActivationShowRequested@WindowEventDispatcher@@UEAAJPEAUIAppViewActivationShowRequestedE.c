/*
 * XREFs of ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180018180
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180017EEC (-StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@.c)
 *     ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180018084 (--1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180018760 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 *     ??$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$$QEAH@Z @ 0x18001AC84 (--$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1800637A4 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_dc9a7038d0731c485394404b6deda4ab___ @ 0x1800A6FA8 (Microsoft--WRL--Callback_IAsyncCallback__lambda_dc9a7038d0731c485394404b6deda4ab___.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x1800A77A8 (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--__lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     wil::details::ScopeExitFn__lambda_8017bd2af829e40fe5281f48c414d78c___::_ScopeExitFn__lambda_8017bd2af829e40fe5281f48c414d78c___ @ 0x1800A7820 (wil--details--ScopeExitFn__lambda_8017bd2af829e40fe5281f48c414d78c___--_ScopeExitFn__lambda_8017.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewActivationShowRequested(
        WindowEventDispatcher *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 **))
{
  __int64 (__fastcall **v4)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 **); // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v19; // [rsp+20h] [rbp-1D8h]
  unsigned int v20; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 *v21; // [rsp+48h] [rbp-1B0h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-1A8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v23; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-198h] BYREF
  int v25; // [rsp+68h] [rbp-190h] BYREF
  __int64 v26; // [rsp+70h] [rbp-188h] BYREF
  __int64 *v27; // [rsp+78h] [rbp-180h] BYREF
  char v28[8]; // [rsp+80h] [rbp-178h] BYREF
  _QWORD v29[3]; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v30[40]; // [rsp+A0h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v29[1] = -2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"WindowEventDispatcher_AppViewActivationRequested");
  v30[0] = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::StartActivity((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)v30);
  v4 = *a2;
  v21 = 0LL;
  v5 = (*v4)(
         (struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *)a2,
         &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
         &v21);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x398,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v19);
    goto LABEL_11;
  }
  v23 = 0LL;
  v6 = *v21;
  v23 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v6 + 48))(
         v21,
         &v23);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x39B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v19);
    goto LABEL_12;
  }
  if ( !IsComponentAppViewAndGetKindAndModel(v23, 0LL, 0LL) )
  {
    v24 = 0LL;
    v9 = *v21;
    v24 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 80))(v21, &v24);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::WeakRef::WeakRef(&v27, &v21);
      Microsoft::WRL::WeakRef::WeakRef(v28, &v24);
      Microsoft::WRL::Callback_IAsyncCallback__lambda_dc9a7038d0731c485394404b6deda4ab___(&v26, &v27);
      lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_(&v27);
      v27 = &v26;
      v28[0] = 1;
      v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v23 + 48LL))(
              v23,
              &v22);
      v13 = retaddr;
      if ( v12 >= 0 )
      {
        v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 **), int *))(*a2)[6])(
                a2,
                &v25);
        v15 = retaddr;
        if ( v14 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*v21 + 56))(v21, v29);
          v17 = retaddr;
          if ( v16 >= 0 )
          {
            WindowEventDispatcher::TryShowAsStandaloneAsync((char *)this - 16, v22, v22);
            v28[0] = 0;
            v20 = v22;
            ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewActivationShowRequested<int>(&v20);
            wil::details::ScopeExitFn__lambda_8017bd2af829e40fe5281f48c414d78c___::_ScopeExitFn__lambda_8017bd2af829e40fe5281f48c414d78c___(&v27);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
            goto LABEL_9;
          }
LABEL_15:
          wil::details::in1diag3::Throw_Hr(
            v17,
            (void *)0x3B9,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v16,
            v19);
          __debugbreak();
          JUMPOUT(0x1800184A9LL);
        }
LABEL_14:
        wil::details::in1diag3::Throw_Hr(
          v15,
          (void *)0x3B5,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v14,
          v19);
        goto LABEL_15;
      }
LABEL_13:
      wil::details::in1diag3::Throw_Hr(
        v13,
        (void *)0x3B2,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v19);
      goto LABEL_14;
    }
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x3A0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v10,
      v19);
    goto LABEL_13;
  }
LABEL_9:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v30, 0LL);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::~WindowEventDispatcher_AppViewActivationRequested((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)v30);
  return 0LL;
}
