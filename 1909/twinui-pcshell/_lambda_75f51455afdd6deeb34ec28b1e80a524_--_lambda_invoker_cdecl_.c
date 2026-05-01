/*
 * XREFs of _lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_ @ 0x18015ED60
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x180092D20 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 */

unsigned int lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_()
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(
             &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
             1u,
             &fPending,
             &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)CustomShellHostTelemetry::`vector deleting destructor'(
                             (CustomShellHostTelemetry *)Context,
                             0);
  }
  return result;
}
