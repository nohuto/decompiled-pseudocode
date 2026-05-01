/*
 * XREFs of ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x180090E98
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180025DAC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800281C0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18007A244 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??0AgileGitPtr@@QEAA@AEBV0@@Z @ 0x18007CEDC (--0AgileGitPtr@@QEAA@AEBV0@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009090C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18022D340 (-_Destroy@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowEventDispatcher::EnsureDuplicateViewDestroyed(
        RTL_SRWLOCK *a1,
        __int64 a2,
        const struct AgileGitPtr *a3)
{
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  char *v10; // r14
  __int64 *Ptr; // rsi
  __int64 *v12; // r12
  char *v13; // rdi
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  HSTRING v18; // r8
  __int64 v19; // rcx
  char *i; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v21; // rax
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  HSTRING *p_string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING *v25; // [rsp+40h] [rbp-30h] BYREF
  RTL_SRWLOCK *v26[2]; // [rsp+48h] [rbp-28h] BYREF
  char *v27; // [rsp+58h] [rbp-18h] BYREF
  __int128 v28; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  HSTRING string; // [rsp+B8h] [rbp+48h] BYREF
  const struct AgileGitPtr *v31; // [rsp+C0h] [rbp+50h]
  HSTRING v32; // [rsp+C8h] [rbp+58h] BYREF

  v31 = a3;
  v26[1] = (RTL_SRWLOCK *)-2LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING **))(*(_QWORD *)a2 + 632LL))(a2, &v25);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v7,
      2727LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v9,
      2730LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v32 = 0LL;
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL))(a2, &v32);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_21;
  v10 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 58, v26);
  Ptr = (__int64 *)a1[45].Ptr;
  v12 = (__int64 *)a1[46].Ptr;
  v13 = (char *)v28;
  if ( Ptr == v12 )
    goto LABEL_13;
  do
  {
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
      Ptr,
      (__int64)&v23);
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING **))(*(_QWORD *)v23 + 632LL))(v23, &p_string);
    v15 = retaddr;
    if ( v14 < 0 )
      goto LABEL_19;
    string = 0LL;
    v16 = v23;
    WindowsDeleteString(0LL);
    string = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 56LL))(v16, &string);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2743LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v17);
LABEL_19:
      wil::details::in1diag3::Throw_Hr(
        v15,
        2740LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_20;
    }
    if ( v25 == p_string
      && !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          (Microsoft::WRL::Wrappers::Details *)v32,
                          string,
                          v18) )
    {
      if ( *((char **)&v28 + 1) == v13 )
      {
        std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
          &v27,
          v13,
          Ptr);
        v13 = (char *)v28;
      }
      else
      {
        Microsoft::WRL::WeakRef::WeakRef((__int64 *)v13, Ptr);
        v13 += 8;
        *(_QWORD *)&v28 = v13;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
    ++Ptr;
  }
  while ( Ptr != v12 );
  v10 = v27;
LABEL_13:
  CAutoSRWSharedLock::~CAutoSRWSharedLock((CAutoSRWSharedLock *)v26);
  for ( i = v10; i != v13; i += 8 )
  {
    p_string = &string;
    AgileGitPtr::AgileGitPtr((AgileGitPtr *)&string, a3);
    v21 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                                                                                  i,
                                                                                  (__int64)v26);
    WindowEventDispatcher::RaiseViewEventWithPropertySet((__int64)a1, *v21, 4);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v26);
  }
  if ( v10 )
  {
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Destroy(v19, v10, v13);
    std::_Deallocate<16,0>(
      v27,
      (const struct std::nothrow_t *)((*((_QWORD *)&v28 + 1) - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  WindowsDeleteString(v32);
  v32 = 0LL;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a3);
}
