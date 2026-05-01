/*
 * XREFs of ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180019BBC (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18001FF28 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18006FB14 (--1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18006FB40 (-StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$$QEAH@Z @ 0x18006FE34 (--$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_4e57832e55059e8879dd48ea75bdd53c___ @ 0x18009024C (Microsoft--WRL--Callback_IAsyncCallback__lambda_4e57832e55059e8879dd48ea75bdd53c___.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x18009095C (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--__lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     wil::details::ScopeExitFn__lambda_b47723cf4161eb032e3dd80dc32e6d2e___::_ScopeExitFn__lambda_b47723cf4161eb032e3dd80dc32e6d2e___ @ 0x180090A74 (wil--details--ScopeExitFn__lambda_b47723cf4161eb032e3dd80dc32e6d2e___--_ScopeExitFn__lambda_b477.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewActivationShowRequested(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v16; // [rsp+20h] [rbp-1D8h]
  int v17; // [rsp+20h] [rbp-1D8h]
  unsigned int v18; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-1B0h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-1A8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v21; // [rsp+58h] [rbp-1A0h] BYREF
  int v22; // [rsp+60h] [rbp-198h] BYREF
  __int64 v23; // [rsp+68h] [rbp-190h] BYREF
  __int64 v24; // [rsp+70h] [rbp-188h] BYREF
  __int64 *v25; // [rsp+78h] [rbp-180h] BYREF
  char v26[8]; // [rsp+80h] [rbp-178h] BYREF
  _QWORD v27[3]; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v28[40]; // [rsp+A0h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v27[1] = -2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v28);
  v28[0] = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::StartActivity((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)v28);
  v19 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 *))a2)(
         a2,
         &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
         &v19);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x382,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v4,
      v16);
    goto LABEL_11;
  }
  v21 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)v19 + 48LL))(
         v19,
         &v21);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x385,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v16);
    goto LABEL_12;
  }
  if ( !IsComponentAppViewAndGetKindAndModel(v21, 0LL, 0LL) )
  {
    v24 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 80LL))(v19, &v24);
    v8 = retaddr;
    if ( v7 >= 0 )
    {
      Microsoft::WRL::WeakRef::WeakRef(&v25, &v19);
      Microsoft::WRL::WeakRef::WeakRef(v26, &v24);
      Microsoft::WRL::Callback_IAsyncCallback__lambda_4e57832e55059e8879dd48ea75bdd53c___(&v23, &v25);
      lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_(&v25);
      v25 = &v23;
      v26[0] = 1;
      v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v21 + 48LL))(
             v21,
             &v20);
      v10 = retaddr;
      if ( v9 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
                a2,
                &v22);
        v12 = retaddr;
        if ( v11 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 56LL))(v19, v27);
          v14 = retaddr;
          if ( v13 >= 0 )
          {
            v17 = v22;
            WindowEventDispatcher::TryShowAsStandaloneAsync(this - 2, v20, v20, v22, v17, v27[0], v23);
            v26[0] = 0;
            v18 = v20;
            ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewActivationShowRequested<int>(&v18);
            wil::details::ScopeExitFn__lambda_b47723cf4161eb032e3dd80dc32e6d2e___::_ScopeExitFn__lambda_b47723cf4161eb032e3dd80dc32e6d2e___(&v25);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
            goto LABEL_9;
          }
LABEL_15:
          wil::details::in1diag3::Throw_Hr(
            v14,
            (void *)0x3A3,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v13,
            v16);
          __debugbreak();
          JUMPOUT(0x18006FB0DLL);
        }
LABEL_14:
        wil::details::in1diag3::Throw_Hr(
          v12,
          (void *)0x39F,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v16);
        goto LABEL_15;
      }
LABEL_13:
      wil::details::in1diag3::Throw_Hr(
        v10,
        (void *)0x39C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v16);
      goto LABEL_14;
    }
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x38A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v16);
    goto LABEL_13;
  }
LABEL_9:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v28, 0);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::~WindowEventDispatcher_AppViewActivationRequested((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)v28);
  return 0LL;
}
