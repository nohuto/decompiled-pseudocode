/*
 * XREFs of _lambda_3d7cde0590ac75205a70a489945adb21_::_lambda_invoker_cdecl_ @ 0x180125D70
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E800 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_3d7cde0590ac75205a70a489945adb21_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a6 != 8 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        886LL,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)a4);
      __debugbreak();
    }
    v6 = *(_QWORD *)(a4 + 128);
    if ( !v6 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, a5);
  }
  return 0LL;
}
