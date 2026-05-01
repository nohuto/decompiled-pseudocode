/*
 * XREFs of ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x1802AF334
 * Callers:
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x1802AF2F4 (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??4?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802AA430 (--4-$unique_ptr@VSmartCookie@@U-$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::Unregister(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  SmartCookie *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  SmartCookie *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 56);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 56));
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(a1 + 64));
  std::unique_ptr<SmartCookie>::operator=(&v6, (SmartCookie **)(a1 + 48));
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = v6;
  SmartCookie::Unregister(v6);
  if ( v3 )
  {
    SmartCookie::Unregister(v3);
    wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      (__int64)v3,
      v4);
    wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      (__int64)v3,
      v5);
    operator delete(v3, (const struct std::nothrow_t *)0x78);
  }
}
