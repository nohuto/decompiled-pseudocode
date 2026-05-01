/*
 * XREFs of ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x180229A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180019E50 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18022D454 (-clear@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::PerformDelayedInitialization(WindowEventDispatcher *this)
{
  WindowEventDispatcher *v1; // rbx
  char *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // r12
  __int64 v5; // r15
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // r15
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v9; // rcx
  int v10; // eax
  int v11; // eax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v17; // [rsp+68h] [rbp+10h] BYREF
  char *v18; // [rsp+70h] [rbp+18h]

  v1 = this;
  v2 = (char *)this + 256;
  v3 = (_QWORD *)*((_QWORD *)this + 32);
  v4 = (_QWORD *)*((_QWORD *)this + 33);
  try
  {
    while ( v3 != v4 )
    {
      v17 = 0LL;
      AcquireSRWLockExclusive((PSRWLOCK)v1 + 42);
      v18 = (char *)v1 + 336;
      v5 = *((_QWORD *)v1 + 23);
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 272LL))(*v3);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, v6, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          170LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v7);
      v8 = *v3;
      v9 = v17;
      v17 = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)v8 + 224LL))(
              v8,
              &v17);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          171LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v10);
      if ( v1 != (WindowEventDispatcher *)-336LL )
        ReleaseSRWLockExclusive((PSRWLOCK)v1 + 42);
      if ( v17 )
      {
        v11 = WindowEventDispatcher::AppViewRemoved((WindowEventDispatcher *)((char *)v1 - 112), v17);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            179LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v11);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
      ++v3;
    }
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::clear(v2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v12);
    v1 = this;
  }
  AcquireSRWLockExclusive((PSRWLOCK)v1 + 42);
  *((_BYTE *)v1 + 360) = 1;
  if ( v1 != (WindowEventDispatcher *)-336LL )
    ReleaseSRWLockExclusive((PSRWLOCK)v1 + 42);
  return 0LL;
}
