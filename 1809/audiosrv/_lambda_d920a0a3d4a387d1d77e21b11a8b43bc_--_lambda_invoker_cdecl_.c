/*
 * XREFs of _lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_ @ 0x1800163D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  wil::details::EnabledStateManager::OnTimer(Context);
}
