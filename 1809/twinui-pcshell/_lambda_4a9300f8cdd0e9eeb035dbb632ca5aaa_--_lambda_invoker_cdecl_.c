/*
 * XREFs of _lambda_4a9300f8cdd0e9eeb035dbb632ca5aaa_::_lambda_invoker_cdecl_ @ 0x1800E4A70
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@U_SEB_EVENT_HEADER@@@?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@QEAAXPEBU_SEB_EVENT_HEADER@@K@Z @ 0x1800E4C28 (--$InternalCallback@U_SEB_EVENT_HEADER@@@-$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@w.c)
 */

__int64 __fastcall lambda_4a9300f8cdd0e9eeb035dbb632ca5aaa_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<_SEB_EVENT_HEADER>::InternalCallback<_SEB_EVENT_HEADER>(a4, a5, a6);
  return 0LL;
}
