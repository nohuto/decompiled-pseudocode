/*
 * XREFs of ??0AgileGitPtr@@QEAA@AEBV0@@Z @ 0x18007CEDC
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x180090E98 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     _lambda_117332e7da3c9ad186c9a97544532860_::_lambda_117332e7da3c9ad186c9a97544532860_ @ 0x180094A4C (_lambda_117332e7da3c9ad186c9a97544532860_--_lambda_117332e7da3c9ad186c9a97544532860_.c)
 *     _lambda_117332e7da3c9ad186c9a97544532860_::operator() @ 0x180094AF0 (_lambda_117332e7da3c9ad186c9a97544532860_--operator().c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_117332e7da3c9ad186c9a97544532860__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x180094F60 (wistd--_Func_impl_wistd--_Callable_obj__lambda_117332e7da3c9ad186c9a97544532860__0__ea_180094F60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

AgileGitPtr *__fastcall AgileGitPtr::AgileGitPtr(AgileGitPtr *this, const struct AgileGitPtr *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
