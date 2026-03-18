/*
 * XREFs of _lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_ @ 0x180154B20
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180155D84 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_(char *a1)
{
  if ( *a1 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a1 + 168), (PSRWLOCK)a1 + 4);
}
