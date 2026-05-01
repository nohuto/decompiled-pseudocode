/*
 * XREFs of _lambda_a63e5a66e1cb17c0339c66ca98f5b4c9_::_lambda_invoker_cdecl_ @ 0x18019AC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_a63e5a66e1cb17c0339c66ca98f5b4c9_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer)
{
  ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)(unsigned int)Context, 0LL);
}
