/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_0c124a2bf883ef613db2e16bf520a939__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18009A640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_0c124a2bf883ef613db2e16bf520a939__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        LPWSTR *a2,
        DWORD *a3,
        _QWORD **a4)
{
  _QWORD *v4; // rbx
  DWORD v5; // eax
  const char *v6; // r9
  unsigned int v7; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a4;
  v5 = ExpandEnvironmentStringsW(**(LPCWSTR **)(a1 + 8), *a2, *a3);
  v7 = 0;
  *v4 = v5;
  if ( !v5 )
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x6B,
                           (__int64)"internal\\sdk\\inc\\wil\\win32helpers.h",
                           v6);
  return v7;
}
