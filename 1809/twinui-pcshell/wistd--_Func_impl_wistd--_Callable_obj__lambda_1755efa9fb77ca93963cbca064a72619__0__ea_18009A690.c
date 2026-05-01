/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_1755efa9fb77ca93963cbca064a72619__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18009A690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_1755efa9fb77ca93963cbca064a72619__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        LPWSTR *a2,
        unsigned __int64 *a3,
        _QWORD **a4)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdi
  DWORD FullPathNameW; // eax
  const char *v7; // r9
  unsigned int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a3;
  v5 = *a4;
  FullPathNameW = GetFullPathNameW(**(LPCWSTR **)(a1 + 8), *a3, *a2, 0LL);
  v8 = 0;
  *v5 = FullPathNameW;
  if ( FullPathNameW )
  {
    if ( FullPathNameW < v4 )
      *v5 = FullPathNameW + 1LL;
  }
  else
  {
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x28D,
                           (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
                           v7);
  }
  return v8;
}
