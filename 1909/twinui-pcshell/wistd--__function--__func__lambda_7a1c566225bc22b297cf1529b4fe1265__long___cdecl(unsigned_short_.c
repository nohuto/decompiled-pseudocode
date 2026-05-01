/*
 * XREFs of wistd::__function::__func__lambda_7a1c566225bc22b297cf1529b4fe1265__long___cdecl(unsigned_short___unsigned___int64_unsigned___int64__)_::operator() @ 0x180084B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_7a1c566225bc22b297cf1529b4fe1265__long___cdecl_unsigned_short___unsigned___int64_unsigned___int64____::operator()(
        __int64 a1,
        WCHAR **a2,
        DWORD *a3,
        _QWORD **a4)
{
  DWORD v4; // eax
  _QWORD *v5; // rdi
  WCHAR *v6; // r8
  unsigned int v7; // ebx
  const char *v9; // r9
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
                           (void *)0xAA,
                           (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
                           v9);
  return v7;
}
