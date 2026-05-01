/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_e4a3a0ee0f384d9d6c758ab831ea8347__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18008FF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_e4a3a0ee0f384d9d6c758ab831ea8347__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_short_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        WCHAR **a2,
        DWORD *a3,
        _QWORD **a4)
{
  DWORD v4; // eax
  _QWORD *v5; // rdi
  WCHAR *v6; // r8
  unsigned int v7; // ebx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwSize; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a3;
  v5 = *a4;
  v6 = *a2;
  dwSize = v4;
  v7 = 0;
  if ( QueryFullProcessImageNameW(**(HANDLE **)(a1 + 8), **(_DWORD **)(a1 + 16), v6, &dwSize) || GetLastError() == 122 )
    *v5 = dwSize + 1;
  else
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x97,
                           (__int64)"internal\\sdk\\inc\\wil\\win32helpers.h",
                           v8);
  return v7;
}
