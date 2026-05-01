/*
 * XREFs of ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180225F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18001FF28 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_e66174c2dba3ba9c22beb5f00ffeac5f___ @ 0x180090354 (Microsoft--WRL--Callback_IAsyncCallback__lambda_e66174c2dba3ba9c22beb5f00ffeac5f___.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x18009095C (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--__lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     wil::details::ScopeExitFn__lambda_6ca6ae9cb41a48f8b64f2a45454f98da___::_ScopeExitFn__lambda_6ca6ae9cb41a48f8b64f2a45454f98da___ @ 0x1800909D4 (wil--details--ScopeExitFn__lambda_6ca6ae9cb41a48f8b64f2a45454f98da___--_ScopeExitFn__lambda_6ca6.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18022C330 (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewSwitchRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *a2)
{
  const char *v2; // rbx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  bool v8; // si
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v25; // [rsp+38h] [rbp-50h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h] BYREF
  __int64 v28[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v29; // [rsp+60h] [rbp-28h] BYREF
  __int64 v30[4]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v32; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+20h] BYREF

  v28[1] = -2LL;
  v24 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 *))a2)(
         a2,
         &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
         &v24);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1078LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_13;
  }
  v2 = "pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp";
  v28[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 80LL))(v24, v28);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(v7, 1081LL, (__int64)v2, (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  Microsoft::WRL::WeakRef::WeakRef((__int64 *)&v29, &v24);
  Microsoft::WRL::WeakRef::WeakRef(v30, v28);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_e66174c2dba3ba9c22beb5f00ffeac5f___(&v27, (__int64 *)&v29);
  lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_((__int64 *)&v29);
  v29 = &v27;
  v8 = 1;
  LOBYTE(v30[0]) = 1;
  v26 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v26);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(v10, 1099LL, (__int64)v2, (const char *)(unsigned int)v9);
    goto LABEL_15;
  }
  v25 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)v24 + 48LL))(
          v24,
          &v25);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(v12, 1102LL, (__int64)v2, (const char *)(unsigned int)v11);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(v13, 1104LL, (__int64)v2, (const char *)0x8000FFFFLL);
    goto LABEL_17;
  }
  if ( !IsComponentAppViewAndGetKindAndModel(v26, 0LL, 0LL) )
    v8 = IsComponentAppViewAndGetKindAndModel(v25, 0LL, 0LL) != 0;
  v13 = retaddr;
  if ( v8 )
    goto LABEL_16;
  v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v26 + 48LL))(
          v26,
          &v34);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(v15, 1107LL, (__int64)v2, (const char *)(unsigned int)v14);
    goto LABEL_18;
  }
  v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v25 + 48LL))(
          v25,
          &v33);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(v17, 1110LL, (__int64)v2, (const char *)(unsigned int)v16);
    goto LABEL_19;
  }
  v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
          a2,
          &v32);
  v19 = retaddr;
  if ( v18 >= 0 )
  {
    WindowEventDispatcher::SwitchAsync((char *)this - 16, v34, v33, v32, v27);
    LOBYTE(v30[0]) = 0;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
    wil::details::ScopeExitFn__lambda_6ca6ae9cb41a48f8b64f2a45454f98da___::_ScopeExitFn__lambda_6ca6ae9cb41a48f8b64f2a45454f98da___((__int64)&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v28);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
    return 0LL;
  }
LABEL_19:
  wil::details::in1diag3::Throw_Hr(v19, 1113LL, (__int64)v2, (const char *)(unsigned int)v18);
  __debugbreak();
  return WindowEventDispatcher::AppViewSwitchRequested_::_1_::dtor_0(v22, v21, v23);
}
