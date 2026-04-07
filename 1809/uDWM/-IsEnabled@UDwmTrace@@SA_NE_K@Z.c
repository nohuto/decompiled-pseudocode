/*
 * XREFs of ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x180073264
 * Callers:
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180073304 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180073B50 (wistd--_Func_impl_wistd--_Callable_obj__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__0__ea_180073B50.c)
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180073D18 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

bool __fastcall UDwmTrace::IsEnabled(__int64 a1)
{
  _DWORD *v1; // rcx
  bool result; // al

  v1 = *(_DWORD **)(wil::details::static_lazy<UDwmTrace>::get(
                      a1,
                      lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                  + 8);
  result = 0;
  if ( v1 )
    return *v1 != 0;
  return result;
}
