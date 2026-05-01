/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_d300e846e7c8c1760543b5a30f1e2d9d__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x18009A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_d300e846e7c8c1760543b5a30f1e2d9d__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  if ( !a2 )
    __fastfail(7u);
  *a2 = off_1803CAA48;
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
