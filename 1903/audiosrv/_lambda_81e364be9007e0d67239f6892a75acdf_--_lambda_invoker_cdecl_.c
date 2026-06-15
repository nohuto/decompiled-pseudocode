/*
 * XREFs of _lambda_81e364be9007e0d67239f6892a75acdf_::_lambda_invoker_cdecl_ @ 0x1800BDE60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800BF7D8 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

__int64 __fastcall lambda_81e364be9007e0d67239f6892a75acdf_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *(_BYTE *)a4 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a4 + 96), (PSRWLOCK)(a4 + 32));
  return 0LL;
}
