/*
 * XREFs of ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027B620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1800617C4 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800823C0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_ebbac0bc3a84ff014f406f40fcbc7a60___ @ 0x180099F3C (Microsoft--WRL--Callback_IAsyncCallback__lambda_ebbac0bc3a84ff014f406f40fcbc7a60___.c)
 *     ??$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009A678 (--$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x18009A748 (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--__lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     wil::details::ScopeExitFn__lambda_06598487eebb8bb26e49e1b7dbbbe0fd___::_ScopeExitFn__lambda_06598487eebb8bb26e49e1b7dbbbe0fd___ @ 0x18009A770 (wil--details--ScopeExitFn__lambda_06598487eebb8bb26e49e1b7dbbbe0fd___--_ScopeExitFn__lambda_0659.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132300 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     ??$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x180278360 (--$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x18028141C (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewShowRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *a2)
{
  const char *v2; // rbx
  __int64 (__fastcall **v5)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 **); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 (__fastcall **v20)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 **); // rax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  BOOL v33; // esi
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v40; // [rsp+50h] [rbp-88h] BYREF
  __int64 *v41; // [rsp+58h] [rbp-80h] BYREF
  __int64 v42; // [rsp+60h] [rbp-78h] BYREF
  int v43; // [rsp+68h] [rbp-70h] BYREF
  int v44; // [rsp+6Ch] [rbp-6Ch] BYREF
  int v45; // [rsp+70h] [rbp-68h] BYREF
  int v46; // [rsp+74h] [rbp-64h] BYREF
  __int64 v47; // [rsp+78h] [rbp-60h] BYREF
  __int64 v48; // [rsp+80h] [rbp-58h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v49; // [rsp+88h] [rbp-50h] BYREF
  __int64 *v50; // [rsp+90h] [rbp-48h] BYREF
  __int64 v51; // [rsp+98h] [rbp-40h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-38h] BYREF
  _BYTE v53[8]; // [rsp+A8h] [rbp-30h] BYREF
  _QWORD v54[5]; // [rsp+B0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v56; // [rsp+E8h] [rbp+10h] BYREF
  unsigned int v57; // [rsp+F0h] [rbp+18h] BYREF
  unsigned int v58; // [rsp+F8h] [rbp+20h] BYREF

  v54[1] = -2LL;
  v5 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 **))a2;
  v41 = 0LL;
  v6 = (*v5)(a2, &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b, &v41);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1029LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  v2 = "pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp";
  v40 = 0LL;
  v7 = *v41;
  v40 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v7 + 48))(
         v41,
         &v40);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(v9, 1032LL, (__int64)v2, (const char *)(unsigned int)v8);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(v14, 1043LL, (__int64)v2, (const char *)(unsigned int)v13);
    goto LABEL_19;
  }
  v49 = 0LL;
  if ( IsComponentAppViewAndGetKindAndModel(
         v40,
         (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)v53,
         &v49) )
  {
LABEL_15:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v49);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v40);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v41);
    return 0LL;
  }
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>(
    &v49,
    (__int64)&v52);
  v56 = 0;
  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(v11, v10, v12);
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 64LL))(v52, &v56);
  v14 = retaddr;
  if ( v13 < 0 )
    goto LABEL_18;
  v42 = 0LL;
  v15 = *v41;
  v42 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v15 + 80))(v41, &v42);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(v17, 1047LL, (__int64)v2, (const char *)(unsigned int)v16);
    goto LABEL_20;
  }
  Microsoft::WRL::WeakRef::WeakRef((__int64 *)&v50, (__int64 *)&v41);
  Microsoft::WRL::WeakRef::WeakRef(&v51, &v42);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_ebbac0bc3a84ff014f406f40fcbc7a60___(&v48, (__int64 *)&v50);
  lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_((__int64 *)&v50);
  v50 = &v48;
  LOBYTE(v51) = 1;
  v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v40 + 48LL))(
          v40,
          &v58);
  v19 = retaddr;
  if ( v18 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(v19, 1065LL, (__int64)v2, (const char *)(unsigned int)v18);
    goto LABEL_21;
  }
  v20 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 **))a2;
  v47 = 0LL;
  v21 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))v20[8])(
          a2,
          &v47);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::Throw_Hr(v22, 1068LL, (__int64)v2, (const char *)(unsigned int)v21);
    goto LABEL_22;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v47 + 48LL))(v47, &v57);
  v24 = retaddr;
  if ( v23 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(v24, 1070LL, (__int64)v2, (const char *)(unsigned int)v23);
    goto LABEL_23;
  }
  v25 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 80LL))(
          a2,
          &v46);
  v26 = retaddr;
  if ( v25 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(v26, 1073LL, (__int64)v2, (const char *)(unsigned int)v25);
    goto LABEL_24;
  }
  v27 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 72LL))(
          a2,
          &v45);
  v28 = retaddr;
  if ( v27 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(v28, 1077LL, (__int64)v2, (const char *)(unsigned int)v27);
    goto LABEL_25;
  }
  v29 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v43);
  v30 = retaddr;
  if ( v29 < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Throw_Hr(v30, 1081LL, (__int64)v2, (const char *)(unsigned int)v29);
    goto LABEL_26;
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewShowRequested<unsigned int &,unsigned int &>(
    (__int64)&v58,
    (__int64)&v57);
  v31 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, _QWORD *))(*(_QWORD *)a2 + 56LL))(
          a2,
          v54);
  v32 = retaddr;
  if ( v31 < 0 )
  {
LABEL_26:
    wil::details::in1diag3::Throw_Hr(v32, 1086LL, (__int64)v2, (const char *)(unsigned int)v31);
    goto LABEL_27;
  }
  v33 = v43 == 2;
  v34 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 88LL))(
          a2,
          &v44);
  v35 = retaddr;
  if ( v34 >= 0 )
  {
    WindowEventDispatcher::TryShowAsViewModeAsync((char *)this - 16, v58, v57, v33, v56, v46, v45, v54[0], v44, v48);
    LOBYTE(v51) = 0;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v47);
    wil::details::ScopeExitFn__lambda_06598487eebb8bb26e49e1b7dbbbe0fd___::_ScopeExitFn__lambda_06598487eebb8bb26e49e1b7dbbbe0fd___((__int64)&v50);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v42);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v52);
    goto LABEL_15;
  }
LABEL_27:
  wil::details::in1diag3::Throw_Hr(v35, 1100LL, (__int64)v2, (const char *)(unsigned int)v34);
  __debugbreak();
  return WindowEventDispatcher::AppViewShowRequested_::_1_::dtor_0(v38, v37, v39);
}
