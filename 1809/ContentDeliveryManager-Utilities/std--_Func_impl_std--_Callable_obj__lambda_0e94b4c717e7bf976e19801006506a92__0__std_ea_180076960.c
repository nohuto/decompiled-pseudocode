/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_0e94b4c717e7bf976e19801006506a92__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&___ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&___ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move @ 0x180076960
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A9FB8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl_std::_Callable_obj__lambda_0e94b4c717e7bf976e19801006506a92__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx

  if ( !a2 )
  {
    a2 = operator new(0x18uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  *a2 = off_1800E0228;
  v3 = (_QWORD *)(a1 + 8);
  a2[1] = 0LL;
  if ( a2 + 1 != (_QWORD *)(a1 + 8) )
  {
    a2[1] = *v3;
    *v3 = 0LL;
  }
  return a2;
}
