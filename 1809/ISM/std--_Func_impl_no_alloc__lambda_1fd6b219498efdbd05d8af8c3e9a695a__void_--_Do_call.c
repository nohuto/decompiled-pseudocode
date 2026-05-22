/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_::_Do_call @ 0x18011DC50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180020FA8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_::_Do_call(__int64 a1)
{
  __int64 *v1; // rax
  _DWORD *v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax
  const char *v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(__int64 **)(a1 + 8);
  v2 = *(_DWORD **)(a1 + 16);
  v3 = *v1;
  if ( *v2 == 1 )
  {
    result = 44LL;
  }
  else
  {
    if ( *v2 != 2 )
    {
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x53,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
        "Invalid state passed to GetCountForState",
        v5);
      JUMPOUT(0x18011DC9BLL);
    }
    result = 48LL;
  }
  --*(_DWORD *)(v3 + result);
  return result;
}
