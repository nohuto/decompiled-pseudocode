/*
 * XREFs of _lambda_522324fbb5dde8754aa82d91ec00ee97_::_lambda_invoker_cdecl_ @ 0x180085220
 * Callers:
 *     <none>
 * Callees:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180079680 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

void __fastcall lambda_522324fbb5dde8754aa82d91ec00ee97_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      wil::TraceLoggingProvider::`vector deleting destructor'((wil::TraceLoggingProvider *)Context, 0);
  }
}
