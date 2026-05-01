/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x180154CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *result; // rax

  if ( !a2 )
    __fastfail(7u);
  *a2 = off_1803CA0B0;
  v4 = a2 + 1;
  v5 = a1 + 8;
  *v4 = 0LL;
  if ( v4 != (_QWORD *)(a1 + 8) )
  {
    *v4 = *(_QWORD *)v5;
    *(_QWORD *)v5 = 0LL;
  }
  v4[1] = *(_QWORD *)(v5 + 8);
  result = a2;
  *((_OWORD *)v4 + 1) = *(_OWORD *)(v5 + 16);
  return result;
}
