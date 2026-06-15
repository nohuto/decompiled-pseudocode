/*
 * XREFs of _lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_ @ 0x1800FAD80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1f7d91c801a964f38e999207b709b9ee_::operator() @ 0x1800FB3B8 (_lambda_1f7d91c801a964f38e999207b709b9ee_--operator().c)
 */

void __fastcall lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        __int64 WaitResult)
{
  lambda_1f7d91c801a964f38e999207b709b9ee_::operator()(Instance, Context, Context, WaitResult);
}
