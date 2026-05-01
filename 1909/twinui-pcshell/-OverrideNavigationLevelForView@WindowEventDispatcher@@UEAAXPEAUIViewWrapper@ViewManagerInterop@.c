/*
 * XREFs of ?OverrideNavigationLevelForView@WindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x18029DD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018B50 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180021994 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18029E6E0 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowEventDispatcher::OverrideNavigationLevelForView(
        RTL_SRWLOCK *a1,
        void (__fastcall ***a2)(_QWORD),
        int a3)
{
  void (__fastcall *v6)(_QWORD); // rbx
  unsigned __int8 (__fastcall *v7)(__int64, __int64); // rax
  __int64 *v8; // rax
  RTL_SRWLOCK *v9; // rcx
  __int64 result; // rax
  const char *v11; // r9
  std::_Ref_count_base *v12[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-40h]
  char v14; // [rsp+40h] [rbp-38h]
  char v15[8]; // [rsp+48h] [rbp-30h] BYREF
  std::_Ref_count_base *v16; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v18; // [rsp+88h] [rbp+10h] BYREF
  RTL_SRWLOCK *v19; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0LL;
  v6 = **a2;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v18);
  try
  {
    v6(a2);
    v7 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 312LL);
    if ( a3 == 2 )
    {
      if ( v7(v18, 1LL) )
      {
        v13 = &v18;
        v14 = 1;
        *(_OWORD *)v12 = 0LL;
        AcquireSRWLockShared(a1 + 52);
        v19 = a1 + 52;
        v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 264LL))(v18, v15);
        std::shared_ptr<ViewEventRegistration>::operator=(v12, v8);
        if ( v16 )
          std::_Ref_count_base::_Decref(v16);
        if ( a1 != (RTL_SRWLOCK *)-416LL )
          ReleaseSRWLockShared(a1 + 52);
        v9 = (RTL_SRWLOCK *)*((_QWORD *)v12[0] + 3);
        v19 = v9;
        if ( v9 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v9->Ptr + 1))(v9);
        WindowEventDispatcher::RaiseViewEvent(&a1[-5], a2, 7LL, &v19);
        if ( v12[1] )
          std::_Ref_count_base::_Decref(v12[1]);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 312LL))(v18, 2LL);
      }
    }
    else
    {
      v7(v18, 0LL);
    }
    result = wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v18);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x827,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
             v11);
  }
  return result;
}
