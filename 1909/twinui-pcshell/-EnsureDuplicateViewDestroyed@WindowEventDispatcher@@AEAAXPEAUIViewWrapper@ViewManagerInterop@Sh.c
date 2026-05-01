/*
 * XREFs of ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1800A7CE8
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001F810 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180019E70 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180042D24 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18007CCEC (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??0AgileGitPtr@@QEAA@AEBV0@@Z @ 0x18008068C (--0AgileGitPtr@@QEAA@AEBV0@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A7728 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1802A1610 (-_Destroy@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WindowEventDispatcher::EnsureDuplicateViewDestroyed(
        RTL_SRWLOCK *a1,
        __int64 a2,
        const struct AgileGitPtr *a3)
{
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  char *v11; // rdi
  __int64 *Ptr; // r14
  __int64 *v13; // r12
  char *v14; // rsi
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rdi
  int v19; // eax
  HSTRING v20; // r8
  __int64 v21; // rcx
  char *i; // r14
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v23; // rbx
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  RTL_SRWLOCK *v28[2]; // [rsp+48h] [rbp-28h] BYREF
  char *v29; // [rsp+58h] [rbp-18h] BYREF
  __int128 v30; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  HSTRING string; // [rsp+B8h] [rbp+48h] BYREF
  const struct AgileGitPtr *v33; // [rsp+C0h] [rbp+50h]
  HSTRING v34; // [rsp+C8h] [rbp+58h] BYREF

  v33 = a3;
  v28[1] = (RTL_SRWLOCK *)-2LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 632LL))(a2, &v27);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v7,
      2871LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v10,
      2874LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v34 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  v34 = 0LL;
  v9 = v8(a2, &v34);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_21;
  v11 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 57, v28);
  Ptr = (__int64 *)a1[44].Ptr;
  v13 = (__int64 *)a1[45].Ptr;
  v14 = (char *)v30;
  if ( Ptr == v13 )
    goto LABEL_13;
  do
  {
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
      Ptr,
      (__int64)&v25);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 632LL))(v25, &v26);
    v16 = retaddr;
    if ( v15 < 0 )
      goto LABEL_19;
    string = 0LL;
    v17 = v25;
    v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v19 = v18(v17, &string);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2887LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v19);
LABEL_19:
      wil::details::in1diag3::Throw_Hr(
        v16,
        2884LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_20;
    }
    if ( v27 == v26
      && !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          (Microsoft::WRL::Wrappers::Details *)v34,
                          string,
                          v20) )
    {
      if ( *((char **)&v30 + 1) == v14 )
      {
        std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
          &v29,
          v14,
          Ptr);
        v14 = (char *)v30;
      }
      else
      {
        Microsoft::WRL::WeakRef::WeakRef((__int64 *)v14, Ptr);
        v14 += 8;
        *(_QWORD *)&v30 = v14;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v25);
    ++Ptr;
  }
  while ( Ptr != v13 );
  v11 = v29;
LABEL_13:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v28);
  for ( i = v11; i != v14; i += 8 )
  {
    v23 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                                                                                  i,
                                                                                  (__int64)v28);
    AgileGitPtr::AgileGitPtr((AgileGitPtr *)&string, a3);
    WindowEventDispatcher::RaiseViewEventWithPropertySet((__int64)a1, *v23, 4);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v28);
  }
  if ( v11 )
  {
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Destroy(v21, v11, v14);
    std::_Deallocate<16,0>(
      v29,
      (const struct std::nothrow_t *)((*((_QWORD *)&v30 + 1) - (_QWORD)v29) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  WindowsDeleteString(v34);
  v34 = 0LL;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a3);
}
