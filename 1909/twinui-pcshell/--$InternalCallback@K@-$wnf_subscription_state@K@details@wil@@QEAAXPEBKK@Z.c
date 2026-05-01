/*
 * XREFs of ??$InternalCallback@K@?$wnf_subscription_state@K@details@wil@@QEAAXPEBKK@Z @ 0x1801C54FC
 * Callers:
 *     _lambda_a14e49ce427a1853f087bba834558a2c_::_lambda_invoker_cdecl_ @ 0x1801C5270 (_lambda_a14e49ce427a1853f087bba834558a2c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E800 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details::wnf_subscription_state<unsigned long>::InternalCallback<unsigned long>(
        __int64 a1,
        __int64 a2,
        int a3,
        const char *a4)
{
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(retaddr, 886LL, (__int64)"internal\\sdk\\inc\\wil\\resource.h", a4);
    __debugbreak();
  }
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}
