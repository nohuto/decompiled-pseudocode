/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1801D460C
 * Callers:
 *     _lambda_d5a453c259c1c666423c9d39fc9189fd_::operator() @ 0x1801D71EC (_lambda_d5a453c259c1c666423c9d39fc9189fd_--operator().c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_5860b5e6cc13572247a78ff58f223768__0__wistd::details::function_allocator_wistd::_Func_class_long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x1801EFEB0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_5860b5e6cc13572247a78ff58f223768__0__ea_1801EFEB0.c)
 *     _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator() @ 0x180293EB0 (_lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator().c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x180296E70 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::function<void (void)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
