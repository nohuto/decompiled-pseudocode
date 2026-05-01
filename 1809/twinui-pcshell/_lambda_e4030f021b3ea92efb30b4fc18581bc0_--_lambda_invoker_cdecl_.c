/*
 * XREFs of _lambda_e4030f021b3ea92efb30b4fc18581bc0_::_lambda_invoker_cdecl_ @ 0x18014F9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_e4030f021b3ea92efb30b4fc18581bc0_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer)
{
  ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)(unsigned int)Context, 0LL);
}
