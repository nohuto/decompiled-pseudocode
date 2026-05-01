/*
 * XREFs of ?AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029A870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018B50 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x180018B70 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180021994 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1800637A4 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A7728 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18029E6E0 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowEventDispatcher::AppViewConsolidateRequested(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  int v6; // eax
  RTL_SRWLOCK *v7; // rdi
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  const char *v12; // r9
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  RTL_SRWLOCK *v17; // [rsp+38h] [rbp-40h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v18[2]; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v21; // [rsp+88h] [rbp+10h] BYREF
  char v22; // [rsp+90h] [rbp+18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v23; // [rsp+98h] [rbp+20h] BYREF

  v18[1] = (struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *)-2LL;
  v3 = *(_QWORD *)a2;
  v23 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 48);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1410LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)v23 + 48LL))(
           v23,
           &v21);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1413LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    v18[0] = 0LL;
    if ( !IsComponentAppViewAndGetKindAndModel(
            v23,
            (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)&v22,
            v18) )
    {
      v16 = 0LL;
      *(_OWORD *)v19 = 0LL;
      v7 = this + 55;
      AcquireSRWLockShared(this + 55);
      v17 = this + 55;
      v8 = this - 2;
      WindowEventDispatcher::GetCachedView((__int64)&this[-2], &v14, v21);
      v9 = v14;
      v14 = 0LL;
      v16 = v9;
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v14);
      if ( v9 )
      {
        v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 264LL))(v9, &v14);
        std::shared_ptr<ViewEventRegistration>::operator=(v19, v10);
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
      }
      if ( v7 )
        ReleaseSRWLockShared(v7);
      if ( v9 )
      {
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
          &v16,
          (__int64)&v17);
        v11 = *((_QWORD *)v19[0] + 3);
        v14 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        WindowEventDispatcher::RaiseViewEvent(v8, v17, 35LL, &v14);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
      }
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v16);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5A1,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v12);
  }
  return result;
}
