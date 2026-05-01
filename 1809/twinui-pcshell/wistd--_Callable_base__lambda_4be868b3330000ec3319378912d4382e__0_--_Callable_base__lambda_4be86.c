/*
 * XREFs of wistd::_Callable_base__lambda_4be868b3330000ec3319378912d4382e__0_::_Callable_base__lambda_4be868b3330000ec3319378912d4382e__0___lambda_4be868b3330000ec3319378912d4382e___ @ 0x18008CA7C
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_4be868b3330000ec3319378912d4382e___ @ 0x18008CAA8 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_4be868b3330000ec331937.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_4be868b3330000ec3319378912d4382e__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x18008D360 (wistd--_Func_impl_wistd--_Callable_obj__lambda_4be868b3330000ec3319378912d4382e__0__ea_18008D360.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::_Callable_base__lambda_4be868b3330000ec3319378912d4382e__0_::_Callable_base__lambda_4be868b3330000ec3319378912d4382e__0___lambda_4be868b3330000ec3319378912d4382e___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdx

  *a1 = *a2;
  v2 = a2 + 1;
  a1[1] = 0LL;
  if ( a1 + 1 != v2 )
  {
    a1[1] = *v2;
    *v2 = 0LL;
  }
  return a1;
}
