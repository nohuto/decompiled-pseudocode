/*
 * XREFs of ?GetViewForTabInDrag@TabTransferManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x180276710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITabViewManager@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6E78 (--$query@UITabViewManager@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$?0UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18024407C (--$-0UIInspectable@@@-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exceptio.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabTransferManager::GetViewForTabInDrag(
        TabTransferManager *this,
        struct IInspectable *a2,
        struct IApplicationView **a3)
{
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  void *v11[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11[1] = (void *)-2LL;
  *a3 = 0LL;
  try
  {
    wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>(
      (__int64)&v10,
      a2);
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabViewManager>(
      (struct IWeakReference **)this + 8,
      v11);
    v5 = (*(__int64 (__fastcall **)(void *, __int64, struct IApplicationView **))(*(_QWORD *)v11[0] + 24LL))(
           v11[0],
           v10,
           a3);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2147023728 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        734LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)v5);
    if ( *a3 )
      goto LABEL_16;
    AcquireSRWLockShared((PSRWLOCK)this + 6);
    v11[2] = (char *)this + 48;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, v12);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        741LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v6);
    v7 = v12[0] - *((_QWORD *)this + 24);
    if ( v12[0] == *((_QWORD *)this + 24) )
      v7 = v12[1] - *((_QWORD *)this + 25);
    if ( !v7 )
    {
      *a3 = (struct IApplicationView *)*((_QWORD *)this + 32);
      if ( this != (TabTransferManager *)-48LL )
        ReleaseSRWLockShared((PSRWLOCK)this + 6);
LABEL_16:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v11);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
      return 0LL;
    }
    if ( this != (TabTransferManager *)-48LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 6);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
    result = 2147943568LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F2,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v8);
  }
  return result;
}
