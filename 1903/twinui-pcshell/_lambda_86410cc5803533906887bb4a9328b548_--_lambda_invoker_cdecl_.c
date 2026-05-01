/*
 * XREFs of _lambda_86410cc5803533906887bb4a9328b548_::_lambda_invoker_cdecl_ @ 0x1801FB650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_86410cc5803533906887bb4a9328b548_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WORK Work)
{
  wil::details::AsyncEventInvocationPolicy<1>::HandleAsyncEventInvoke(Context + 64, Context + 88, Context + 96);
}
