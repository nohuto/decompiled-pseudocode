/*
 * XREFs of ?OverrideNavigationLevelForView@WindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x180229810
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180025ED4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18022A3E0 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowEventDispatcher::OverrideNavigationLevelForView(
        RTL_SRWLOCK *a1,
        void (__fastcall ***a2)(_QWORD),
        int a3)
{
  unsigned __int8 (__fastcall *v6)(__int64, __int64); // rax
  __int64 *v7; // rax
  RTL_SRWLOCK *v8; // rcx
  __int64 result; // rax
  const char *v10; // r9
  std::_Ref_count_base *v11[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-30h]
  char v13; // [rsp+40h] [rbp-28h]
  char v14[8]; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v15; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  RTL_SRWLOCK *v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v17);
  try
  {
    (**a2)(a2);
    v6 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 296LL);
    if ( a3 == 2 )
    {
      if ( v6(v17, 1LL) )
      {
        v12 = &v17;
        v13 = 1;
        *(_OWORD *)v11 = 0LL;
        AcquireSRWLockShared(a1 + 53);
        v18 = a1 + 53;
        v7 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 248LL))(v17, v14);
        std::shared_ptr<ViewEventRegistration>::operator=(v11, v7);
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        if ( a1 != (RTL_SRWLOCK *)-424LL )
          ReleaseSRWLockShared(a1 + 53);
        v8 = (RTL_SRWLOCK *)*((_QWORD *)v11[0] + 3);
        v18 = v8;
        if ( v8 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 1))(v8);
        WindowEventDispatcher::RaiseViewEvent(&a1[-5], a2, 7LL, &v18);
        if ( v11[1] )
          std::_Ref_count_base::_Decref(v11[1]);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 296LL))(v17, 2LL);
      }
    }
    else
    {
      v6(v17, 0LL);
    }
    result = wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v17);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x7A1,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
             v10);
  }
  return result;
}
