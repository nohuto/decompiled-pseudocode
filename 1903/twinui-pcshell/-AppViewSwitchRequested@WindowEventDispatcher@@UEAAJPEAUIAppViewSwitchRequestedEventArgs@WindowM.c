/*
 * XREFs of ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027BB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1800617C4 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800823C0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_c160d1eaa9755f5f5f3ecb40f4c92497___ @ 0x180099EB8 (Microsoft--WRL--Callback_IAsyncCallback__lambda_c160d1eaa9755f5f5f3ecb40f4c92497___.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x18009A748 (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--__lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     wil::details::ScopeExitFn__lambda_2d5662754519bf37861d2abe16087a7d___::_ScopeExitFn__lambda_2d5662754519bf37861d2abe16087a7d___ @ 0x18009A7C0 (wil--details--ScopeExitFn__lambda_2d5662754519bf37861d2abe16087a7d___--_ScopeExitFn__lambda_2d56.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x180281078 (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewSwitchRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *a2)
{
  const char *v2; // rbx
  __int64 (__fastcall **v5)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 **); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  bool v10; // si
  __int64 (__fastcall **v11)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 **); // rax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v29; // [rsp+38h] [rbp-50h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v30; // [rsp+40h] [rbp-48h] BYREF
  __int64 v31; // [rsp+48h] [rbp-40h] BYREF
  __int64 v32[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v33; // [rsp+60h] [rbp-28h] BYREF
  __int64 v34[4]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v36; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp+20h] BYREF

  v32[1] = -2LL;
  v5 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 **))a2;
  v29 = 0LL;
  v6 = (*v5)(a2, &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b, &v29);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1126LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  v2 = "pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp";
  v31 = 0LL;
  v7 = *v29;
  v31 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 80))(v29, &v31);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(v9, 1129LL, (__int64)v2, (const char *)(unsigned int)v8);
    goto LABEL_14;
  }
  Microsoft::WRL::WeakRef::WeakRef((__int64 *)&v33, (__int64 *)&v29);
  Microsoft::WRL::WeakRef::WeakRef(v34, &v31);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_c160d1eaa9755f5f5f3ecb40f4c92497___(v32, (__int64 *)&v33);
  lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_((__int64 *)&v33);
  v33 = v32;
  v10 = 1;
  LOBYTE(v34[0]) = 1;
  v11 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 **))a2;
  v30 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))v11[6])(
          a2,
          &v30);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(v13, 1147LL, (__int64)v2, (const char *)(unsigned int)v12);
    goto LABEL_15;
  }
  v28 = 0LL;
  v14 = *v29;
  v28 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v14 + 48))(
          v29,
          &v28);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(v16, 1150LL, (__int64)v2, (const char *)(unsigned int)v15);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(v17, 1152LL, (__int64)v2, (const char *)0x8000FFFFLL);
    goto LABEL_17;
  }
  if ( !IsComponentAppViewAndGetKindAndModel(v30, 0LL, 0LL) )
    v10 = IsComponentAppViewAndGetKindAndModel(v28, 0LL, 0LL) != 0;
  v17 = retaddr;
  if ( v10 )
    goto LABEL_16;
  v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v30 + 48LL))(
          v30,
          &v38);
  v19 = retaddr;
  if ( v18 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(v19, 1155LL, (__int64)v2, (const char *)(unsigned int)v18);
    goto LABEL_18;
  }
  v20 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v28 + 48LL))(
          v28,
          &v37);
  v21 = retaddr;
  if ( v20 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(v21, 1158LL, (__int64)v2, (const char *)(unsigned int)v20);
    goto LABEL_19;
  }
  v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
          a2,
          &v36);
  v23 = retaddr;
  if ( v22 >= 0 )
  {
    WindowEventDispatcher::SwitchAsync((char *)this - 16, v38, v37, v36, v32[0]);
    LOBYTE(v34[0]) = 0;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v28);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
    wil::details::ScopeExitFn__lambda_2d5662754519bf37861d2abe16087a7d___::_ScopeExitFn__lambda_2d5662754519bf37861d2abe16087a7d___((__int64)&v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v31);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v29);
    return 0LL;
  }
LABEL_19:
  wil::details::in1diag3::Throw_Hr(v23, 1161LL, (__int64)v2, (const char *)(unsigned int)v22);
  __debugbreak();
  return WindowEventDispatcher::AppViewSwitchRequested_::_1_::dtor_0(v26, v25, v27);
}
