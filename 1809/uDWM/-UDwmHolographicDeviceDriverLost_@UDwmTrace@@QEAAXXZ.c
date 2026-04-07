/*
 * XREFs of ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x180073A34
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180073B50 (wistd--_Func_impl_wistd--_Callable_obj__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__0__ea_180073B50.c)
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180073D18 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void __fastcall UDwmTrace::UDwmHolographicDeviceDriverLost_(UDwmTrace *this)
{
  const struct _TlgProvider_t *v1; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<UDwmTrace>::get(
                                           this,
                                           lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v1 > 4u
    && (*((_QWORD *)v1 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v1 + 3) & 0x400000000000LL) == *((_QWORD *)v1 + 3) )
  {
    TlgWrite(v1, &unk_1800C18B9, 0LL, 0LL, 2u, &pData);
  }
}
