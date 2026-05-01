/*
 * XREFs of ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180225AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18001FF28 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_aa0162f0309926d71c900a768faf6f54___ @ 0x1800902D0 (Microsoft--WRL--Callback_IAsyncCallback__lambda_aa0162f0309926d71c900a768faf6f54___.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x18009095C (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--__lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     wil::details::ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___::_ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___ @ 0x180090984 (wil--details--ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___--_ScopeExitFn__lambda_58f3.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x180222B48 (--$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@1USize@Foundation@5@W4ViewGroupingPreference@WindowManagement@ApplicationModel@Internal@5@PEAUIAsyncCallback@@@Z @ 0x18022C6BC (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewShowRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *a2)
{
  const char *v2; // rbx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  BOOL v24; // esi
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // [rsp+50h] [rbp-78h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v32; // [rsp+58h] [rbp-70h] BYREF
  int v33; // [rsp+60h] [rbp-68h] BYREF
  int v34; // [rsp+64h] [rbp-64h] BYREF
  int v35; // [rsp+68h] [rbp-60h] BYREF
  __int64 v36; // [rsp+70h] [rbp-58h] BYREF
  __int64 v37; // [rsp+78h] [rbp-50h] BYREF
  __int64 v38; // [rsp+80h] [rbp-48h] BYREF
  __int64 *v39; // [rsp+88h] [rbp-40h] BYREF
  __int64 v40; // [rsp+90h] [rbp-38h] BYREF
  _QWORD v41[6]; // [rsp+98h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned int v43; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v44; // [rsp+E0h] [rbp+18h] BYREF
  int v45; // [rsp+E8h] [rbp+20h] BYREF

  v41[1] = -2LL;
  v31 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 *))a2)(
         a2,
         &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
         &v31);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      992LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
  v2 = "pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp";
  v32 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)v31 + 48LL))(
         v31,
         &v32);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(v7, 995LL, (__int64)v2, (const char *)(unsigned int)v6);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(v9, 1000LL, (__int64)v2, (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  if ( IsComponentAppViewAndGetKindAndModel(v32, 0LL, 0LL) )
  {
LABEL_14:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v32);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v31);
    return 0LL;
  }
  v38 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 80LL))(v31, &v38);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_17;
  Microsoft::WRL::WeakRef::WeakRef((__int64 *)&v39, &v31);
  Microsoft::WRL::WeakRef::WeakRef(&v40, &v38);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_aa0162f0309926d71c900a768faf6f54___(&v37, (__int64 *)&v39);
  lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_((__int64 *)&v39);
  v39 = &v37;
  LOBYTE(v40) = 1;
  v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v32 + 48LL))(
          v32,
          &v44);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(v11, 1018LL, (__int64)v2, (const char *)(unsigned int)v10);
    goto LABEL_19;
  }
  v36 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))(*(_QWORD *)a2 + 64LL))(
          a2,
          &v36);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(v13, 1021LL, (__int64)v2, (const char *)(unsigned int)v12);
    goto LABEL_20;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 48LL))(v36, &v43);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(v15, 1023LL, (__int64)v2, (const char *)(unsigned int)v14);
    goto LABEL_21;
  }
  v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 80LL))(
          a2,
          &v35);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::Throw_Hr(v17, 1026LL, (__int64)v2, (const char *)(unsigned int)v16);
    goto LABEL_22;
  }
  v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 72LL))(
          a2,
          &v34);
  v19 = retaddr;
  if ( v18 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(v19, 1030LL, (__int64)v2, (const char *)(unsigned int)v18);
    goto LABEL_23;
  }
  v20 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v45);
  v21 = retaddr;
  if ( v20 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(v21, 1034LL, (__int64)v2, (const char *)(unsigned int)v20);
    goto LABEL_24;
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewShowRequested<unsigned int &,unsigned int &>(
    (__int64)&v44,
    (__int64)&v43);
  v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, _QWORD *))(*(_QWORD *)a2 + 56LL))(
          a2,
          v41);
  v23 = retaddr;
  if ( v22 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(v23, 1039LL, (__int64)v2, (const char *)(unsigned int)v22);
    goto LABEL_25;
  }
  v24 = v45 == 2;
  v25 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 88LL))(
          a2,
          &v33);
  v26 = retaddr;
  if ( v25 >= 0 )
  {
    WindowEventDispatcher::TryShowAsViewModeAsync((char *)this - 16, v44, v43, v24, v35, v34, v41[0], v33, v37);
    LOBYTE(v40) = 0;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v36);
    wil::details::ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___::_ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___((__int64)&v39);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v38);
    goto LABEL_14;
  }
LABEL_25:
  wil::details::in1diag3::Throw_Hr(v26, 1053LL, (__int64)v2, (const char *)(unsigned int)v25);
  __debugbreak();
  return WindowEventDispatcher::AppViewShowRequested_::_1_::dtor_0(v29, v28, v30);
}
