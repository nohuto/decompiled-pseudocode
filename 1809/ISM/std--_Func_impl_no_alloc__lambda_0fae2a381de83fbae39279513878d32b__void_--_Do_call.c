/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0fae2a381de83fbae39279513878d32b__void_::_Do_call @ 0x18011D390
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

BOOL __fastcall std::_Func_impl_no_alloc__lambda_0fae2a381de83fbae39279513878d32b__void_::_Do_call(__int64 a1)
{
  BOOL result; // eax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  **(_BYTE **)(a1 + 8) = 1;
  result = SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 16) + 128LL));
  if ( !result )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x904,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v2);
    JUMPOUT(0x18011D3CFLL);
  }
  return result;
}
