/*
 * XREFs of _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_ @ 0x1800B3920
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x18004C2E6 (InitOnceBeginInitialize_0.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180073000 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

void __fastcall lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize_0(
         &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      wil::TraceLoggingProvider::`vector deleting destructor'((wil::TraceLoggingProvider *)Context, 0);
  }
}
