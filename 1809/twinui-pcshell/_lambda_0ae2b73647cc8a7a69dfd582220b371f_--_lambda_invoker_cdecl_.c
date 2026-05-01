/*
 * XREFs of _lambda_0ae2b73647cc8a7a69dfd582220b371f_::_lambda_invoker_cdecl_ @ 0x180176CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@K@?$wnf_subscription_state@K@details@wil@@QEAAXPEBKK@Z @ 0x180176F2C (--$InternalCallback@K@-$wnf_subscription_state@K@details@wil@@QEAAXPEBKK@Z.c)
 */

__int64 __fastcall lambda_0ae2b73647cc8a7a69dfd582220b371f_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<unsigned long>::InternalCallback<unsigned long>(a4, a5, a6);
  return 0LL;
}
