/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_a95af7086c80fda5bbb6272344ecf907__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x1803544F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$_Func_base@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ @ 0x1800E5378 (--0-$_Func_base@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_a95af7086c80fda5bbb6272344ecf907__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  if ( !a2 )
    __fastfail(7u);
  wistd::_Func_base<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Func_base<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>(a2);
  *v4 = off_1803CCC90;
  v4[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4 + 1);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
